
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
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_10 (int) ;
 int* VAR_16 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int) ;
 scalar_t__ VAR_17 ;
 int** VAR_18 ;

FUNC_13(int VAR_19)
{
  FUNC_0("do_readstub %x\n",VAR_17+VAR_18[VAR_19][3]*2);
  FUNC_12(VAR_18[VAR_19][1],(int)VAR_15);
  int VAR_20=VAR_18[VAR_19][0];
  int VAR_21=VAR_18[VAR_19][3];
  int VAR_22=VAR_18[VAR_19][4];
  struct regstat *VAR_23=(struct regstat *)VAR_18[VAR_19][5];
  u32 VAR_24=VAR_18[VAR_19][7];
  signed char *VAR_25=VAR_23->regmap;
  int VAR_26=FUNC_9(VAR_25,VAR_0+(VAR_21&1));
  int VAR_27;

  VAR_27=FUNC_9(VAR_25,VAR_16[VAR_21]==VAR_14?-1:VAR_16[VAR_21]);
  FUNC_1(VAR_22>=0);
  if(VAR_26<0) VAR_26=VAR_27;
  if(VAR_26<0) VAR_26=FUNC_9(VAR_25,-1);
  FUNC_1(VAR_26>=0);
  FUNC_11(VAR_24);
  if(VAR_22!=VAR_3) FUNC_5(VAR_22,VAR_3);
  if(VAR_20==VAR_6) FUNC_8(VAR_3,1,VAR_3);
  if(VAR_20==VAR_6)
    FUNC_3((int)VAR_10);
  if(VAR_20==VAR_9)
    FUNC_3((int)VAR_12);
  if(VAR_20==VAR_7)
    FUNC_3((int)VAR_11);
  if(VAR_20==VAR_8)
  {

    int VAR_28=FUNC_9(VAR_25,VAR_13);
    FUNC_1(VAR_28>=0);
    if(VAR_22==VAR_1||VAR_22==VAR_2||VAR_22==VAR_4||VAR_22==VAR_5||VAR_22==VAR_3)
      FUNC_5(VAR_22,12);

    FUNC_3((int)VAR_11);
    if(VAR_22==VAR_1||VAR_22==VAR_2||VAR_22==VAR_4||VAR_22==VAR_5)
      FUNC_5(12,VAR_22);

    if(VAR_28==VAR_3) {
      FUNC_5(VAR_1,12);

    }
    else
    {
      if(VAR_28==VAR_1||VAR_28==VAR_2||VAR_28==VAR_4||VAR_28==VAR_5)
        FUNC_5(VAR_1,12);

      else
        FUNC_5(VAR_1,VAR_28);
      if(VAR_22==VAR_3) {
        FUNC_5(12,VAR_3);

        FUNC_2(VAR_3,4,VAR_3);
      }else
        FUNC_2(VAR_22,4,VAR_3);
    }
    FUNC_3((int)VAR_11);
    FUNC_1(VAR_27>=0);
    if(VAR_27!=VAR_1) FUNC_5(VAR_1,VAR_27);
    if(VAR_28==VAR_1||VAR_28==VAR_2||VAR_28==VAR_4||VAR_28==VAR_5||VAR_28==VAR_3)
      FUNC_5(12,VAR_28);

  }
  else if(VAR_20==VAR_6)
  {
    if(VAR_27>=0) FUNC_6(VAR_1,VAR_27);
  }
  else if(VAR_20==VAR_9)
  {
    if(VAR_27>=0) FUNC_7(VAR_1,VAR_27);
  }
  else
  {
    if(VAR_27!=VAR_1&&VAR_27>=0) FUNC_5(VAR_1,VAR_27);
  }
  FUNC_10(VAR_24);
  if(VAR_20==VAR_8) FUNC_2(VAR_22,8,VAR_22);
  FUNC_4(VAR_18[VAR_19][2]);
}
