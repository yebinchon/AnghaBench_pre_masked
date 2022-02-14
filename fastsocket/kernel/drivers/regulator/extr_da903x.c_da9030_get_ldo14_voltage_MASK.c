
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
struct da903x_regulator_info {int vol_nbits; int vol_shift; int min_uV; int step_uV; int max_uV; int vol_reg; } ;


 int FUNC_0 (struct device*,int ,int*) ;
 struct da903x_regulator_info* FUNC_1 (struct regulator_dev*) ;
 struct device* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct da903x_regulator_info *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = FUNC_2(VAR_0);
 uint8_t VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1->vol_reg, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = ((1 << VAR_1->vol_nbits) - 1) << VAR_1->vol_shift;
 VAR_3 = (VAR_3 & VAR_4) >> VAR_1->vol_shift;

 if (VAR_3 & 0x4)
  return VAR_1->min_uV + VAR_1->step_uV * (3 - (VAR_3 & ~0x4));
 else
  return (VAR_1->max_uV + VAR_1->min_uV) / 2 +
   VAR_1->step_uV * (VAR_3 & ~0x4);
}
