
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps_pmic {TYPE_1__** info; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int min_uV; int max_uV; int table_len; int* table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tps_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps_pmic*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3,
    int VAR_4, int VAR_5)
{
 struct tps_pmic *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = FUNC_1(VAR_3);
 int VAR_8;

 if (VAR_7 != VAR_1)
  return -VAR_0;

 if (VAR_4 < VAR_6->info[VAR_7]->min_uV
   || VAR_4 > VAR_6->info[VAR_7]->max_uV)
  return -VAR_0;
 if (VAR_5 < VAR_6->info[VAR_7]->min_uV
   || VAR_5 > VAR_6->info[VAR_7]->max_uV)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6->info[VAR_7]->table_len; VAR_8++) {
  int VAR_9 = VAR_6->info[VAR_7]->table[VAR_8];
  int VAR_10 = VAR_9 * 1000;


  if (VAR_4 <= VAR_10 && VAR_10 <= VAR_5)
   break;
 }


 if (VAR_8 == VAR_6->info[VAR_7]->table_len)
  return -VAR_0;
 else
  return FUNC_2(VAR_6, VAR_2, VAR_8);
}
