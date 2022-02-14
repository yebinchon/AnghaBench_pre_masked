
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {char isdoingcp; int* regmap_entry; char wasdoingcp; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int** VAR_1 ;
 int FUNC_1 (char,int,char) ;
 int FUNC_2 (char,int,char) ;
 int FUNC_3 (char,int,char,char) ;
 int FUNC_4 (int,char) ;
 int FUNC_5 (int,char) ;
 int FUNC_6 (char,int,char) ;
 int FUNC_7 (char,int,char,char) ;
 int FUNC_8 (char,int,char) ;
 char FUNC_9 (int ,int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

void FUNC_10(int VAR_7,struct regstat *VAR_8)
{
  if(VAR_3[VAR_7]==0x7) {
    signed char VAR_9,VAR_10;
    VAR_10=FUNC_9(VAR_8->regmap,VAR_6[VAR_7]);
    VAR_9=FUNC_9(VAR_8->regmap,VAR_5[VAR_7]);

    FUNC_0(VAR_9>=0);
    if(VAR_10>=0) {
      if(!((VAR_8->isdoingcp>>VAR_10)&1)) {
        if(VAR_9<0) {
          if(VAR_8->regmap_entry[VAR_10]!=VAR_5[VAR_7]) FUNC_4(VAR_5[VAR_7],VAR_10);
          FUNC_1(VAR_10,VAR_2[VAR_7],VAR_10);
        }else{
          if(!((VAR_8->wasdoingcp>>VAR_9)&1))
            FUNC_1(VAR_9,VAR_2[VAR_7],VAR_10);
          else
            FUNC_5(VAR_1[VAR_7][VAR_9]+VAR_2[VAR_7],VAR_10);
        }
      }
    }
  }
  else if(VAR_3[VAR_7]==0x8) {
    signed char VAR_11,VAR_12,VAR_13;
    VAR_11=FUNC_9(VAR_8->regmap,VAR_5[VAR_7]);
    VAR_12=FUNC_9(VAR_8->regmap,VAR_0);
    VAR_13=FUNC_9(VAR_8->regmap,-1);
    FUNC_0(VAR_11>=0);
    FUNC_0(VAR_12>=0);
    FUNC_0(VAR_13>=0);
    FUNC_3(VAR_11,VAR_2[VAR_7],VAR_12,VAR_13);
  }
  else if(VAR_3[VAR_7]==12) {
    if(VAR_4[VAR_7]==8) {
      signed char VAR_14,VAR_15,VAR_16;
      VAR_14=FUNC_9(VAR_8->regmap,VAR_5[VAR_7]);
      VAR_15=FUNC_9(VAR_8->regmap,VAR_0);
      VAR_16=FUNC_9(VAR_8->regmap,-1);
      FUNC_0(VAR_14>=0);
      FUNC_0(VAR_15>=0);
      FUNC_0(VAR_16>=0);
      FUNC_7(VAR_14,VAR_2[VAR_7],VAR_15,VAR_16);
    }else{
      signed char VAR_17,VAR_18;
      VAR_18=FUNC_9(VAR_8->regmap,VAR_6[VAR_7]);
      VAR_17=FUNC_9(VAR_8->regmap,VAR_5[VAR_7]);
      if(VAR_18>=0 && !((VAR_8->isdoingcp>>VAR_18)&1)) {
        if(VAR_4[VAR_7]==9)
        {
          if(VAR_17<0) {
            if(VAR_8->regmap_entry[VAR_18]!=VAR_5[VAR_7]) FUNC_4(VAR_5[VAR_7],VAR_18);
            FUNC_2(VAR_18,VAR_2[VAR_7],VAR_18);
          }else{
            if(!((VAR_8->wasdoingcp>>VAR_17)&1))
              FUNC_2(VAR_17,VAR_2[VAR_7],VAR_18);
            else
              FUNC_5(VAR_1[VAR_7][VAR_17]&VAR_2[VAR_7],VAR_18);
          }
        }
        else
        if(VAR_4[VAR_7]==10)
        {
          if(VAR_17<0) {
            if(VAR_8->regmap_entry[VAR_18]!=VAR_5[VAR_7]) FUNC_4(VAR_5[VAR_7],VAR_18);
            FUNC_8(VAR_18,VAR_2[VAR_7],VAR_18);
          }else{
            if(!((VAR_8->wasdoingcp>>VAR_17)&1))
              FUNC_8(VAR_17,VAR_2[VAR_7],VAR_18);
            else
              FUNC_5(VAR_1[VAR_7][VAR_17]^VAR_2[VAR_7],VAR_18);
          }
        }
        else
        if(VAR_4[VAR_7]==11)
        {
          if(VAR_17<0) {
            if(VAR_8->regmap_entry[VAR_18]!=VAR_5[VAR_7]) FUNC_4(VAR_5[VAR_7],VAR_18);
            FUNC_6(VAR_18,VAR_2[VAR_7],VAR_18);
          }else{
            if(!((VAR_8->wasdoingcp>>VAR_17)&1))
              FUNC_6(VAR_17,VAR_2[VAR_7],VAR_18);
            else
              FUNC_5(VAR_1[VAR_7][VAR_17]|VAR_2[VAR_7],VAR_18);
          }
        }
      }
    }
  }
  else {
    signed char VAR_19;
    FUNC_0(VAR_3[VAR_7]==0xE);
    VAR_19=FUNC_9(VAR_8->regmap,VAR_6[VAR_7]);

    if(VAR_19>=0) {
      if(!((VAR_8->isdoingcp>>VAR_19)&1))
        FUNC_5(VAR_2[VAR_7]<<16,VAR_19);
    }
  }
}
