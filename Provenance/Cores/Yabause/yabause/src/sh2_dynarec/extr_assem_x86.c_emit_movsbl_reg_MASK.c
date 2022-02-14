
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int) ;
 scalar_t__* VAR_0 ;

void FUNC_6(int VAR_1, int VAR_2)
{
  if(VAR_1<4) {
    FUNC_0("movsbl %%%s,%%%s\n",VAR_0[VAR_1]+1,VAR_0[VAR_2]);
    FUNC_4(0x0F);
    FUNC_4(0xBE);
    FUNC_5(3,VAR_1,VAR_2);
  }
  else if(VAR_2<4) {
    FUNC_1(VAR_1,VAR_2);
    FUNC_6(VAR_2,VAR_2);
  }
  else {
    FUNC_3(VAR_1,24,VAR_2);
    FUNC_2(VAR_2,24,VAR_2);
  }
}
