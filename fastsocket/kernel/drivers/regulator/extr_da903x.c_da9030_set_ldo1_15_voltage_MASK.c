
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
struct da903x_regulator_info {int min_uV; int step_uV; int vol_shift; int vol_nbits; int vol_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct da903x_regulator_info*,int,int) ;
 int FUNC_1 (struct device*,int ,int,int) ;
 int FUNC_2 (char*,int,int) ;
 struct da903x_regulator_info* FUNC_3 (struct regulator_dev*) ;
 struct device* FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_3,
           int VAR_4, int VAR_5)
{
 struct da903x_regulator_info *VAR_6 = FUNC_3(VAR_3);
 struct device *VAR_7 = FUNC_4(VAR_3);
 uint8_t VAR_8, VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_6, VAR_4, VAR_5)) {
  FUNC_2("invalid voltage range (%d, %d) uV\n", VAR_4, VAR_5);
  return -VAR_2;
 }

 VAR_8 = (VAR_4 - VAR_6->min_uV + VAR_6->step_uV - 1) / VAR_6->step_uV;
 VAR_8 <<= VAR_6->vol_shift;
 VAR_9 = ((1 << VAR_6->vol_nbits) - 1) << VAR_6->vol_shift;
 VAR_8 |= VAR_0;
 VAR_9 |= VAR_1;


 VAR_10 = FUNC_1(VAR_7, VAR_6->vol_reg, VAR_8, VAR_9);
 if (VAR_10)
  return VAR_10;

 return FUNC_1(VAR_7, VAR_6->vol_reg, VAR_8, VAR_9);
}
