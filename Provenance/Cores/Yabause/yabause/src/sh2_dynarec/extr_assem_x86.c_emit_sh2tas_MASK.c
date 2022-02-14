
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int) ;
 int * VAR_2 ;

void FUNC_8(int VAR_3, int VAR_4, int VAR_5)
{
  FUNC_4(VAR_5,1,VAR_5);
  if(VAR_4<0) {
    FUNC_0("cmpb $1,(%%%s)\n",VAR_2[VAR_3]);
    FUNC_1(VAR_3!=VAR_1);
    FUNC_5(0x80);
    FUNC_6(0,VAR_3,7);
  }
  else
  {
    FUNC_0("cmpb $1,(%%%s,%%%s,1)\n",VAR_2[VAR_3],VAR_2[VAR_4]);
    FUNC_1(VAR_3!=VAR_1);
    FUNC_5(0x80);
    FUNC_6(0,4,7);
    if(VAR_3!=VAR_0) {
      FUNC_7(0,VAR_4,VAR_3);
    }
    else {
      FUNC_1(VAR_3!=VAR_4);
      FUNC_7(0,VAR_3,VAR_4);
    }
  }
  FUNC_5(1);
  FUNC_2(VAR_5,VAR_5);
  FUNC_3(VAR_3,VAR_4,0x80);
}
