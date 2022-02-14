
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
 int VAR_4 ;
 struct tps_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps_pmic*,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_5)
{
 struct tps_pmic *VAR_6 = FUNC_0(VAR_5);
 int VAR_7, VAR_8 = FUNC_1(VAR_5);
 u8 VAR_9;

 if (VAR_8 < VAR_1 || VAR_8 > VAR_2)
  return -VAR_0;

 VAR_9 = VAR_3 - VAR_8;
 VAR_7 = FUNC_2(VAR_6, VAR_4);

 if (VAR_7 < 0)
  return VAR_7;
 else
  return (VAR_7 & 1<<VAR_9) ? 1 : 0;
}
