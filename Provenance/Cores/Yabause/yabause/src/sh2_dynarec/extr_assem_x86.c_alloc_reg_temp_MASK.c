
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {char* regmap; int dirty; int isdoingcp; int u; } ;
typedef int hsn ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_10 ;
 int FUNC_1 (unsigned char*,int,int*) ;
 int FUNC_2 (unsigned char*,int,int) ;
 int FUNC_3 (char*) ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;

void FUNC_4(struct regstat *VAR_16,int VAR_17,signed char VAR_18)
{
  int VAR_19,VAR_20;
  int VAR_21 = -1;


  for(VAR_20=0;VAR_20<VAR_4;VAR_20++)
  {
    if(VAR_20!=VAR_2&&VAR_16->regmap[VAR_20]==VAR_18) return;
  }



  for(VAR_20=VAR_4-1;VAR_20>=0;VAR_20--) {
    if(VAR_20!=VAR_2&&VAR_16->regmap[VAR_20]==-1) {
      VAR_16->regmap[VAR_20]=VAR_18;
      VAR_16->dirty&=~(1<<VAR_20);
      VAR_16->isdoingcp&=~(1<<VAR_20);
      return;
    }
  }


  for(VAR_20=VAR_4-1;VAR_20>=0;VAR_20--)
  {
    VAR_19=VAR_16->regmap[VAR_20];
    if(VAR_19>=0) {
      if((VAR_16->u>>VAR_19)&1) {
        if(VAR_17==0||((VAR_15[VAR_17-1]>>VAR_19)&1)) {
          VAR_16->regmap[VAR_20]=VAR_18;
          VAR_16->dirty&=~(1<<VAR_20);
          VAR_16->isdoingcp&=~(1<<VAR_20);
          return;
        }
      }
    }
  }





  unsigned char VAR_22[VAR_5+1];
  FUNC_2(VAR_22,10,sizeof(VAR_22));
  int VAR_23;
  FUNC_1(VAR_22,VAR_17,&VAR_21);

  if(VAR_17>0) {


    if(VAR_9[VAR_17]&&VAR_22[VAR_0]>2) VAR_22[VAR_0]=2;
    if(VAR_17>1&&VAR_22[VAR_0]>2&&(VAR_10[VAR_17-2]==VAR_6||VAR_10[VAR_17-2]==VAR_8||VAR_10[VAR_17-2]==VAR_1||VAR_10[VAR_17-2]==VAR_7)) VAR_22[VAR_0]=2;
    for(VAR_23=10;VAR_23>=3;VAR_23--)
    {
      for(VAR_19=0;VAR_19<=VAR_5;VAR_19++)
      {
        if(VAR_22[VAR_19]==VAR_23&&VAR_19!=VAR_11[VAR_17-1]&&VAR_19!=VAR_12[VAR_17-1]&&VAR_19!=VAR_13[VAR_17-1]&&VAR_19!=VAR_14[VAR_17-1]) {
          for(VAR_20=0;VAR_20<VAR_4;VAR_20++) {
            if(VAR_20!=VAR_3||VAR_23<VAR_22[VAR_0]) {
              if(VAR_16->regmap[VAR_20]==VAR_19+64) {
                VAR_16->regmap[VAR_20]=VAR_18;
                VAR_16->dirty&=~(1<<VAR_20);
                VAR_16->isdoingcp&=~(1<<VAR_20);
                return;
              }
            }
          }
          for(VAR_20=0;VAR_20<VAR_4;VAR_20++) {
            if(VAR_20!=VAR_3||VAR_23<VAR_22[VAR_0]) {
              if(VAR_16->regmap[VAR_20]==VAR_19) {
                VAR_16->regmap[VAR_20]=VAR_18;
                VAR_16->dirty&=~(1<<VAR_20);
                VAR_16->isdoingcp&=~(1<<VAR_20);
                return;
              }
            }
          }
        }
      }
    }
  }
  for(VAR_23=10;VAR_23>=0;VAR_23--)
  {
    for(VAR_19=0;VAR_19<=VAR_5;VAR_19++)
    {
      if(VAR_22[VAR_19]==VAR_23) {
        for(VAR_20=0;VAR_20<VAR_4;VAR_20++) {
          if(VAR_16->regmap[VAR_20]==VAR_19+64) {
            VAR_16->regmap[VAR_20]=VAR_18;
            VAR_16->dirty&=~(1<<VAR_20);
            VAR_16->isdoingcp&=~(1<<VAR_20);
            return;
          }
        }
        for(VAR_20=0;VAR_20<VAR_4;VAR_20++) {
          if(VAR_16->regmap[VAR_20]==VAR_19) {
            VAR_16->regmap[VAR_20]=VAR_18;
            VAR_16->dirty&=~(1<<VAR_20);
            VAR_16->isdoingcp&=~(1<<VAR_20);
            return;
          }
        }
      }
    }
  }
  FUNC_3("This shouldn't happen");FUNC_0(1);
}
