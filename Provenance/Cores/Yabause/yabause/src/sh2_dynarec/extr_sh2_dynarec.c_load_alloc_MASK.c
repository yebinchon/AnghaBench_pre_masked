
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {scalar_t__* regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_0 (struct regstat*,int,scalar_t__) ;
 int FUNC_1 (struct regstat*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct regstat*,scalar_t__) ;
 int FUNC_4 (struct regstat*,scalar_t__) ;
 int FUNC_5 (struct regstat*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct regstat*,scalar_t__) ;
 int* VAR_7 ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int* VAR_8 ;
 int* VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__* VAR_11 ;
 scalar_t__* VAR_12 ;
 scalar_t__* VAR_13 ;
 int FUNC_9 (struct regstat*,scalar_t__,int) ;

void FUNC_10(struct regstat *VAR_14,int VAR_15)
{
  int VAR_16;
  FUNC_3(VAR_14,VAR_12[VAR_15]);

  if(FUNC_8(VAR_10[VAR_15],VAR_15)) FUNC_0(VAR_14,VAR_15,VAR_10[VAR_15]);

  FUNC_0(VAR_14,VAR_15,VAR_12[VAR_15]==VAR_5?VAR_4:VAR_12[VAR_15]);
  if(VAR_6[VAR_15]==VAR_0||VAR_6[VAR_15]==VAR_1) {
    FUNC_0(VAR_14,VAR_15,VAR_10[VAR_15]);
    FUNC_0(VAR_14,VAR_15,VAR_11[VAR_15]);
    if(!FUNC_7(VAR_14,VAR_10[VAR_15])||!FUNC_7(VAR_14,VAR_11[VAR_15])) {

      FUNC_3(VAR_14,VAR_10[VAR_15]);
      FUNC_3(VAR_14,VAR_11[VAR_15]);
    }
  }
  else
  if(VAR_6[VAR_15]==VAR_3) {
    if(FUNC_7(VAR_14,VAR_13[VAR_15])) {
      int VAR_17=FUNC_5(VAR_14,VAR_13[VAR_15]);
      FUNC_9(VAR_14,VAR_13[VAR_15],VAR_17+(1<<((VAR_8[VAR_15]==4)?2:(VAR_9[VAR_15]&3))));

    }
    else {
      FUNC_0(VAR_14,VAR_15,VAR_13[VAR_15]);
      FUNC_4(VAR_14,VAR_13[VAR_15]);
    }
  }


  FUNC_0(VAR_14,VAR_15,VAR_2);
  if(VAR_12[VAR_15]==VAR_5||FUNC_6(VAR_14->regmap,VAR_12[VAR_15])<0) {

    FUNC_1(VAR_14,VAR_15,-1);
    VAR_7[VAR_15]=1;
  }
  if(VAR_12[VAR_15]==VAR_5) FUNC_4(VAR_14,VAR_4);
  else FUNC_4(VAR_14,VAR_12[VAR_15]);


  VAR_16=FUNC_6(VAR_14->regmap,VAR_2);
  FUNC_2(VAR_16>=0);
  FUNC_2(VAR_14->regmap[VAR_16]==VAR_2);
  VAR_14->regmap[VAR_16]=-1;
  VAR_7[VAR_15]++;
}
