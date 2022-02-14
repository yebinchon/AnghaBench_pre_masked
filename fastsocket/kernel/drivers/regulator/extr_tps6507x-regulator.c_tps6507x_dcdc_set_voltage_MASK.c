
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
 struct tps_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps_pmic*,int ) ;
 int FUNC_3 (struct tps_pmic*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5,
    int VAR_6, int VAR_7)
{
 struct tps_pmic *VAR_8 = FUNC_0(VAR_5);
 int VAR_9, VAR_10, VAR_11 = FUNC_1(VAR_5);
 u8 VAR_12;

 switch (VAR_11) {
 case 130:
  VAR_12 = VAR_2;
  break;
 case 129:
  VAR_12 = VAR_3;
  break;
 case 128:
  VAR_12 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6 < VAR_8->info[VAR_11]->min_uV
  || VAR_6 > VAR_8->info[VAR_11]->max_uV)
  return -VAR_0;
 if (VAR_7 < VAR_8->info[VAR_11]->min_uV
  || VAR_7 > VAR_8->info[VAR_11]->max_uV)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_8->info[VAR_11]->table_len; VAR_10++) {
  int VAR_13 = VAR_8->info[VAR_11]->table[VAR_10];
  int VAR_14 = VAR_13 * 1000;


  if (VAR_6 <= VAR_14 && VAR_14 <= VAR_7)
   break;
 }


 if (VAR_10 == VAR_8->info[VAR_11]->table_len)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8, VAR_12);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 &= ~VAR_1;
 VAR_9 |= VAR_10;

 return FUNC_3(VAR_8, VAR_12, VAR_9);
}
