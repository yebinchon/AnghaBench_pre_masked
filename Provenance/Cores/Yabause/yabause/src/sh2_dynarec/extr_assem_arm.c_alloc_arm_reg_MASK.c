
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u32 ;
struct regstat {char* regmap; int dirty; int isdoingcp; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct regstat *VAR_2,int VAR_3,signed char VAR_4,char VAR_5)
{
  int VAR_6;
  u32 VAR_7=0;


  for(VAR_6=0;VAR_6<VAR_1;VAR_6++)
  {
    if(VAR_6!=VAR_0&&VAR_2->regmap[VAR_6]==VAR_4) {
      VAR_7=(VAR_2->dirty>>VAR_6)&1;
      VAR_2->regmap[VAR_6]=-1;
    }
  }

  VAR_2->regmap[VAR_5]=VAR_4;
  VAR_2->dirty&=~(1<<VAR_5);
  VAR_2->dirty|=VAR_7<<VAR_5;
  VAR_2->isdoingcp&=~(1<<VAR_5);
}
