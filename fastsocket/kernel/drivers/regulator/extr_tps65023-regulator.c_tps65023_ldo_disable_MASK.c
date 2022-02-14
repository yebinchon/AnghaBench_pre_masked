
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tps_pmic {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tps_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps_pmic*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_4)
{
 struct tps_pmic *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = FUNC_1(VAR_4);
 u8 VAR_7;

 if (VAR_6 < VAR_1 || VAR_6 > VAR_2)
  return -VAR_0;

 VAR_7 = (VAR_6 == VAR_1 ? 1 : 2);
 return FUNC_2(VAR_5, VAR_3, 1 << VAR_7);
}
