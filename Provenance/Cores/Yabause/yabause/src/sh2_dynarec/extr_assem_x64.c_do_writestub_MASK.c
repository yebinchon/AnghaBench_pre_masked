
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
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int) ;
 int* VAR_10 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 scalar_t__ VAR_11 ;
 int** VAR_12 ;

FUNC_10(int VAR_13)
{
  FUNC_0("do_writestub %x\n",VAR_11+VAR_12[VAR_13][3]*2);
  FUNC_9(VAR_12[VAR_13][1],(int)VAR_9);
  int VAR_14=VAR_12[VAR_13][0];
  int VAR_15=VAR_12[VAR_13][3];
  int VAR_16=VAR_12[VAR_13][4];
  struct regstat *VAR_17=(struct regstat *)VAR_12[VAR_13][5];
  u32 VAR_18=VAR_12[VAR_13][7];
  signed char *VAR_19=VAR_17->regmap;
  int VAR_20=FUNC_6(VAR_19,VAR_0+(VAR_15&1));
  int VAR_21=FUNC_6(VAR_19,VAR_10[VAR_15]);
  FUNC_1(VAR_16>=0);
  FUNC_1(VAR_21>=0);
  if(VAR_20<0) VAR_20=FUNC_6(VAR_19,-1);
  FUNC_1(VAR_20>=0);
  FUNC_8(VAR_18);

  if(VAR_16!=VAR_1) {
    if(VAR_21==VAR_1) {
      if(VAR_16==VAR_2) FUNC_5(VAR_1,VAR_2);
      else {
        FUNC_4(VAR_21,VAR_2);
        FUNC_4(VAR_16,VAR_1);
      }
    }
    else {
      FUNC_4(VAR_16,VAR_1);
      if(VAR_21!=VAR_2) FUNC_4(VAR_21,VAR_2);
    }
  }
  else if(VAR_21!=VAR_2) FUNC_4(VAR_21,VAR_2);
  if(VAR_14==VAR_3)
    FUNC_2((int)VAR_6);
  if(VAR_14==VAR_5)
    FUNC_2((int)VAR_8);
  if(VAR_14==VAR_4)
    FUNC_2((int)VAR_7);

  FUNC_7(VAR_18);
  FUNC_3(VAR_12[VAR_13][2]);
}
