
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urdev {scalar_t__ open_flag; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ccw_device*) ;
 struct urdev* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct ccw_device *VAR_2)
{
 struct urdev *VAR_3 = FUNC_1(&VAR_2->dev);

 FUNC_0("ur_pm_suspend: cdev=%p\n", VAR_2);
 if (VAR_3->open_flag) {
  FUNC_3("Unit record device %s is busy, %s refusing to "
         "suspend.\n", FUNC_2(&VAR_2->dev), VAR_1);
  return -VAR_0;
 }
 return 0;
}
