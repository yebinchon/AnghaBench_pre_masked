
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tps_pmic {TYPE_1__** info; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int* table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct tps_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps_pmic*,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_7)
{
 struct tps_pmic *VAR_8 = FUNC_0(VAR_7);
 int VAR_9, VAR_10 = FUNC_1(VAR_7);
 u8 VAR_11, VAR_12;

 if (VAR_10 < VAR_1 || VAR_10 > VAR_2)
  return -VAR_0;
 else {
  VAR_11 = (VAR_10 == VAR_1 ?
   VAR_5 : VAR_3);
  VAR_12 = (VAR_10 == VAR_1 ?
   VAR_6 :
    VAR_4);
 }

 VAR_9 = FUNC_2(VAR_8, VAR_11);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 &= VAR_12;
 return VAR_8->info[VAR_10]->table[VAR_9] * 1000;
}
