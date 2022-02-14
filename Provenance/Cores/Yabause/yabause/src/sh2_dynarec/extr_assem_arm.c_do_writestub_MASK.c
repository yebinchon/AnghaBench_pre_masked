
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
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int) ;
 int* VAR_8 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 scalar_t__ VAR_9 ;
 int** VAR_10 ;

FUNC_10(int VAR_11)
{
  FUNC_0("do_writestub %x\n",VAR_9+VAR_10[VAR_11][3]*2);
  FUNC_6(256);
  FUNC_9(VAR_10[VAR_11][1],(int)VAR_7);
  int VAR_12=VAR_10[VAR_11][0];
  int VAR_13=VAR_10[VAR_11][3];
  int VAR_14=VAR_10[VAR_11][4];
  struct regstat *VAR_15=(struct regstat *)VAR_10[VAR_11][5];
  u32 VAR_16=VAR_10[VAR_11][7];
  signed char *VAR_17=VAR_15->regmap;
  int VAR_18=FUNC_5(VAR_17,VAR_0+(VAR_13&1));
  int VAR_19=FUNC_5(VAR_17,VAR_8[VAR_13]);
  FUNC_1(VAR_14>=0);
  FUNC_1(VAR_19>=0);
  if(VAR_18<0) VAR_18=FUNC_5(VAR_17,-1);
  FUNC_1(VAR_18>=0);
  FUNC_8(VAR_16);

  if(VAR_14!=0) {
    if(VAR_19==0) {
      if(VAR_14==1) {
        FUNC_4(0,2);
        FUNC_4(1,0);
        FUNC_4(2,1);
      } else {
        FUNC_4(VAR_19,1);
        FUNC_4(VAR_14,0);
      }
    }
    else {
      FUNC_4(VAR_14,0);
      if(VAR_19!=1) FUNC_4(VAR_19,1);
    }
  }
  else if(VAR_19!=1) FUNC_4(VAR_19,1);
  if(VAR_12==VAR_1)
    FUNC_2((int)VAR_4);
  if(VAR_12==VAR_3)
    FUNC_2((int)VAR_6);
  if(VAR_12==VAR_2)
    FUNC_2((int)VAR_5);

  FUNC_7(VAR_16);
  FUNC_3(VAR_10[VAR_11][2]);
}
