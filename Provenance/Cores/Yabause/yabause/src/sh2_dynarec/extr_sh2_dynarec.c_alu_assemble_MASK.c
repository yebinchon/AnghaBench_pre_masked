
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {long long u; int regmap; } ;


 long long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char,char,char) ;
 int FUNC_2 (char,char,char) ;
 int FUNC_3 (char,char,char) ;
 int FUNC_4 (char,char,char,char) ;
 int FUNC_5 (char,char,char,char) ;
 int FUNC_6 (char,char,char,char) ;
 int FUNC_7 (char,char,char,char) ;
 int FUNC_8 (char,char,char,char) ;
 int FUNC_9 (char,char,char) ;
 int FUNC_10 (char,char) ;
 int FUNC_11 (char,char,char,char) ;
 int FUNC_12 (char,char) ;
 int FUNC_13 (long long,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int,int,int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (char,char,char) ;
 int FUNC_18 (int,int,int) ;
 int FUNC_19 (char,char,char,char) ;
 int FUNC_20 (char,char,char) ;
 int FUNC_21 (char,char,char) ;
 int FUNC_22 (int,int) ;
 int FUNC_23 (char,char,char) ;
 void* FUNC_24 (int ,long long) ;
 int* VAR_1 ;
 int* VAR_2 ;
 long long* VAR_3 ;
 long long* VAR_4 ;
 long long* VAR_5 ;

void FUNC_25(int VAR_6,struct regstat *VAR_7)
{
  if(VAR_1[VAR_6]==2) {
    if(VAR_2[VAR_6]>=9&&VAR_2[VAR_6]<=11) {
      signed char VAR_8,VAR_9;
      VAR_8=FUNC_24(VAR_7->regmap,VAR_3[VAR_6]);
      VAR_9=FUNC_24(VAR_7->regmap,VAR_5[VAR_6]);

      if(VAR_9>=0) {
        if(VAR_2[VAR_6]==9) FUNC_3(VAR_8,VAR_9,VAR_9);
        if(VAR_2[VAR_6]==10) FUNC_23(VAR_3[VAR_6]>=0?VAR_8:VAR_9,VAR_9,VAR_9);
        if(VAR_2[VAR_6]==11) FUNC_17(VAR_8,VAR_9,VAR_9);
      }
    }
    else
    {
      signed char VAR_10,VAR_11,VAR_12,VAR_13;
      VAR_10=FUNC_24(VAR_7->regmap,VAR_3[VAR_6]);
      VAR_11=FUNC_24(VAR_7->regmap,VAR_4[VAR_6]);
      VAR_12=FUNC_24(VAR_7->regmap,VAR_0);
      VAR_13=FUNC_24(VAR_7->regmap,-1);
      FUNC_0(VAR_10>=0);
      FUNC_0(VAR_11>=0);
      FUNC_0(VAR_12>=0);
      FUNC_0(VAR_13>=0);
      if(VAR_2[VAR_6]==8) {
        FUNC_19(VAR_10,VAR_11,VAR_12,VAR_13);
      }
      else if(VAR_2[VAR_6]==12) {
        FUNC_11(VAR_10,VAR_11,VAR_12,VAR_13);
      }
    }
  }
  if(VAR_1[VAR_6]==3) {
    if(VAR_2[VAR_6]<8) {
      signed char VAR_14,VAR_15,VAR_16,VAR_17;
      VAR_14=FUNC_24(VAR_7->regmap,VAR_3[VAR_6]);
      VAR_15=FUNC_24(VAR_7->regmap,VAR_4[VAR_6]);
      VAR_16=FUNC_24(VAR_7->regmap,VAR_0);
      VAR_17=FUNC_24(VAR_7->regmap,-1);
      FUNC_0(VAR_14>=0);
      FUNC_0(VAR_15>=0);
      FUNC_0(VAR_17>=0);
      if(VAR_2[VAR_6]==0) FUNC_4(VAR_14,VAR_15,VAR_16,VAR_17);
      if(VAR_2[VAR_6]==2) FUNC_8(VAR_14,VAR_15,VAR_16,VAR_17);
      if(VAR_2[VAR_6]==3) FUNC_5(VAR_14,VAR_15,VAR_16,VAR_17);
      if(VAR_2[VAR_6]==6) FUNC_7(VAR_14,VAR_15,VAR_16,VAR_17);
      if(VAR_2[VAR_6]==7) FUNC_6(VAR_14,VAR_15,VAR_16,VAR_17);
    }
    else
    {
      signed char VAR_18,VAR_19,VAR_20,VAR_21;
      VAR_19=FUNC_24(VAR_7->regmap,VAR_5[VAR_6]);
      if(VAR_19>=0) {
        VAR_18=FUNC_24(VAR_7->regmap,VAR_3[VAR_6]);
        VAR_20=FUNC_24(VAR_7->regmap,VAR_0);
        VAR_21=FUNC_24(VAR_7->regmap,-1);
        FUNC_0(VAR_18>=0);

        if(VAR_2[VAR_6]==8) FUNC_20(VAR_19,VAR_18,VAR_19);
        if(VAR_2[VAR_6]==10) FUNC_21(VAR_18,VAR_19,VAR_20);

        FUNC_0(VAR_2[VAR_6]!=11);
        if(VAR_2[VAR_6]==12) FUNC_1(VAR_18,VAR_19,VAR_19);
        if(VAR_2[VAR_6]==14) FUNC_2(VAR_18,VAR_19,VAR_20);

        FUNC_0(VAR_2[VAR_6]!=15);
      }
    }
  }
  if(VAR_1[VAR_6]==4) {
    signed char VAR_22,VAR_23,VAR_24,VAR_25;
    VAR_22=FUNC_24(VAR_7->regmap,VAR_3[VAR_6]);
    VAR_24=FUNC_24(VAR_7->regmap,VAR_0);
    FUNC_0(VAR_22>=0);
    FUNC_0(VAR_24>=0);
    if(VAR_2[VAR_6]==0) {
      VAR_23=FUNC_24(VAR_7->regmap,VAR_5[VAR_6]);
      FUNC_0(VAR_23>=0);
      FUNC_0(VAR_22==VAR_23);
      FUNC_12(VAR_22,VAR_24);
    }
    else if(VAR_2[VAR_6]==1) FUNC_10(VAR_22,VAR_24);
    else if(VAR_2[VAR_6]==5)
    {
      VAR_25=FUNC_24(VAR_7->regmap,-1);
      FUNC_9(VAR_22,VAR_24,VAR_25);
    }
  }
  if(VAR_1[VAR_6]==6) {
    int VAR_26=FUNC_24(VAR_7->regmap,VAR_3[VAR_6]);
    int VAR_27=FUNC_24(VAR_7->regmap,VAR_5[VAR_6]);
    if(VAR_26<0) {

      FUNC_13(VAR_3[VAR_6],VAR_27);
      VAR_26=VAR_27;
    }
    if(VAR_27>=0) {
      if(VAR_2[VAR_6]==7) FUNC_16(VAR_26,VAR_27);
      if(VAR_2[VAR_6]==8) FUNC_22(VAR_26,VAR_27);
      if(VAR_2[VAR_6]==9) FUNC_18(VAR_26,16,VAR_27);
      if(VAR_2[VAR_6]==11) FUNC_14(VAR_26,VAR_27);
    }
    if(VAR_2[VAR_6]==10) {
      int VAR_28=FUNC_24(VAR_7->regmap,VAR_0);
      if(VAR_7->u&(1LL<<VAR_5[VAR_6])) VAR_27=-1;
      FUNC_0(VAR_28>=0);
      FUNC_15(VAR_26,VAR_27,VAR_28);
    }
  }
}
