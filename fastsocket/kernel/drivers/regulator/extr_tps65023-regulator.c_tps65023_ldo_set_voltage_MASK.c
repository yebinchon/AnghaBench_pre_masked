
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 struct tps_pmic* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct tps_pmic*,int ) ;
 int FUNC_5 (struct tps_pmic*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_4,
    int VAR_5, int VAR_6)
{
 struct tps_pmic *VAR_7 = FUNC_2(VAR_4);
 int VAR_8, VAR_9, VAR_10 = FUNC_3(VAR_4);

 if (VAR_10 < VAR_1 || VAR_10 > VAR_2)
  return -VAR_0;

 if (VAR_5 < VAR_7->info[VAR_10]->min_uV || VAR_5 > VAR_7->info[VAR_10]->max_uV)
  return -VAR_0;
 if (VAR_6 < VAR_7->info[VAR_10]->min_uV || VAR_6 > VAR_7->info[VAR_10]->max_uV)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_7->info[VAR_10]->table_len; VAR_9++) {
  int VAR_11 = VAR_7->info[VAR_10]->table[VAR_9];
  int VAR_12 = VAR_11 * 1000;


  if (VAR_5 <= VAR_12 && VAR_12 <= VAR_6)
   break;
 }

 if (VAR_9 == VAR_7->info[VAR_10]->table_len)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_7, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 &= FUNC_0(VAR_10 - VAR_1);
 VAR_8 |= (VAR_9 << (FUNC_1(VAR_10 - VAR_1)));
 return FUNC_5(VAR_7, VAR_3, VAR_8);
}
