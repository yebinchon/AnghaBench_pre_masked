
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps_pmic {TYPE_1__** info; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int table_len; int* table; int min_uV; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tps_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps_pmic*,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_4)
{
 struct tps_pmic *VAR_5 = FUNC_0(VAR_4);
 int VAR_6, VAR_7 = FUNC_1(VAR_4);

 if (VAR_7 < VAR_1 || VAR_7 > VAR_2)
  return -VAR_0;

 if (VAR_7 == VAR_1) {
  VAR_6 = FUNC_2(VAR_5, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_6 &= (VAR_5->info[VAR_7]->table_len - 1);
  return VAR_5->info[VAR_7]->table[VAR_6] * 1000;
 } else
  return VAR_5->info[VAR_7]->min_uV;
}
