
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int) ;
 int ** VAR_3 ;

void FUNC_8(int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
  if(VAR_7<0) FUNC_2(VAR_4, VAR_5, VAR_6);
  else
  if(VAR_4<4) {
    FUNC_0("movb %%%cl,%x(%%%s,%%%s,1)\n",VAR_3[VAR_4][1],VAR_5,VAR_3[VAR_6],VAR_3[VAR_7]);
    FUNC_1(VAR_6!=VAR_2);
    FUNC_4(0x88);
    if(VAR_5==0&&VAR_6!=VAR_1) {
      FUNC_5(0,4,VAR_4);
      FUNC_6(0,VAR_7,VAR_6);
    }
    else if(VAR_5<128&&VAR_5>=-128) {
      FUNC_5(1,4,VAR_4);
      FUNC_6(0,VAR_7,VAR_6);
      FUNC_4(VAR_5);
    }
    else
    {
      FUNC_5(2,4,VAR_4);
      FUNC_6(0,VAR_7,VAR_6);
      FUNC_7(VAR_5);
    }
  }
  else
  {
    FUNC_3(VAR_0,VAR_4);
    FUNC_8(VAR_0,VAR_5,VAR_6==VAR_0?VAR_4:VAR_6,VAR_7==VAR_0?VAR_4:VAR_7,VAR_8);
    FUNC_3(VAR_0,VAR_4);
  }
}
