
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regstat {char* regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (char,int,char) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (char,int,char) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int,int,int) ;
 void* FUNC_12 (char*,int) ;
 int* VAR_9 ;
 int* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 scalar_t__ VAR_12 ;
 int** VAR_13 ;

FUNC_16(int VAR_14)
{
  FUNC_0("do_rmwstub %x\n",VAR_12+VAR_13[VAR_14][3]*2);
  FUNC_15(VAR_13[VAR_14][1],(int)VAR_11);
  int VAR_15=VAR_13[VAR_14][0];
  int VAR_16=VAR_13[VAR_14][3];
  int VAR_17=VAR_13[VAR_14][4];
  struct regstat *VAR_18=(struct regstat *)VAR_13[VAR_14][5];
  u32 VAR_19=VAR_13[VAR_14][7];
  signed char *VAR_20=VAR_18->regmap;
  int VAR_21=FUNC_12(VAR_20,VAR_0+(VAR_16&1));

  FUNC_1(VAR_17>=0);

  if(VAR_21<0) VAR_21=FUNC_12(VAR_20,-1);
  FUNC_1(VAR_21>=0);
  FUNC_14(VAR_19);

  FUNC_11(VAR_17,1,VAR_17);
  if(VAR_17!=0) FUNC_5(VAR_17,0);
  if(VAR_17<4||VAR_17==12)
    FUNC_10(0,(int)&VAR_8+24);


  FUNC_3((int)VAR_1);

  if(VAR_15==VAR_2)
    FUNC_2(0,VAR_9[VAR_16],1);
  if(VAR_15==VAR_5)
    FUNC_11(0,VAR_9[VAR_16],1);
  if(VAR_15==VAR_3)
    FUNC_6(0,VAR_9[VAR_16],1);
  if(VAR_15==VAR_4) {
    FUNC_10(0,(int)&VAR_8+20);
    FUNC_6(0,0x80,1);
  }
  if(VAR_17<4||VAR_17==12)
    FUNC_8((int)&VAR_8+24,0);
  else
    FUNC_5(VAR_17,0);

  FUNC_3((int)VAR_7);

  FUNC_13(VAR_19);

  if(VAR_10[VAR_16]==11) {
    FUNC_8((int)&VAR_8+20,14);
    signed char VAR_22;
    VAR_22=FUNC_12(VAR_18->regmap,VAR_6);
    FUNC_1(VAR_22>=0);
    FUNC_2(VAR_22,~1,VAR_22);
    FUNC_9(14,0xff);
    FUNC_7(VAR_22,1,VAR_22);
  }
  FUNC_4(VAR_13[VAR_14][2]);
}
