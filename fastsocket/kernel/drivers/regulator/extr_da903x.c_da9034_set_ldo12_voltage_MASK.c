
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
struct da903x_regulator_info {int min_uV; int step_uV; int vol_shift; int vol_nbits; int vol_reg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct da903x_regulator_info*,int,int) ;
 int FUNC_1 (struct device*,int ,int,int) ;
 int FUNC_2 (char*,int,int) ;
 struct da903x_regulator_info* FUNC_3 (struct regulator_dev*) ;
 struct device* FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1,
        int VAR_2, int VAR_3)
{
 struct da903x_regulator_info *VAR_4 = FUNC_3(VAR_1);
 struct device *VAR_5 = FUNC_4(VAR_1);
 uint8_t VAR_6, VAR_7;

 if (FUNC_0(VAR_4, VAR_2, VAR_3)) {
  FUNC_2("invalid voltage range (%d, %d) uV\n", VAR_2, VAR_3);
  return -VAR_0;
 }

 VAR_6 = (VAR_2 - VAR_4->min_uV + VAR_4->step_uV - 1) / VAR_4->step_uV;
 VAR_6 = (VAR_6 >= 20) ? VAR_6 - 12 : ((VAR_6 > 7) ? 8 : VAR_6);
 VAR_6 <<= VAR_4->vol_shift;
 VAR_7 = ((1 << VAR_4->vol_nbits) - 1) << VAR_4->vol_shift;

 return FUNC_1(VAR_5, VAR_4->vol_reg, VAR_6, VAR_7);
}
