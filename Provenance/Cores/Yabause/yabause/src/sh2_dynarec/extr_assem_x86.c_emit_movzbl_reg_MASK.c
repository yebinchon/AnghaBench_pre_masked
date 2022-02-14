
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 scalar_t__* VAR_0 ;

void FUNC_5(int VAR_1, int VAR_2)
{
  if(VAR_1<4) {
    FUNC_0("movzbl %%%s,%%%s\n",VAR_0[VAR_1]+1,VAR_0[VAR_2]);
    FUNC_3(0x0F);
    FUNC_3(0xB6);
    FUNC_4(3,VAR_1,VAR_2);
  }
  else if(VAR_2<4) {
    FUNC_2(VAR_1,VAR_2);
    FUNC_5(VAR_2,VAR_2);
  }
  else {
    FUNC_1(VAR_1,0xFF,VAR_2);
  }
}
