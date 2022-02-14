
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct regstat*,int,scalar_t__) ;
 int FUNC_1 (struct regstat*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct regstat*,scalar_t__) ;
 int FUNC_4 (struct regstat*,scalar_t__) ;
 int FUNC_5 (struct regstat*,scalar_t__) ;
 int* VAR_2 ;
 scalar_t__ FUNC_6 (struct regstat*,scalar_t__) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_7 (struct regstat*,scalar_t__,int) ;

void FUNC_8(struct regstat *VAR_8,int VAR_9)
{


  FUNC_0(VAR_8,VAR_9,VAR_6[VAR_9]);
  if(VAR_7[VAR_9]>=0&&VAR_7[VAR_9]!=VAR_1) FUNC_0(VAR_8,VAR_9,VAR_7[VAR_9]);
  if(VAR_4[VAR_9]==0x7) {
    if(FUNC_6(VAR_8,VAR_6[VAR_9])) {
      int VAR_10=FUNC_5(VAR_8,VAR_6[VAR_9]);
      FUNC_7(VAR_8,VAR_7[VAR_9],VAR_10+VAR_2[VAR_9]);
    }
    else FUNC_3(VAR_8,VAR_7[VAR_9]);
  }
  else if(VAR_4[VAR_9]==0x8) {
    FUNC_0(VAR_8,VAR_9,VAR_0);
    FUNC_4(VAR_8,VAR_0);
    FUNC_1(VAR_8,VAR_9,-1);
    VAR_3[VAR_9]=1;
  }
  else if(VAR_4[VAR_9]==12) {
    if(VAR_5[VAR_9]==8) {
      FUNC_0(VAR_8,VAR_9,VAR_0);
      FUNC_4(VAR_8,VAR_0);
      FUNC_1(VAR_8,VAR_9,-1);
      VAR_3[VAR_9]=1;
    }else

    if(FUNC_6(VAR_8,VAR_6[VAR_9])) {
      int VAR_11=FUNC_5(VAR_8,VAR_6[VAR_9]);
      if(VAR_5[VAR_9]==0x09) FUNC_7(VAR_8,VAR_7[VAR_9],VAR_11&VAR_2[VAR_9]);
      if(VAR_5[VAR_9]==0x0a) FUNC_7(VAR_8,VAR_7[VAR_9],VAR_11^VAR_2[VAR_9]);
      if(VAR_5[VAR_9]==0x0b) FUNC_7(VAR_8,VAR_7[VAR_9],VAR_11|VAR_2[VAR_9]);
    }
    else FUNC_3(VAR_8,VAR_7[VAR_9]);
  }
  else {
    FUNC_2(VAR_4[VAR_9]==0xE);
    FUNC_7(VAR_8,VAR_7[VAR_9],VAR_2[VAR_9]);
  }
  if(VAR_7[VAR_9]>=0&&VAR_7[VAR_9]!=VAR_1) FUNC_4(VAR_8,VAR_7[VAR_9]);
}
