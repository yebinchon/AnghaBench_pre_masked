
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tape_device {int tape_state; TYPE_1__* cdev; int cdev_id; } ;
struct TYPE_5__ {int kobj; } ;
struct ccw_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,int ,struct ccw_device*) ;



 int FUNC_2 (struct tape_device*) ;
 struct tape_device* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *) ;
 int VAR_0 ;
 int FUNC_11 (struct tape_device*) ;
 int FUNC_12 (struct tape_device*) ;
 int FUNC_13 (struct tape_device*,int const) ;

void
FUNC_14(struct ccw_device *VAR_1)
{
 struct tape_device * VAR_2;

 VAR_2 = FUNC_3(&VAR_1->dev);
 if (!VAR_2) {
  return;
 }
 FUNC_1(3, "(%08x): tape_generic_remove(%p)\n", VAR_2->cdev_id, VAR_1);

 FUNC_8(FUNC_6(VAR_2->cdev));
 switch (VAR_2->tape_state) {
  case 130:
   FUNC_13(VAR_2, 129);
  case 129:



   FUNC_9(FUNC_6(VAR_2->cdev));
   break;
  case 128:



   FUNC_13(VAR_2, 129);
   FUNC_9(FUNC_6(VAR_2->cdev));
   FUNC_11(VAR_2);
   break;
  default:





   FUNC_0(3, "(%08x): Drive in use vanished!\n",
    VAR_2->cdev_id);
   FUNC_7("%s: A tape unit was detached while in "
       "use\n", FUNC_4(&VAR_2->cdev->dev));
   FUNC_13(VAR_2, 129);
   FUNC_2(VAR_2);
   FUNC_9(FUNC_6(VAR_2->cdev));
   FUNC_11(VAR_2);
 }

 if (FUNC_3(&VAR_1->dev)) {
  FUNC_10(&VAR_1->dev.kobj, &VAR_0);
  FUNC_5(&VAR_1->dev, FUNC_12(FUNC_3(&VAR_1->dev)));
 }
}
