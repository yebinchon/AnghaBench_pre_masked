
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regstat {scalar_t__* regmap; int dirty; } ;
typedef int pointer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int,int,int,int,int,int,int) ;
 int FUNC_1 (int) ;
 int* VAR_12 ;
 int* VAR_13 ;
 int FUNC_2 (int,int,int,int,int ,int,int,int ,int ) ;
 int FUNC_3 (int,int ,int ,int*) ;
 int FUNC_4 (int,int,int,int,int ,int ,int ) ;
 int FUNC_5 (int,int ,int ,int*) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,char) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,char) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ,int,int,int) ;
 int FUNC_13 (int,int,int) ;
 int FUNC_14 (int,int ,int,int,int) ;
 int FUNC_15 (char) ;
 void* FUNC_16 (scalar_t__*,int) ;
 int* VAR_14 ;
 int VAR_15 ;
 int** VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int* VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_17 (int,int) ;
 size_t VAR_21 ;
 int VAR_22 ;
 int FUNC_18 (scalar_t__*,int ,int) ;

void FUNC_19(int VAR_23,struct regstat *VAR_24)
{
  signed char VAR_25=FUNC_16(VAR_24->regmap,VAR_0);
  FUNC_1(VAR_25==VAR_3);
  FUNC_1(!VAR_15);
  if(VAR_17[VAR_23]==0&&VAR_18[VAR_23]==11&&VAR_19[VAR_23]==1) {
    pointer VAR_26, VAR_27;
    FUNC_6(VAR_3,VAR_2*VAR_12[VAR_23],VAR_3);
    VAR_26=(pointer)VAR_20;
    FUNC_9(0);
    VAR_27=(pointer)VAR_20;
    FUNC_15(VAR_3);
    FUNC_17(VAR_26,(pointer)VAR_20);
    FUNC_0(VAR_1,(int)VAR_20,VAR_27,0,VAR_23,VAR_22+VAR_23*2,VAR_10,0);
    FUNC_8(0);




    FUNC_8(VAR_27);
  }
  else {
    int VAR_28,VAR_29,VAR_30,VAR_31,VAR_32=-1,VAR_33=-1;
    int VAR_34=0;
    unsigned int VAR_35;
    u32 VAR_36=0;
    FUNC_1(VAR_17[VAR_23]==12);
    VAR_29=FUNC_16(VAR_24->regmap,-1);
    VAR_28=FUNC_16(VAR_24->regmap,VAR_11);
    VAR_30=FUNC_16(VAR_24->regmap,VAR_8);
    VAR_31=FUNC_16(VAR_24->regmap,15);
    for(VAR_35=0;VAR_35<VAR_4;VAR_35++) {
      if(VAR_24->regmap[VAR_35]>=0) VAR_36|=1<<VAR_35;
    }
    FUNC_1(VAR_29>=0);
    FUNC_1(VAR_28>=0);
    FUNC_1(VAR_30>=0);
    FUNC_1(VAR_31>=0);
    FUNC_6(VAR_31,-4,VAR_31);
    VAR_32=FUNC_16(VAR_24->regmap,VAR_7);
    VAR_33=FUNC_16(VAR_24->regmap,VAR_6);
    FUNC_1(VAR_32>=0);
    VAR_36&=~(1<<VAR_32);
    VAR_32=FUNC_4(VAR_31,VAR_31,VAR_32,VAR_33,0,0,0);
    FUNC_5(VAR_32,0,0,&VAR_34);

    FUNC_13(VAR_30,16,VAR_30);
    FUNC_14(VAR_30,0,VAR_31,VAR_32,VAR_32);
    FUNC_13(VAR_30,16,VAR_30);
    if(VAR_34) {
      FUNC_0(VAR_9,VAR_34,(int)VAR_20,VAR_23,VAR_31,(int)VAR_24,VAR_12[VAR_23],VAR_36);
    }
    FUNC_6(VAR_31,-4,VAR_31);
    FUNC_18(VAR_24->regmap,VAR_24->dirty,-1);
    FUNC_11(VAR_22+VAR_23*2+2,VAR_30);
    FUNC_6(VAR_28,VAR_14[VAR_23]<<2,VAR_28);
    VAR_32=FUNC_4(VAR_31,VAR_31,VAR_32,VAR_33,0,0,0);
    FUNC_5(VAR_32,0,0,&VAR_34);

    FUNC_13(VAR_30,16,VAR_30);
    FUNC_14(VAR_30,0,VAR_31,VAR_32,VAR_32);
    if(VAR_34) {
      FUNC_0(VAR_9,VAR_34,(int)VAR_20,VAR_23,VAR_31,(int)VAR_24,VAR_12[VAR_23],VAR_36);
    }

    VAR_32=FUNC_2(VAR_28,VAR_28,VAR_32,VAR_33,0,-1,-1,0,0);
    FUNC_3(VAR_32,0,0,&VAR_34);
    FUNC_12(0,VAR_28,VAR_32,VAR_29);
    FUNC_13(VAR_29,16,VAR_29);
    if(VAR_34)
      FUNC_0(VAR_5,VAR_34,(int)VAR_20,VAR_23,VAR_29,(int)VAR_24,VAR_12[VAR_23],VAR_36);
    if(VAR_24->regmap[VAR_3]!=VAR_0) {
      FUNC_10(VAR_0,VAR_3);
    }
    FUNC_7(VAR_2*(VAR_12[VAR_23]+VAR_13[VAR_23]),VAR_3);


    FUNC_8(VAR_16[VAR_21][VAR_29]);
  }
}
