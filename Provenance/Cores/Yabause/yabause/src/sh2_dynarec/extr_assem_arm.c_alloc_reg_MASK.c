
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regstat {char u; char* regmap; int dirty; int isdoingcp; } ;
typedef int hsn ;
struct TYPE_2__ {int* regmap; } ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_11 ;
 int FUNC_1 (int,char,int) ;
 int FUNC_2 (unsigned char*,int,int*) ;
 int FUNC_3 (unsigned char*,int,int) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;

void FUNC_5(struct regstat *VAR_18,int VAR_19,signed char VAR_20)
{
  int VAR_21,VAR_22;
  int VAR_23 = (VAR_20&7);
  if(VAR_20==VAR_0) VAR_23=VAR_3;
  if(VAR_20==VAR_6) VAR_23=12;


  if((VAR_18->u>>VAR_20)&1) return;


  for(VAR_22=0;VAR_22<VAR_4;VAR_22++)
  {
    if(VAR_18->regmap[VAR_22]==VAR_20) return;
  }


  VAR_23 = FUNC_1(VAR_19,VAR_20,VAR_23);


  if(VAR_18->regmap[VAR_23]==-1) {
    VAR_18->regmap[VAR_23]=VAR_20;
    VAR_18->dirty&=~(1<<VAR_23);
    VAR_18->isdoingcp&=~(1<<VAR_23);
    return;
  }
  VAR_21=VAR_18->regmap[VAR_23];
  if(VAR_21<64&&((VAR_18->u>>VAR_21)&1)) {
    VAR_18->regmap[VAR_23]=VAR_20;
    VAR_18->dirty&=~(1<<VAR_23);
    VAR_18->isdoingcp&=~(1<<VAR_23);
    return;
  }







  for(VAR_22=0;VAR_22<VAR_4;VAR_22++)
  {
    VAR_21=VAR_18->regmap[VAR_22];
    if(VAR_21>=0) {
      if((VAR_18->u>>VAR_21)&1)
        if(VAR_19==0||(VAR_17[VAR_19-1]>>VAR_21)&1) {VAR_18->regmap[VAR_22]=-1;break;}
    }
  }


  if(VAR_19>0) {
    for(VAR_22=0;VAR_22<VAR_4;VAR_22++) {
      if(VAR_22!=VAR_2&&VAR_18->regmap[VAR_22]==-1) {
        if(VAR_12[VAR_19-1].regmap[VAR_22]!=VAR_13[VAR_19-1]&&VAR_12[VAR_19-1].regmap[VAR_22]!=VAR_14[VAR_19-1]&&VAR_12[VAR_19-1].regmap[VAR_22]!=VAR_15[VAR_19-1]&&VAR_12[VAR_19-1].regmap[VAR_22]!=VAR_16[VAR_19-1]) {
          VAR_18->regmap[VAR_22]=VAR_20;
          VAR_18->dirty&=~(1<<VAR_22);
          VAR_18->isdoingcp&=~(1<<VAR_22);
          return;
        }
      }
    }
  }

  for(VAR_22=0;VAR_22<VAR_4;VAR_22++) {
    if(VAR_22!=VAR_2&&VAR_18->regmap[VAR_22]==-1) {
      VAR_18->regmap[VAR_22]=VAR_20;
      VAR_18->dirty&=~(1<<VAR_22);
      VAR_18->isdoingcp&=~(1<<VAR_22);
      return;
    }
  }



  unsigned char VAR_24[VAR_5+1];
  FUNC_3(VAR_24,10,sizeof(VAR_24));
  int VAR_25;
  FUNC_2(VAR_24,VAR_19,&VAR_23);


  if(VAR_19>0) {


    if(VAR_10[VAR_19]&&VAR_24[VAR_0]>2) VAR_24[VAR_0]=2;
    if(VAR_19>1&&VAR_24[VAR_0]>2&&(VAR_11[VAR_19-2]==VAR_7||VAR_11[VAR_19-2]==VAR_9||VAR_11[VAR_19-2]==VAR_1||VAR_11[VAR_19-2]==VAR_8)) VAR_24[VAR_0]=2;
    for(VAR_25=10;VAR_25>=3;VAR_25--)
    {

      if(VAR_24[VAR_21=VAR_18->regmap[VAR_23]&63]==VAR_25) {
        for(VAR_22=0;VAR_22<VAR_4;VAR_22++) {

          if((VAR_18->regmap[VAR_22]&63)==VAR_21) {
            VAR_18->regmap[VAR_22]=-1;
            VAR_18->dirty&=~(1<<VAR_22);
            VAR_18->isdoingcp&=~(1<<VAR_22);
          }
        }
        VAR_18->regmap[VAR_23]=VAR_20;
        return;
      }
      for(VAR_21=0;VAR_21<=VAR_5;VAR_21++)
      {
        if(VAR_24[VAR_21]==VAR_25&&VAR_21!=VAR_13[VAR_19-1]&&VAR_21!=VAR_14[VAR_19-1]&&VAR_21!=VAR_15[VAR_19-1]&&VAR_21!=VAR_16[VAR_19-1]) {
          for(VAR_22=0;VAR_22<VAR_4;VAR_22++) {
            if(VAR_22!=VAR_3||VAR_25<VAR_24[VAR_0]) {
              if(VAR_18->regmap[VAR_22]==VAR_21+64) {
                VAR_18->regmap[VAR_22]=VAR_20;
                VAR_18->dirty&=~(1<<VAR_22);
                VAR_18->isdoingcp&=~(1<<VAR_22);
                return;
              }
            }
          }
          for(VAR_22=0;VAR_22<VAR_4;VAR_22++) {
            if(VAR_22!=VAR_3||VAR_25<VAR_24[VAR_0]) {
              if(VAR_18->regmap[VAR_22]==VAR_21) {
                VAR_18->regmap[VAR_22]=VAR_20;
                VAR_18->dirty&=~(1<<VAR_22);
                VAR_18->isdoingcp&=~(1<<VAR_22);
                return;
              }
            }
          }
        }
      }
    }
  }
  for(VAR_25=10;VAR_25>=0;VAR_25--)
  {
    for(VAR_21=0;VAR_21<=VAR_5;VAR_21++)
    {
      if(VAR_24[VAR_21]==VAR_25) {
        for(VAR_22=0;VAR_22<VAR_4;VAR_22++) {
          if(VAR_18->regmap[VAR_22]==VAR_21+64) {
            VAR_18->regmap[VAR_22]=VAR_20;
            VAR_18->dirty&=~(1<<VAR_22);
            VAR_18->isdoingcp&=~(1<<VAR_22);
            return;
          }
        }
        for(VAR_22=0;VAR_22<VAR_4;VAR_22++) {
          if(VAR_18->regmap[VAR_22]==VAR_21) {
            VAR_18->regmap[VAR_22]=VAR_20;
            VAR_18->dirty&=~(1<<VAR_22);
            VAR_18->isdoingcp&=~(1<<VAR_22);
            return;
          }
        }
      }
    }
  }
  FUNC_4("This shouldn't happen (alloc_reg)");FUNC_0(1);
}
