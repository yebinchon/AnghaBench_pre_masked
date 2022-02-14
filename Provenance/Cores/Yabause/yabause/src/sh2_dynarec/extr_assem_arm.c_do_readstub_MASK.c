
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regstat {char* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (int) ;
 int* VAR_13 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int) ;
 scalar_t__ VAR_14 ;
 int** VAR_15 ;

FUNC_17(int VAR_16)
{
  FUNC_0("do_readstub %x\n",VAR_14+VAR_15[VAR_16][3]*2);
  FUNC_13(256);
  FUNC_16(VAR_15[VAR_16][1],(int)VAR_12);
  int VAR_17=VAR_15[VAR_16][0];
  int VAR_18=VAR_15[VAR_16][3];
  int VAR_19=VAR_15[VAR_16][4];
  struct regstat *VAR_20=(struct regstat *)VAR_15[VAR_16][5];
  u32 VAR_21=VAR_15[VAR_16][7];
  signed char *VAR_22=VAR_20->regmap;
  int VAR_23=FUNC_12(VAR_22,VAR_0+(VAR_18&1));
  int VAR_24;
  int VAR_25;

  VAR_24=FUNC_12(VAR_22,VAR_13[VAR_18]==VAR_10?-1:VAR_13[VAR_18]);
  FUNC_1(VAR_19>=0);
  if(VAR_23<0) VAR_23=VAR_24;
  if(VAR_23<0) VAR_23=FUNC_12(VAR_22,-1);
  FUNC_1(VAR_23>=0);
  FUNC_15(VAR_21);
  if(VAR_17==VAR_2) FUNC_11(VAR_19,1,0);
  else {if(VAR_19!=0) FUNC_6(VAR_19,0);}







  int VAR_26=FUNC_12(VAR_22,VAR_1);
  if(VAR_26<0) {
    FUNC_5(VAR_1,2);
  }
  if(VAR_17==VAR_2)
    FUNC_3((int)VAR_6);
  if(VAR_17==VAR_5)
    FUNC_3((int)VAR_8);
  if(VAR_17==VAR_3)
    FUNC_3((int)VAR_7);
  if(VAR_17==VAR_4)
  {

    int VAR_27=FUNC_12(VAR_22,VAR_9);
    FUNC_1(VAR_27>=0);
    if(VAR_19<4||VAR_19==12)
      FUNC_10(VAR_19,(int)&VAR_11+24);
    FUNC_3((int)VAR_7);
    if(VAR_19==1||VAR_19==2||VAR_19==3||VAR_19==12)
      FUNC_9((int)&VAR_11+24,VAR_19);
    if(VAR_27==0) {
      FUNC_10(0,(int)&VAR_11+24);
    }
    else
    {
      if(VAR_27==1||VAR_27==2||VAR_27==3||VAR_27==12)
        FUNC_10(0,(int)&VAR_11+24);
      else
        FUNC_6(0,VAR_27);
      if(VAR_19==0) {
        FUNC_9((int)&VAR_11+24,VAR_19);
        FUNC_2(VAR_19,4,VAR_19);
      }else
        FUNC_2(VAR_19,4,0);
    }
    FUNC_3((int)VAR_7);
    FUNC_1(VAR_24>=0);
    if(VAR_24!=0) FUNC_6(0,VAR_24);
    if(VAR_27<4||VAR_27==12)
      FUNC_9((int)&VAR_11+24,VAR_27);
  }
  else if(VAR_17==VAR_2)
  {
    if(VAR_24>=0) FUNC_7(0,VAR_24);
  }
  else if(VAR_17==VAR_5)
  {
    if(VAR_24>=0) FUNC_8(0,VAR_24);
  }
  else
  {
    if(VAR_24>0) FUNC_6(0,VAR_24);
  }
  FUNC_14(VAR_21);
  if(VAR_17==VAR_4) FUNC_2(VAR_19,8,VAR_19);
  FUNC_4(VAR_15[VAR_16][2]);
}
