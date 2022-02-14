
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {long long u; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 long long VAR_4 ;
 long long VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int,int,int,int) ;
 int FUNC_10 (int,int,int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,long long) ;
 int* VAR_6 ;
 int* VAR_7 ;
 long long* VAR_8 ;
 long long* VAR_9 ;
 long long* VAR_10 ;
 long long* VAR_11 ;

void FUNC_13(int VAR_12,struct regstat *VAR_13)
{
  if(VAR_6[VAR_12]==0) {
    if(VAR_7[VAR_12]==7)
    {
      int VAR_14=FUNC_12(VAR_13->regmap,VAR_8[VAR_12]);
      int VAR_15=FUNC_12(VAR_13->regmap,VAR_9[VAR_12]);
      int VAR_16=FUNC_12(VAR_13->regmap,VAR_4);
      if(VAR_16>=0) FUNC_8(VAR_14,VAR_15,VAR_16);
    }
    if(VAR_7[VAR_12]==8)
    {
      int VAR_17=FUNC_12(VAR_13->regmap,VAR_10[VAR_12]);
      int VAR_18=FUNC_12(VAR_13->regmap,VAR_11[VAR_12]);
      if(!(VAR_13->u&(1LL<<VAR_3)))
        FUNC_11(VAR_17);
      if(!(VAR_13->u&(1LL<<VAR_4)))
        FUNC_11(VAR_18);
    }
    if(VAR_7[VAR_12]==9)
    {
      int VAR_19=FUNC_12(VAR_13->regmap,VAR_5);
      FUNC_1(VAR_19,0xfe,VAR_19);
    }
  }
  if(VAR_6[VAR_12]==2) {
    if(VAR_7[VAR_12]==7)
    {
      int VAR_20=FUNC_12(VAR_13->regmap,VAR_8[VAR_12]);
      int VAR_21=FUNC_12(VAR_13->regmap,VAR_9[VAR_12]);
      int VAR_22=FUNC_12(VAR_13->regmap,VAR_5);
      int VAR_23=FUNC_12(VAR_13->regmap,-1);
      FUNC_0(VAR_20>=0);
      FUNC_0(VAR_21>=0);
      FUNC_0(VAR_22>=0);
      FUNC_2(VAR_20,VAR_21,VAR_22,VAR_23);
    }
    if(VAR_7[VAR_12]==14||VAR_7[VAR_12]==15)
    {
      int VAR_24=FUNC_12(VAR_13->regmap,VAR_8[VAR_12]);
      int VAR_25=FUNC_12(VAR_13->regmap,VAR_9[VAR_12]);
      int VAR_26=FUNC_12(VAR_13->regmap,VAR_4);



      int VAR_27=FUNC_12(VAR_13->regmap,-1);

      if(VAR_26>=0) {
        FUNC_0(VAR_27>=0);
        if(VAR_7[VAR_12]==14) {
          FUNC_6(VAR_24,VAR_26);
          FUNC_6(VAR_25,VAR_27);
        }else{
          FUNC_5(VAR_24,VAR_26);
          FUNC_5(VAR_25,VAR_27);
        }
        FUNC_8(VAR_26,VAR_27,VAR_26);
      }
    }
  }
  if(VAR_6[VAR_12]==3) {
    int VAR_28=FUNC_12(VAR_13->regmap,VAR_8[VAR_12]);
    int VAR_29=FUNC_12(VAR_13->regmap,VAR_9[VAR_12]);
    int VAR_30=FUNC_12(VAR_13->regmap,VAR_3);
    int VAR_31=FUNC_12(VAR_13->regmap,VAR_4);
    if(VAR_30>=0) {


      FUNC_0(VAR_31==VAR_0);
      FUNC_0(VAR_30==VAR_1);
      FUNC_0(VAR_28!=VAR_0);
      if(VAR_28!=VAR_0) FUNC_4(VAR_28,VAR_0);
      if(VAR_7[VAR_12]==5) FUNC_7(VAR_29);
      if(VAR_7[VAR_12]==13) FUNC_3(VAR_29);




    }else if(VAR_31>=0) {

      FUNC_8(VAR_28,VAR_29,VAR_31);
    }
  }
}
