
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da903x_regulator_info {unsigned int min_uV; unsigned int step_uV; int max_uV; } ;


 int VAR_0 ;
 struct da903x_regulator_info* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1, unsigned VAR_2)
{
 struct da903x_regulator_info *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = VAR_3->min_uV + VAR_3->step_uV * VAR_2;
 if (VAR_4 > VAR_3->max_uV)
  return -VAR_0;
 return VAR_4;
}
