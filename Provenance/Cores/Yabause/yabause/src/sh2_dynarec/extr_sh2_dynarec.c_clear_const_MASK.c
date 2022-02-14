
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int* regmap; int isdoingcp; } ;


 int VAR_0 ;

void FUNC_0(struct regstat *VAR_1,signed char VAR_2)
{
  int VAR_3;
  if(VAR_2<0) return;
  for (VAR_3=0;VAR_3<VAR_0;VAR_3++) {
    if((VAR_1->regmap[VAR_3]&63)==VAR_2) {
      VAR_1->isdoingcp&=~(1<<VAR_3);
    }
  }
}
