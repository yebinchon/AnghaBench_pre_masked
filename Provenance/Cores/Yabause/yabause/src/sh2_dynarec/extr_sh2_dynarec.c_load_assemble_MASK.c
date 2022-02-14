
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regstat {scalar_t__* regmap; int wasdoingcp; int isconst; int* constmap; long long u; } ;
typedef int pointer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int,int,int,int,int,int ,int) ;
 scalar_t__* VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * VAR_12 ;
 int** VAR_13 ;
 int FUNC_3 (int,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (int,int,int,int*) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int,int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int,int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ,int,int,int) ;
 int FUNC_13 (int,int,int) ;
 int FUNC_14 (int,int,char,int) ;
 int FUNC_15 (scalar_t__*,int) ;
 int FUNC_16 (scalar_t__*,int) ;
 int* VAR_14 ;
 int FUNC_17 (int ,int,int,scalar_t__*,int,int ,int) ;
 int FUNC_18 (int) ;
 int* VAR_15 ;
 int* VAR_16 ;
 scalar_t__ VAR_17 ;
 int* VAR_18 ;
 int* VAR_19 ;
 int* VAR_20 ;
 long long* VAR_21 ;

void FUNC_19(int VAR_22,struct regstat *VAR_23)
{
  int VAR_24;
  int VAR_25,VAR_26,VAR_27,VAR_28,VAR_29=-1,VAR_30=-1;
  int VAR_31;
  int VAR_32=0;
  int VAR_33,VAR_34=0;
  int VAR_35=(VAR_11[VAR_22]==VAR_0||VAR_11[VAR_22]==VAR_1);
  int VAR_36=(VAR_15[VAR_22]==4)?2:(VAR_16[VAR_22]&3);
  unsigned int VAR_37;
  u32 VAR_38=0;
  pointer VAR_39;
  VAR_27=FUNC_16(VAR_23->regmap,VAR_20[VAR_22]==VAR_10?-1:VAR_20[VAR_22]);
  VAR_25=FUNC_16(VAR_23->regmap,VAR_18[VAR_22]);
  VAR_26=FUNC_16(VAR_23->regmap,VAR_19[VAR_22]);
  VAR_31=VAR_14[VAR_22];
  for(VAR_37=0;VAR_37<VAR_2;VAR_37++) {
    if(VAR_23->regmap[VAR_37]>=0) VAR_38|=1<<VAR_37;
  }

  if(VAR_25>=0) {
    if(VAR_35)
      VAR_34=(VAR_23->wasdoingcp>>VAR_25)&(VAR_23->wasdoingcp>>VAR_26)&1;
    else
      VAR_34=(VAR_23->wasdoingcp>>VAR_25)&1;
    if(VAR_34) {
      if(VAR_35)
        VAR_39=VAR_13[VAR_22][VAR_25]+VAR_13[VAR_22][VAR_26];
      else
        VAR_39=VAR_13[VAR_22][VAR_25]+VAR_31;






      if(VAR_11[VAR_22]==VAR_8) VAR_39-=1<<VAR_36;

      VAR_33=FUNC_2(VAR_39);
    }
  }
  if(VAR_27<0) VAR_27=FUNC_16(VAR_23->regmap,-1);
  if(!VAR_34) {
    if(VAR_35) {
      VAR_34=(VAR_23->isconst>>VAR_18[VAR_22])&(VAR_23->isconst>>VAR_19[VAR_22])&1;
    } else {
      VAR_34=(VAR_23->isconst>>VAR_18[VAR_22])&1;
    }
    if(VAR_34) {
      if(VAR_35)
        VAR_39=VAR_23->constmap[VAR_18[VAR_22]]+VAR_23->constmap[VAR_19[VAR_22]];
      else
        VAR_39=VAR_23->constmap[VAR_18[VAR_22]]+VAR_31;
      if(VAR_11[VAR_22]==VAR_8) VAR_39-=1<<VAR_36;

      VAR_33=FUNC_2(VAR_39);


      if(FUNC_2(VAR_39))
        FUNC_6(FUNC_18(VAR_39^(!VAR_36)),VAR_27);

    }
  }
  if(VAR_31||VAR_35||VAR_25<0||VAR_34) VAR_28=VAR_27;
  else VAR_28=VAR_25;


  FUNC_1(VAR_27>=0);
  VAR_38&=~(1<<VAR_27);
  if(!VAR_34)
  {
    int VAR_40=0;
    if (!VAR_34&&VAR_36==0) VAR_40=1;
    VAR_30=FUNC_16(VAR_23->regmap,VAR_6);
    VAR_29=FUNC_16(VAR_23->regmap,VAR_7);
    if(VAR_29<0) VAR_29=FUNC_15(VAR_23->regmap,-1);
    FUNC_1(VAR_29>=0);
    FUNC_1(VAR_29!=VAR_25);
    FUNC_1(VAR_29!=VAR_27);
    VAR_38&=~(1<<VAR_29);
    VAR_29=FUNC_3(VAR_28,VAR_27,VAR_29,VAR_30,VAR_40,-1,-1,VAR_34,VAR_39);
    if (!VAR_34&&VAR_36==0) VAR_28=VAR_27;
    FUNC_4(VAR_29,VAR_34,VAR_39,&VAR_32);

  }
  else
  {
    if(FUNC_2(VAR_39)) VAR_39=FUNC_18(VAR_39);
  }
  VAR_24=(VAR_27!=FUNC_16(VAR_23->regmap,VAR_20[VAR_22]));
  if(VAR_15[VAR_22]==12&&VAR_16[VAR_22]==12)
    VAR_24=VAR_23->u&(1LL<<VAR_10);
  if (VAR_36==0) {
    if(!VAR_34||VAR_33) {
      if(!VAR_24) {





        {
          int VAR_41=0;
          FUNC_8(VAR_41,VAR_27,VAR_29,VAR_27);
        }
      }
      if(VAR_32)
        FUNC_0(VAR_3,VAR_32,(int)VAR_17,VAR_22,VAR_28,(int)VAR_23,VAR_12[VAR_22],VAR_38);
    }
    else
      FUNC_17(VAR_3,VAR_22,VAR_39,VAR_23->regmap,VAR_20[VAR_22],VAR_12[VAR_22],VAR_38);
    if(VAR_20[VAR_22]==VAR_10&&!VAR_24) {
      signed char VAR_42;
      VAR_42=FUNC_16(VAR_23->regmap,VAR_9);
      FUNC_1(VAR_42>=0);
      FUNC_14(VAR_27,VAR_14[VAR_22],VAR_42,VAR_27);
    }
  }
  if (VAR_36==1) {
    if(!VAR_34||VAR_33) {
      if(!VAR_24) {





        {
          int VAR_43=0;
          FUNC_10(0,VAR_28,VAR_29,VAR_27);
        }
      }
      if(VAR_32)
        FUNC_0(VAR_5,VAR_32,(int)VAR_17,VAR_22,VAR_28,(int)VAR_23,VAR_12[VAR_22],VAR_38);
    }
    else
      FUNC_17(VAR_5,VAR_22,VAR_39,VAR_23->regmap,VAR_20[VAR_22],VAR_12[VAR_22],VAR_38);
  }
  if (VAR_36==2) {
    if(!VAR_34||VAR_33) {
      if(!VAR_24) {





        FUNC_12(0,VAR_28,VAR_29,VAR_27);
        FUNC_13(VAR_27,16,VAR_27);
      }
      if(VAR_32)
        FUNC_0(VAR_4,VAR_32,(int)VAR_17,VAR_22,VAR_28,(int)VAR_23,VAR_12[VAR_22],VAR_38);
    }
    else
      FUNC_17(VAR_4,VAR_22,VAR_39,VAR_23->regmap,VAR_20[VAR_22],VAR_12[VAR_22],VAR_38);
  }
  if(VAR_11[VAR_22]==VAR_8) {
    if(!((VAR_23->wasdoingcp>>VAR_25)&1)) {
      if(!(VAR_23->u&(1LL<<VAR_21[VAR_22]))&&VAR_20[VAR_22]!=VAR_21[VAR_22])
        FUNC_5(VAR_25,1<<VAR_36,VAR_25);
    }
  }
}
