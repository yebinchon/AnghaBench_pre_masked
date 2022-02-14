
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps_pmic {TYPE_1__** info; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {unsigned int table_len; int* table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tps_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_3,
     unsigned VAR_4)
{
 struct tps_pmic *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = FUNC_1(VAR_3);

 if (VAR_6 < VAR_1 || VAR_6 > VAR_2)
  return -VAR_0;

 if (VAR_4 >= VAR_5->info[VAR_6]->table_len)
  return -VAR_0;
 else
  return VAR_5->info[VAR_6]->table[VAR_4] * 1000;
}
