
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int* regmap; int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

void FUNC_0(struct regstat *VAR_7,int VAR_8)
{
  int VAR_9;

  for(VAR_9=0;VAR_9<VAR_1;VAR_9++) {
    if(VAR_9!=VAR_0) {
      if(((VAR_7->regmap[VAR_9]&63)!=VAR_2[VAR_8])&&((VAR_7->regmap[VAR_9]&63)!=VAR_3[VAR_8])&&((VAR_7->regmap[VAR_9]&63)!=VAR_4[VAR_8])&&
         ((VAR_7->regmap[VAR_9]&63)!=VAR_5[VAR_8])&&((VAR_7->regmap[VAR_9]&63)!=VAR_6[VAR_8]))
      {
        VAR_7->regmap[VAR_9]=-1;
        VAR_7->dirty&=~(1<<VAR_9);
      }
    }
  }
}
