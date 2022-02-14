
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int) ;
 int * VAR_2 ;

void FUNC_7(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
  if(VAR_6<0) FUNC_2(VAR_3, VAR_4, VAR_5);
  else {
    FUNC_0("mov %%%s,%x(%%%s,%%%s,1)\n",VAR_2[VAR_3],VAR_4,VAR_2[VAR_5],VAR_2[VAR_6]);
    FUNC_1(VAR_5!=VAR_1);
    FUNC_3(0x89);
    if(VAR_4==0&&VAR_5!=VAR_0) {
      FUNC_4(0,4,VAR_3);
      FUNC_5(0,VAR_6,VAR_5);
    }
    else if(VAR_4<128&&VAR_4>=-128) {
      FUNC_4(1,4,VAR_3);
      FUNC_5(0,VAR_6,VAR_5);
      FUNC_3(VAR_4);
    }
    else
    {
      FUNC_4(2,4,VAR_3);
      FUNC_5(0,VAR_6,VAR_5);
      FUNC_6(VAR_4);
    }
  }
}
