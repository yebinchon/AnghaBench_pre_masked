
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct request_pm_state {int pm_state; int pm_step; } ;
struct request {struct request_pm_state* special; int cmd_flags; int cmd_type; } ;
struct ide_driver {int (* resume ) (TYPE_1__*) ;} ;
struct device {scalar_t__ driver; } ;
typedef int rqpm ;
typedef int ide_hwif_t ;
struct TYPE_7__ {int dn; int queue; int * hwif; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,struct request*,int) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 TYPE_1__* FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct request_pm_state*,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 struct ide_driver* FUNC_11 (scalar_t__) ;

int FUNC_12(struct device *VAR_6)
{
 ide_drive_t *VAR_7 = FUNC_3(VAR_6);
 ide_drive_t *VAR_8 = FUNC_7(VAR_7);
 ide_hwif_t *VAR_9 = VAR_7->hwif;
 struct request *VAR_10;
 struct request_pm_state VAR_11;
 int VAR_12;

 if (FUNC_8(VAR_9)) {

  if ((VAR_7->dn & 1) == 0 || VAR_8 == ((void*)0)) {
   FUNC_6(VAR_9, 1);
   FUNC_5(VAR_9);
  }

  FUNC_4(VAR_7);
 }

 FUNC_9(&VAR_11, 0, sizeof(VAR_11));
 VAR_10 = FUNC_1(VAR_7->queue, VAR_2, VAR_5);
 VAR_10->cmd_type = VAR_4;
 VAR_10->cmd_flags |= VAR_3;
 VAR_10->special = &VAR_11;
 VAR_11.pm_step = VAR_0;
 VAR_11.pm_state = VAR_1;

 VAR_12 = FUNC_0(VAR_7->queue, ((void*)0), VAR_10, 1);
 FUNC_2(VAR_10);

 if (VAR_12 == 0 && VAR_6->driver) {
  struct ide_driver *VAR_13 = FUNC_11(VAR_6->driver);

  if (VAR_13->resume)
   VAR_13->resume(VAR_7);
 }

 return VAR_12;
}
