
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irb {int scsw; } ;
struct dasd_eckd_private {scalar_t__ lcu; } ;
struct dasd_device {scalar_t__ state; int features; TYPE_1__* cdev; int flags; scalar_t__ block; scalar_t__ private; } ;
struct dasd_ccw_req {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 scalar_t__ VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dasd_device*,char*) ;
 int FUNC_2 (struct dasd_device*,struct irb*) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 char* FUNC_5 (struct irb*) ;
 int FUNC_6 (struct dasd_device*) ;
 int FUNC_7 (int *,char*) ;
 char FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct dasd_device *VAR_12,
           struct dasd_ccw_req *VAR_13,
           struct irb *VAR_14)
{
 char VAR_15;
 char *VAR_16 = ((void*)0);
 struct dasd_eckd_private *VAR_17;

 VAR_17 = (struct dasd_eckd_private *) VAR_12->private;

 VAR_15 = VAR_8 | VAR_9 | VAR_11;
 if ((FUNC_8(&VAR_14->scsw) & VAR_15) == VAR_15) {




  if (!VAR_12->block && VAR_17->lcu &&
      VAR_12->state == VAR_7 &&
      !FUNC_10(VAR_3, &VAR_12->flags) &&
       !FUNC_10(VAR_4, &VAR_12->flags)) {






   FUNC_3(VAR_12);


   FUNC_6(VAR_12);
  }
  FUNC_4(VAR_12);
  return;
 }

 VAR_16 = FUNC_5(VAR_14);
 if (!VAR_16)
  return;


 if ((VAR_16[27] & VAR_5) && (VAR_16[7] == 0x0D) &&
     (FUNC_8(&VAR_14->scsw) & VAR_10)) {
  FUNC_2(VAR_12, VAR_14);
  return;
 }


 if (!VAR_13 && !(VAR_16[27] & VAR_5) &&
     ((VAR_16[6] & VAR_6) == VAR_6)) {
  FUNC_1(VAR_12, VAR_16);
  return;
 }




 if (VAR_12->block && (VAR_16[27] & VAR_5) &&
     (VAR_16[7] == 0x3F) &&
     (FUNC_8(&VAR_14->scsw) & VAR_10) &&
     FUNC_10(VAR_1, &VAR_12->flags)) {
  if (VAR_12->features & VAR_0)
   FUNC_9(VAR_2, &VAR_12->flags);
  FUNC_0(VAR_1, &VAR_12->flags);
  FUNC_7(&VAR_12->cdev->dev,
   "The device reservation was lost\n");
 }
}
