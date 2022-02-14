
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccwgroup_device {int dev; int reg_mutex; } ;
struct ccw_device {int ccwlock; int dev; } ;


 int FUNC_0 (struct ccwgroup_device*) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 int FUNC_2 (struct ccw_device*) ;
 struct ccwgroup_device* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

void FUNC_12(struct ccw_device *VAR_0)
{
 struct ccwgroup_device *VAR_1;


 FUNC_2(VAR_0);

 FUNC_10(VAR_0->ccwlock);
 VAR_1 = FUNC_3(&VAR_0->dev);
 if (!VAR_1) {
  FUNC_11(VAR_0->ccwlock);
  return;
 }

 FUNC_6(&VAR_1->dev);
 FUNC_11(VAR_0->ccwlock);

 FUNC_7(&VAR_1->reg_mutex);
 if (FUNC_4(&VAR_1->dev)) {
  FUNC_1(VAR_1);
  FUNC_5(&VAR_1->dev);
  FUNC_0(VAR_1);
 }
 FUNC_8(&VAR_1->reg_mutex);

 FUNC_9(&VAR_1->dev);
}
