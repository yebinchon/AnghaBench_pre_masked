
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tps_pmic {TYPE_1__** info; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int min_uV; int max_uV; int table_len; int* table; } ;


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
 int FUNC_3 (struct tps_pmic*,int,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_7,
    int VAR_8, int VAR_9)
{
 struct tps_pmic *VAR_10 = FUNC_0(VAR_7);
 int VAR_11, VAR_12, VAR_13 = FUNC_1(VAR_7);
 u8 VAR_14, VAR_15;

 if (VAR_13 < VAR_1 || VAR_13 > VAR_2)
  return -VAR_0;
 else {
  VAR_14 = (VAR_13 == VAR_1 ?
   VAR_5 : VAR_3);
  VAR_15 = (VAR_13 == VAR_1 ?
   VAR_6 :
    VAR_4);
 }

 if (VAR_8 < VAR_10->info[VAR_13]->min_uV || VAR_8 > VAR_10->info[VAR_13]->max_uV)
  return -VAR_0;
 if (VAR_9 < VAR_10->info[VAR_13]->min_uV || VAR_9 > VAR_10->info[VAR_13]->max_uV)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_10->info[VAR_13]->table_len; VAR_12++) {
  int VAR_16 = VAR_10->info[VAR_13]->table[VAR_12];
  int VAR_17 = VAR_16 * 1000;


  if (VAR_8 <= VAR_17 && VAR_17 <= VAR_9)
   break;
 }

 if (VAR_12 == VAR_10->info[VAR_13]->table_len)
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_10, VAR_14);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 &= ~VAR_15;
 VAR_11 |= VAR_12;

 return FUNC_3(VAR_10, VAR_14, VAR_11);
}
