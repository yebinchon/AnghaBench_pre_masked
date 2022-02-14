
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int mutex; } ;
struct regulator {struct regulator_dev* rdev; } ;


 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct regulator *VAR_0)
{
 struct regulator_dev *VAR_1 = VAR_0->rdev;
 int VAR_2 = 0;

 FUNC_1(&VAR_1->mutex);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_1->mutex);
 return VAR_2;
}
