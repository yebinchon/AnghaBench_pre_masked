
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regstat {scalar_t__* regmap; int wasdoingcp; long long u; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long long VAR_9 ;
 int FUNC_0 (int,int,int,int,int,int,int ,int) ;
 scalar_t__* VAR_10 ;
 int FUNC_1 (int) ;
 int * VAR_11 ;
 int** VAR_12 ;
 int FUNC_2 (int,int,int,int,int,int,int) ;
 int FUNC_3 (int,int,int,int*) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,int,char) ;
 void* FUNC_8 (scalar_t__*,int) ;
 int* VAR_13 ;
 int* VAR_14 ;
 scalar_t__ VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 long long* VAR_18 ;

void FUNC_9(int VAR_19,struct regstat *VAR_20)
{
  int VAR_21,VAR_22,VAR_23,VAR_24,VAR_25=-1,VAR_26=-1;
  int VAR_27=0;
  int VAR_28;
  int VAR_29,VAR_30=0,VAR_31;
  int VAR_32=(VAR_10[VAR_19]==VAR_0);
  unsigned int VAR_33;
  u32 VAR_34=0;
  VAR_23=FUNC_8(VAR_20->regmap,-1);
  VAR_21=FUNC_8(VAR_20->regmap,VAR_16[VAR_19]);
  VAR_22=FUNC_8(VAR_20->regmap,VAR_17[VAR_19]);
  for(VAR_33=0;VAR_33<VAR_1;VAR_33++) {
    if(VAR_20->regmap[VAR_33]>=0) VAR_34|=1<<VAR_33;
  }
  if(VAR_21>=0) {
    if(VAR_32)
      VAR_30=(VAR_20->wasdoingcp>>VAR_21)&(VAR_20->wasdoingcp>>VAR_22)&1;
    else
      VAR_30=(VAR_20->wasdoingcp>>VAR_21)&1;
    if(VAR_30) {
      if(VAR_32)
         VAR_31=VAR_12[VAR_19][VAR_21]+VAR_12[VAR_19][VAR_22];
      else
         VAR_31=VAR_12[VAR_19][VAR_21];
    }

    VAR_29=1;
  }
  if(VAR_32||VAR_21<0||VAR_30) VAR_24=VAR_23;
  else VAR_24=VAR_21;
  FUNC_1(VAR_23>=0);
  VAR_34&=~(1<<VAR_23);
  {
    int VAR_35=0;
    if (!VAR_30) VAR_35=1;
    VAR_25=FUNC_8(VAR_20->regmap,VAR_3);
    VAR_26=FUNC_8(VAR_20->regmap,VAR_2);
    FUNC_1(VAR_25>=0);
    VAR_34&=~(1<<VAR_25);
    VAR_25=FUNC_2(VAR_24,VAR_23,VAR_25,VAR_26,VAR_35,VAR_30,VAR_31);
    if (!VAR_30) VAR_24=VAR_23;
    FUNC_3(VAR_25,VAR_30,VAR_31,&VAR_27);
  }
  if(VAR_14[VAR_19]==11) VAR_28=VAR_6;
  if(VAR_14[VAR_19]==13) VAR_28=VAR_4;
  if(VAR_14[VAR_19]==14) VAR_28=VAR_7;
  if(VAR_14[VAR_19]==15) VAR_28=VAR_5;
  if(!VAR_30||VAR_29) {
    if(VAR_14[VAR_19]==11) {
      signed char VAR_36;
      VAR_36=FUNC_8(VAR_20->regmap,VAR_8);
      FUNC_1(VAR_36>=0);
      FUNC_1(VAR_18[VAR_19]==VAR_9);
      if(VAR_36>=0&&!(VAR_20->u&(1LL<<VAR_9))) FUNC_7(VAR_24,VAR_25,VAR_36);
      else FUNC_5(VAR_24,VAR_25,0x80);
    }
    if(VAR_14[VAR_19]==13) FUNC_4(VAR_24,VAR_25,VAR_13[VAR_19]);
    if(VAR_14[VAR_19]==14) FUNC_6(VAR_24,VAR_25,VAR_13[VAR_19]);
    if(VAR_14[VAR_19]==15) FUNC_5(VAR_24,VAR_25,VAR_13[VAR_19]);
  }
  if(VAR_27)
    FUNC_0(VAR_28,VAR_27,(int)VAR_15,VAR_19,VAR_24,(int)VAR_20,VAR_11[VAR_19],VAR_34);
}
