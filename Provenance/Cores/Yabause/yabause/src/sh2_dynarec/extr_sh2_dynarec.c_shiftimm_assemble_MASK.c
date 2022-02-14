
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {long long u; int regmap; } ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char,char) ;
 int FUNC_2 (char,char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char,char) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char,char) ;
 int FUNC_7 (char,int,char) ;
 int FUNC_8 (char,char) ;
 int FUNC_9 (char,int,char) ;
 int FUNC_10 (char,char) ;
 int FUNC_11 (char,char,int,char) ;
 int FUNC_12 (char,int,char) ;
 int FUNC_13 (char,char) ;
 char FUNC_14 (int ,scalar_t__) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;

void FUNC_15(int VAR_8,struct regstat *VAR_9)
{
  if(VAR_2[VAR_8]==4)
  {
    if(VAR_3[VAR_8]<8) {
      signed char VAR_10,VAR_11,VAR_12;
      VAR_10=FUNC_14(VAR_9->regmap,VAR_5[VAR_8]);
      VAR_11=FUNC_14(VAR_9->regmap,VAR_7[VAR_8]);
      VAR_12=FUNC_14(VAR_9->regmap,VAR_0);
      FUNC_0(VAR_10==VAR_11);
      if(VAR_3[VAR_8]==0)
      {
        if(VAR_9->u&(1LL<<VAR_1)) FUNC_9(VAR_10,1,VAR_10);
        else FUNC_10(VAR_10,VAR_12);
      }
      else if(VAR_3[VAR_8]==1)
      {
        if(VAR_9->u&(1LL<<VAR_1)) {

          if(VAR_4[VAR_8]==0) FUNC_12(VAR_10,1,VAR_10);
          if(VAR_4[VAR_8]==2) FUNC_7(VAR_10,1,VAR_10);
        }else{

          if(VAR_4[VAR_8]==0) FUNC_13(VAR_10,VAR_12);
          if(VAR_4[VAR_8]==2) FUNC_8(VAR_10,VAR_12);
        }
      }
      else if(VAR_3[VAR_8]==4) {
        if(VAR_4[VAR_8]==0) {
          if(VAR_9->u&(1LL<<VAR_1)) {
            FUNC_3(VAR_10);
          }else{
            FUNC_4(VAR_10,VAR_12);
          }
        }
        if(VAR_4[VAR_8]==2) FUNC_1(VAR_10,VAR_12);
      }
      else {
        FUNC_0(VAR_3[VAR_8]==5);
        if(VAR_4[VAR_8]==0) {
          if(VAR_9->u&(1LL<<VAR_1)) {
            FUNC_5(VAR_10);
          }else{
            FUNC_6(VAR_10,VAR_12);
          }
        }
        if(VAR_4[VAR_8]==2) FUNC_2(VAR_10,VAR_12);
      }
    }else{
      signed char VAR_13,VAR_14;
      VAR_13=FUNC_14(VAR_9->regmap,VAR_5[VAR_8]);
      VAR_14=FUNC_14(VAR_9->regmap,VAR_7[VAR_8]);

      if(VAR_14>=0){
        if(VAR_3[VAR_8]==8)
        {
          if(VAR_4[VAR_8]==0) FUNC_9(VAR_13,2,VAR_14);
          if(VAR_4[VAR_8]==1) FUNC_9(VAR_13,8,VAR_14);
          if(VAR_4[VAR_8]==2) FUNC_9(VAR_13,16,VAR_14);
        }
        if(VAR_3[VAR_8]==9)
        {
          if(VAR_4[VAR_8]==0) FUNC_12(VAR_13,2,VAR_14);
          if(VAR_4[VAR_8]==1) FUNC_12(VAR_13,8,VAR_14);
          if(VAR_4[VAR_8]==2) FUNC_12(VAR_13,16,VAR_14);
        }
      }
    }
  }
  else if(VAR_2[VAR_8]==2)
  {
    signed char VAR_15,VAR_16,VAR_17;
    VAR_15=FUNC_14(VAR_9->regmap,VAR_5[VAR_8]);
    VAR_16=FUNC_14(VAR_9->regmap,VAR_7[VAR_8]);
    FUNC_0(VAR_6[VAR_8]==VAR_7[VAR_8]);
    FUNC_11(VAR_16,VAR_15,16,VAR_16);
  }
}
