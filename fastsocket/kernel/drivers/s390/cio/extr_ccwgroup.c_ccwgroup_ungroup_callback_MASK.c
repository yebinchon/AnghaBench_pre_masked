
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ccwgroup_device {int reg_mutex; int dev; } ;


 int FUNC_0 (struct ccwgroup_device*) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ccwgroup_device* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0)
{
 struct ccwgroup_device *VAR_1 = FUNC_6(VAR_0);

 FUNC_4(&VAR_1->reg_mutex);
 if (FUNC_2(&VAR_1->dev)) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_0);
  FUNC_0(VAR_1);
 }
 FUNC_5(&VAR_1->reg_mutex);
}
