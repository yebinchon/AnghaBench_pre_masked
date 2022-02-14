
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct request_pm_state {scalar_t__ pm_state; int pm_step; } ;
struct request {struct request_pm_state* special; int cmd_type; } ;
struct device {int dummy; } ;
typedef int rqpm ;
struct TYPE_7__ {scalar_t__ event; } ;
typedef TYPE_1__ pm_message_t ;
typedef int ide_hwif_t ;
struct TYPE_8__ {int dn; int queue; int * hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,struct request*,int ) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 TYPE_2__* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct request_pm_state*,int ,int) ;

int FUNC_9(struct device *VAR_6, pm_message_t VAR_7)
{
 ide_drive_t *VAR_8 = FUNC_3(VAR_6);
 ide_drive_t *VAR_9 = FUNC_6(VAR_8);
 ide_hwif_t *VAR_10 = VAR_8->hwif;
 struct request *VAR_11;
 struct request_pm_state VAR_12;
 int VAR_13;

 if (FUNC_7(VAR_10)) {

  if ((VAR_8->dn & 1) == 0 || VAR_9 == ((void*)0))
   FUNC_4(VAR_10);
 }

 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 VAR_11 = FUNC_1(VAR_8->queue, VAR_3, VAR_5);
 VAR_11->cmd_type = VAR_4;
 VAR_11->special = &VAR_12;
 VAR_12.pm_step = VAR_0;
 if (VAR_7.event == VAR_2)
  VAR_7.event = VAR_1;
 VAR_12.pm_state = VAR_7.event;

 VAR_13 = FUNC_0(VAR_8->queue, ((void*)0), VAR_11, 0);
 FUNC_2(VAR_11);

 if (VAR_13 == 0 && FUNC_7(VAR_10)) {

  if ((VAR_8->dn & 1) || VAR_9 == ((void*)0))
   FUNC_5(VAR_10, 0);
 }

 return VAR_13;
}
