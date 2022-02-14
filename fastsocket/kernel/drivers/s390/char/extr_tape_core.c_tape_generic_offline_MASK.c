
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int tape_state; int cdev_id; int cdev; } ;
struct ccw_device {int dev; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;



 struct tape_device* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tape_device*) ;
 int FUNC_7 (struct tape_device*,int const) ;

int
FUNC_8(struct ccw_device *VAR_2)
{
 struct tape_device *VAR_3;

 VAR_3 = FUNC_2(&VAR_2->dev);
 if (!VAR_3) {
  return -VAR_1;
 }

 FUNC_1(3, "(%08x): tape_generic_offline(%p)\n",
  VAR_3->cdev_id, VAR_3);

 FUNC_4(FUNC_3(VAR_3->cdev));
 switch (VAR_3->tape_state) {
  case 130:
  case 129:
   FUNC_5(FUNC_3(VAR_3->cdev));
   break;
  case 128:
   FUNC_7(VAR_3, 130);
   FUNC_5(FUNC_3(VAR_3->cdev));
   FUNC_6(VAR_3);
   break;
  default:
   FUNC_0(3, "(%08x): Set offline failed "
    "- drive in use.\n",
    VAR_3->cdev_id);
   FUNC_5(FUNC_3(VAR_3->cdev));
   return -VAR_0;
 }

 FUNC_1(3, "(%08x): Drive set offline.\n", VAR_3->cdev_id);
 return 0;
}
