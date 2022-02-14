
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
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_10 ;
 int FUNC_1 (int,char,int) ;
 int FUNC_2 (unsigned char*,int,int*) ;
 int FUNC_3 (unsigned char*,int,int) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;

void FUNC_5(struct regstat *VAR_17,int VAR_18,signed char VAR_19)
{
  int VAR_20,VAR_21;
  int VAR_22 = (VAR_19&3)+(VAR_19>21)*4+(VAR_19==24)+(VAR_19==28)+(VAR_19==32);
  if(VAR_19==VAR_0) VAR_22=VAR_3;


  if((VAR_17->u>>VAR_19)&1) return;


  for(VAR_21=0;VAR_21<VAR_4;VAR_21++)
  {
    if(VAR_17->regmap[VAR_21]==VAR_19) return;
  }


  VAR_22 = FUNC_1(VAR_18,VAR_19,VAR_22);


  if(VAR_17->regmap[VAR_22]==-1) {
    VAR_17->regmap[VAR_22]=VAR_19;
    VAR_17->dirty&=~(1<<VAR_22);
    VAR_17->isdoingcp&=~(1<<VAR_22);
    return;
  }
  VAR_20=VAR_17->regmap[VAR_22];
  if(VAR_20<64&&((VAR_17->u>>VAR_20)&1)) {
    VAR_17->regmap[VAR_22]=VAR_19;
    VAR_17->dirty&=~(1<<VAR_22);
    VAR_17->isdoingcp&=~(1<<VAR_22);
    return;
  }



  for(VAR_21=0;VAR_21<4;VAR_21++) {
    if(VAR_17->regmap[VAR_21]==-1) {
      VAR_17->regmap[VAR_21]=VAR_19;
      VAR_17->dirty&=~(1<<VAR_21);
      VAR_17->isdoingcp&=~(1<<VAR_21);
      return;
    }
  }







  for(VAR_21=0;VAR_21<VAR_4;VAR_21++)
  {
    VAR_20=VAR_17->regmap[VAR_21];
    if(VAR_20>=0) {
      if((VAR_17->u>>VAR_20)&1)
        if(VAR_18==0||(VAR_16[VAR_18-1]>>VAR_20)&1) {VAR_17->regmap[VAR_21]=-1;break;}
    }
  }


  if(VAR_18>0) {
    for(VAR_21=0;VAR_21<VAR_4;VAR_21++) {
      if(VAR_21!=VAR_2&&VAR_17->regmap[VAR_21]==-1) {
        if(VAR_11[VAR_18-1].regmap[VAR_21]!=VAR_12[VAR_18-1]&&VAR_11[VAR_18-1].regmap[VAR_21]!=VAR_13[VAR_18-1]&&VAR_11[VAR_18-1].regmap[VAR_21]!=VAR_14[VAR_18-1]&&VAR_11[VAR_18-1].regmap[VAR_21]!=VAR_15[VAR_18-1]) {
          VAR_17->regmap[VAR_21]=VAR_19;
          VAR_17->dirty&=~(1<<VAR_21);
          VAR_17->isdoingcp&=~(1<<VAR_21);
          return;
        }
      }
    }
  }

  for(VAR_21=0;VAR_21<VAR_4;VAR_21++) {
    if(VAR_21!=VAR_2&&VAR_17->regmap[VAR_21]==-1) {
      VAR_17->regmap[VAR_21]=VAR_19;
      VAR_17->dirty&=~(1<<VAR_21);
      VAR_17->isdoingcp&=~(1<<VAR_21);
      return;
    }
  }



  unsigned char VAR_23[VAR_5+1];
  FUNC_3(VAR_23,10,sizeof(VAR_23));
  int VAR_24;
  FUNC_2(VAR_23,VAR_18,&VAR_22);

  if(VAR_18>0) {


    if(VAR_9[VAR_18]&&VAR_23[VAR_0]>2) VAR_23[VAR_0]=2;
    if(VAR_18>1&&VAR_23[VAR_0]>2&&(VAR_10[VAR_18-2]==VAR_6||VAR_10[VAR_18-2]==VAR_8||VAR_10[VAR_18-2]==VAR_1||VAR_10[VAR_18-2]==VAR_7)) VAR_23[VAR_0]=2;
    for(VAR_24=10;VAR_24>=3;VAR_24--)
    {

      if(VAR_23[VAR_20=VAR_17->regmap[VAR_22]&63]==VAR_24) {
        for(VAR_21=0;VAR_21<VAR_4;VAR_21++) {

          if((VAR_17->regmap[VAR_21]&63)==VAR_20) {
            VAR_17->regmap[VAR_21]=-1;
            VAR_17->dirty&=~(1<<VAR_21);
            VAR_17->isdoingcp&=~(1<<VAR_21);
          }
        }
        VAR_17->regmap[VAR_22]=VAR_19;
        return;
      }
      for(VAR_20=0;VAR_20<=VAR_5;VAR_20++)
      {
        if(VAR_23[VAR_20]==VAR_24&&VAR_20!=VAR_12[VAR_18-1]&&VAR_20!=VAR_13[VAR_18-1]&&VAR_20!=VAR_14[VAR_18-1]&&VAR_20!=VAR_15[VAR_18-1]) {
          for(VAR_21=0;VAR_21<VAR_4;VAR_21++) {
            if(VAR_21!=VAR_3||VAR_24<VAR_23[VAR_0]) {
              if(VAR_17->regmap[VAR_21]==VAR_20+64) {
                VAR_17->regmap[VAR_21]=VAR_19;
                VAR_17->dirty&=~(1<<VAR_21);
                VAR_17->isdoingcp&=~(1<<VAR_21);
                return;
              }
            }
          }
          for(VAR_21=0;VAR_21<VAR_4;VAR_21++) {
            if(VAR_21!=VAR_3||VAR_24<VAR_23[VAR_0]) {
              if(VAR_17->regmap[VAR_21]==VAR_20) {
                VAR_17->regmap[VAR_21]=VAR_19;
                VAR_17->dirty&=~(1<<VAR_21);
                VAR_17->isdoingcp&=~(1<<VAR_21);
                return;
              }
            }
          }
        }
      }
    }
  }
  for(VAR_24=10;VAR_24>=0;VAR_24--)
  {
    for(VAR_20=0;VAR_20<=VAR_5;VAR_20++)
    {
      if(VAR_23[VAR_20]==VAR_24) {
        for(VAR_21=0;VAR_21<VAR_4;VAR_21++) {
          if(VAR_17->regmap[VAR_21]==VAR_20+64) {
            VAR_17->regmap[VAR_21]=VAR_19;
            VAR_17->dirty&=~(1<<VAR_21);
            VAR_17->isdoingcp&=~(1<<VAR_21);
            return;
          }
        }
        for(VAR_21=0;VAR_21<VAR_4;VAR_21++) {
          if(VAR_17->regmap[VAR_21]==VAR_20) {
            VAR_17->regmap[VAR_21]=VAR_19;
            VAR_17->dirty&=~(1<<VAR_21);
            VAR_17->isdoingcp&=~(1<<VAR_21);
            return;
          }
        }
      }
    }
  }
  FUNC_4("This shouldn't happen (alloc_reg)");FUNC_0(1);
}
