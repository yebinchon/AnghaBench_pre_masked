
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regstat {char* regmap; } ;
typedef int pointer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (char,int,char) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ,int ) ;
 int FUNC_12 (int,int,int) ;
 void* FUNC_13 (char*,int) ;
 int* VAR_12 ;
 int* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_14 (int) ;
 int VAR_15 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int) ;
 scalar_t__ VAR_16 ;
 int** VAR_17 ;

FUNC_17(int VAR_18)
{
  FUNC_0("do_rmwstub %x\n",VAR_16+VAR_17[VAR_18][3]*2);
  FUNC_16(VAR_17[VAR_18][1],(int)VAR_14);
  int VAR_19=VAR_17[VAR_18][0];
  int VAR_20=VAR_17[VAR_18][3];
  int VAR_21=VAR_17[VAR_18][4];
  struct regstat *VAR_22=(struct regstat *)VAR_17[VAR_18][5];
  u32 VAR_23=VAR_17[VAR_18][7];
  signed char *VAR_24=VAR_22->regmap;
  int VAR_25=FUNC_13(VAR_24,VAR_0+(VAR_20&1));

  FUNC_1(VAR_21>=0);

  if(VAR_25<0) VAR_25=FUNC_13(VAR_24,-1);
  FUNC_1(VAR_25>=0);
  FUNC_15(VAR_23);

  FUNC_12(VAR_21,1,VAR_21);
  if(VAR_21!=VAR_1) FUNC_7(VAR_21,VAR_1);
  if(VAR_21==VAR_1||VAR_21==VAR_2||VAR_21==VAR_3)
    FUNC_11(VAR_21,0,VAR_4);
  FUNC_4((int)VAR_5);
  FUNC_7(VAR_1,VAR_3);
  if(VAR_21==VAR_1||VAR_21==VAR_2||VAR_21==VAR_3)
    FUNC_9(0,VAR_4,VAR_1);
  else
    FUNC_7(VAR_21,VAR_1);
  if(VAR_19==VAR_6)
    FUNC_3(VAR_3,VAR_12[VAR_20],VAR_3);
  if(VAR_19==VAR_9)
    FUNC_12(VAR_3,VAR_12[VAR_20],VAR_3);
  if(VAR_19==VAR_7)
    FUNC_8(VAR_3,VAR_12[VAR_20],VAR_3);
  if(VAR_19==VAR_8) {

    FUNC_10(VAR_3,(pointer)&VAR_15);
    FUNC_8(VAR_3,0x80,VAR_3);
  }

  FUNC_4((int)VAR_11);

  FUNC_14(VAR_23);

  if(VAR_13[VAR_20]==11) {
    signed char VAR_26;
    VAR_26=FUNC_13(VAR_22->regmap,VAR_10);
    FUNC_1(VAR_26>=0);
    FUNC_3(VAR_26,~1,VAR_26);






    FUNC_5((pointer)&VAR_15,1);
    FUNC_2(0,VAR_26);
  }
  FUNC_6(VAR_17[VAR_18][2]);
}
