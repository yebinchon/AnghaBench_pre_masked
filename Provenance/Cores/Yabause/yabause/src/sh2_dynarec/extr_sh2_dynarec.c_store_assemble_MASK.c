
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regstat {scalar_t__* regmap; int wasdoingcp; int isconst; int* constmap; long long u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int,int,int,int,int,int ,int) ;
 scalar_t__* VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * VAR_11 ;
 int** VAR_12 ;
 int FUNC_3 (int,int,int,int,int,int,int) ;
 int FUNC_4 (int,int,int,int*) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int,int,int,int,int) ;
 int FUNC_10 (int,int ,int,int,int) ;
 int FUNC_11 (int,int ,int,int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (scalar_t__*,int) ;
 int FUNC_14 (scalar_t__*,int) ;
 int* VAR_13 ;
 int FUNC_15 (int,int,int,scalar_t__*,int,int ,int) ;
 int* VAR_14 ;
 int* VAR_15 ;
 scalar_t__ VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int* VAR_19 ;
 int* VAR_20 ;

void FUNC_16(int VAR_21,struct regstat *VAR_22)
{
  int VAR_23,VAR_24,VAR_25,VAR_26=-1,VAR_27=-1;
  int VAR_28,VAR_29;
  int VAR_30;
  int VAR_31=0,VAR_32,VAR_33;
  int VAR_34,VAR_35=0,VAR_36;
  int VAR_37=(VAR_10[VAR_21]==VAR_1);
  int VAR_38=(VAR_14[VAR_21]==4)?2:(VAR_15[VAR_21]&3);
  int VAR_39=VAR_0+(VAR_21&1);
  unsigned int VAR_40;
  u32 VAR_41=0;
  VAR_24=FUNC_14(VAR_22->regmap,VAR_17[VAR_21]);
  VAR_23=FUNC_14(VAR_22->regmap,VAR_18[VAR_21]);
  VAR_25=FUNC_14(VAR_22->regmap,VAR_19[VAR_21]);
  VAR_29=FUNC_14(VAR_22->regmap,VAR_39);
  if(VAR_29<0) VAR_29=FUNC_14(VAR_22->regmap,-1);
  VAR_30=VAR_13[VAR_21];
  for(VAR_40=0;VAR_40<VAR_2;VAR_40++) {
    if(VAR_22->regmap[VAR_40]>=0) VAR_41|=1<<VAR_40;
  }

  if(VAR_23>=0) {
    if(VAR_37)
      VAR_35=(VAR_22->wasdoingcp>>VAR_23)&(VAR_22->wasdoingcp>>VAR_25)&1;
    else
      VAR_35=(VAR_22->wasdoingcp>>VAR_23)&1;
    if(VAR_35) {
      if(VAR_37)
        VAR_36=VAR_12[VAR_21][VAR_23]+VAR_12[VAR_21][VAR_25];
      else
        VAR_36=VAR_12[VAR_21][VAR_23]+VAR_30;
    }

    VAR_34=FUNC_2(VAR_36);
  }
  if(!VAR_35) {
    if(VAR_37) {
      VAR_35=(VAR_22->isconst>>VAR_18[VAR_21])&(VAR_22->isconst>>VAR_19[VAR_21])&1;
    } else {
      VAR_35=(VAR_22->isconst>>VAR_18[VAR_21])&1;
    }
    if(VAR_35) {
      if(VAR_37)
        VAR_36=VAR_22->constmap[VAR_18[VAR_21]]+VAR_22->constmap[VAR_19[VAR_21]];
      else
        VAR_36=VAR_22->constmap[VAR_18[VAR_21]]+VAR_30;

      VAR_34=FUNC_2(VAR_36);

      if(FUNC_2(VAR_36)) {
        FUNC_7(VAR_36^(!VAR_38),VAR_29);
        VAR_26=FUNC_14(VAR_22->regmap,VAR_4);
        if(VAR_26<0) VAR_26=FUNC_13(VAR_22->regmap,-1);
        FUNC_12(VAR_36,VAR_26);
      }
    }
  }
  FUNC_1(VAR_24>=0);
  FUNC_1(VAR_29>=0);
  if(VAR_30||VAR_37||VAR_23<0||VAR_35) VAR_28=VAR_29;
  else VAR_28=VAR_23;

  if(VAR_10[VAR_21]==VAR_5&&!VAR_35&&VAR_20[VAR_21]==VAR_17[VAR_21]) VAR_28=VAR_29;
  if(VAR_10[VAR_21]==VAR_6&&!VAR_35&&VAR_17[VAR_21]==VAR_18[VAR_21]) {
    FUNC_6(VAR_28,VAR_29);VAR_28=VAR_29;
  }
  if(!VAR_35||VAR_34)
  {
    int VAR_42=0;
    if (!VAR_35&&VAR_38==0) VAR_42=1;
    VAR_27=FUNC_14(VAR_22->regmap,VAR_3);
    VAR_26=FUNC_14(VAR_22->regmap,VAR_4);
    if(VAR_26<0) VAR_26=FUNC_13(VAR_22->regmap,-1);
    FUNC_1(VAR_26>=0);
    FUNC_1(VAR_26!=VAR_29);
    FUNC_1(VAR_26!=VAR_23);
    VAR_41&=~(1<<VAR_26);

    VAR_26=FUNC_3(VAR_28,VAR_29,VAR_26,VAR_27,VAR_42,VAR_35,VAR_36);
    if (!VAR_35&&VAR_38==0) VAR_28=VAR_29;
    FUNC_4(VAR_26,VAR_35,VAR_36,&VAR_31);

  }

  if (VAR_38==0) {
    if(!VAR_35||VAR_34) {
      int VAR_43=0;
      FUNC_9(VAR_24,VAR_43,VAR_29,VAR_26,VAR_29);
    }
    VAR_33=VAR_7;
  }
  if (VAR_38==1) {
    if(!VAR_35||VAR_34) {
      FUNC_10(VAR_24,0,VAR_28,VAR_26,VAR_29);
    }
    VAR_33=VAR_9;
  }
  if (VAR_38==2) {
    if(!VAR_35||VAR_34) {
      FUNC_8(VAR_24,16,VAR_24);
      FUNC_11(VAR_24,0,VAR_28,VAR_26,VAR_29);
      if(!(VAR_22->u&(1LL<<VAR_17[VAR_21])))
        FUNC_8(VAR_24,16,VAR_24);
    }
    VAR_33=VAR_8;
  }
  if(VAR_31) {
    FUNC_0(VAR_33,VAR_31,(int)VAR_16,VAR_21,VAR_28,(int)VAR_22,VAR_11[VAR_21],VAR_41);
  } else if(VAR_35&&!VAR_34) {
    FUNC_15(VAR_33,VAR_21,VAR_36,VAR_22->regmap,VAR_17[VAR_21],VAR_11[VAR_21],VAR_41);
  }
  if(VAR_10[VAR_21]==VAR_5) {
    FUNC_1(VAR_23>=0);
    if(!((VAR_22->wasdoingcp>>VAR_23)&1)&&VAR_20[VAR_21]==VAR_17[VAR_21]) FUNC_5(VAR_23,-(1<<VAR_38),VAR_23);
  }
}
