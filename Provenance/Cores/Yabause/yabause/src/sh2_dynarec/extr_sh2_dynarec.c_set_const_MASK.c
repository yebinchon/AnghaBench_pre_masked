
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct regstat {char* regmap; int isdoingcp; int* cpmap; } ;


 int VAR_0 ;

void FUNC_0(struct regstat *VAR_1,signed char VAR_2,u64 VAR_3)
{
  int VAR_4;
  if(VAR_2<0) return;
  for (VAR_4=0;VAR_4<VAR_0;VAR_4++) {
    if(VAR_1->regmap[VAR_4]==VAR_2) {
      VAR_1->isdoingcp|=1<<VAR_4;
      VAR_1->cpmap[VAR_4]=VAR_3;
    }
    else if((VAR_1->regmap[VAR_4]^64)==VAR_2) {
      VAR_1->isdoingcp|=1<<VAR_4;
      VAR_1->cpmap[VAR_4]=VAR_3>>32;
    }
  }
}
