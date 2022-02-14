
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int,int ,int) ;
 scalar_t__* VAR_0 ;

void FUNC_4(int VAR_1, int VAR_2)
{
  if(VAR_1<4&&VAR_2<8) {
    FUNC_0("movsbl %%%s,%%%s\n",VAR_0[VAR_1]+1,VAR_0[VAR_2]);
    FUNC_1(0x0F);
    FUNC_1(0xBE);
    FUNC_2(3,VAR_1,VAR_2);
  }
  else {
    FUNC_0("movsbl %%%s,%%%s\n",VAR_0[VAR_1]+1,VAR_0[VAR_2]);
    FUNC_3(0,VAR_2>>3,0,VAR_1>>3);
    FUNC_1(0x0F);
    FUNC_1(0xBE);
    FUNC_2(3,VAR_1,VAR_2);
  }
}
