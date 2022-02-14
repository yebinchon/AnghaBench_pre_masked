
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {scalar_t__ medium_state; int tape_state; int cdev_id; int cdev; } ;
struct ccw_device {int dev; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 struct tape_device* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct ccw_device *VAR_3)
{
 struct tape_device *VAR_4;

 VAR_4 = FUNC_1(&VAR_3->dev);
 if (!VAR_4) {
  return -VAR_1;
 }

 FUNC_0(3, "(%08x): tape_generic_pm_suspend(%p)\n",
  VAR_4->cdev_id, VAR_4);

 if (VAR_4->medium_state != VAR_2) {
  FUNC_4("A cartridge is loaded in tape device %s, "
         "refusing to suspend\n", FUNC_2(&VAR_3->dev));
  return -VAR_0;
 }

 FUNC_5(FUNC_3(VAR_4->cdev));
 switch (VAR_4->tape_state) {
  case 130:
  case 129:
  case 128:
   FUNC_6(FUNC_3(VAR_4->cdev));
   break;
  default:
   FUNC_4("Tape device %s is busy, refusing to "
          "suspend\n", FUNC_2(&VAR_3->dev));
   FUNC_6(FUNC_3(VAR_4->cdev));
   return -VAR_0;
 }

 FUNC_0(3, "(%08x): Drive suspended.\n", VAR_4->cdev_id);
 return 0;
}
