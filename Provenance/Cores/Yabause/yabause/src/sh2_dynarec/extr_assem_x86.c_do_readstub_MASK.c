
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (int,int,int) ;
 int FUNC_11 (char*,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (int) ;
 int* VAR_15 ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int) ;
 scalar_t__ VAR_16 ;
 int** VAR_17 ;

FUNC_15(int VAR_18)
{
  FUNC_0("do_readstub %x\n",VAR_16+VAR_17[VAR_18][3]*2);
  FUNC_14(VAR_17[VAR_18][1],(int)VAR_14);
  int VAR_19=VAR_17[VAR_18][0];
  int VAR_20=VAR_17[VAR_18][3];
  int VAR_21=VAR_17[VAR_18][4];
  struct regstat *VAR_22=(struct regstat *)VAR_17[VAR_18][5];
  u32 VAR_23=VAR_17[VAR_18][7];
  signed char *VAR_24=VAR_22->regmap;
  int VAR_25=FUNC_11(VAR_24,VAR_0+(VAR_20&1));
  int VAR_26;

  VAR_26=FUNC_11(VAR_24,VAR_15[VAR_20]==VAR_13?-1:VAR_15[VAR_20]);
  FUNC_1(VAR_21>=0);
  if(VAR_25<0) VAR_25=VAR_26;
  if(VAR_25<0) VAR_25=FUNC_11(VAR_24,-1);
  FUNC_1(VAR_25>=0);
  FUNC_13(VAR_23);
  if(VAR_21!=VAR_1) FUNC_5(VAR_21,VAR_1);
  if(VAR_19==VAR_5) FUNC_10(VAR_1,1,VAR_1);
  if(VAR_19==VAR_5)
    FUNC_3((int)VAR_9);
  if(VAR_19==VAR_8)
    FUNC_3((int)VAR_11);
  if(VAR_19==VAR_6)
    FUNC_3((int)VAR_10);
  if(VAR_19==VAR_7)
  {

    int VAR_27=FUNC_11(VAR_24,VAR_12);
    FUNC_1(VAR_27>=0);
    if(VAR_21==VAR_1||VAR_21==VAR_2||VAR_21==VAR_3)
      FUNC_9(VAR_21,0,VAR_4);
    FUNC_3((int)VAR_10);
    if(VAR_21==VAR_2||VAR_21==VAR_3)
      FUNC_8(0,VAR_4,VAR_21);
    if(VAR_27==VAR_1) {
      FUNC_9(VAR_1,0,VAR_4);
    }
    else
    {
      if(VAR_27==VAR_2||VAR_27==VAR_3)
        FUNC_9(VAR_1,0,VAR_4);
      else
        FUNC_5(VAR_1,VAR_27);
      if(VAR_21==VAR_1) {
        FUNC_8(0,VAR_4,VAR_1);
        FUNC_2(VAR_1,4,VAR_1);
      }else
        FUNC_2(VAR_21,4,VAR_1);
    }
    FUNC_3((int)VAR_10);
    FUNC_1(VAR_26>=0);
    if(VAR_26!=VAR_1) FUNC_5(VAR_1,VAR_26);
    if(VAR_27==VAR_1||VAR_27==VAR_2||VAR_27==VAR_3)
      FUNC_8(0,VAR_4,VAR_27);
  }
  else if(VAR_19==VAR_5)
  {
    if(VAR_26>=0) FUNC_6(VAR_1,VAR_26);
  }
  else if(VAR_19==VAR_8)
  {
    if(VAR_26>=0) FUNC_7(VAR_1,VAR_26);
  }
  else
  {
    if(VAR_26!=VAR_1&&VAR_26>=0) FUNC_5(VAR_1,VAR_26);
  }
  FUNC_12(VAR_23);
  if(VAR_19==VAR_7) FUNC_2(VAR_21,8,VAR_21);
  FUNC_4(VAR_17[VAR_18][2]);
}
