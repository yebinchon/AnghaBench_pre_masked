
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 int * VAR_0 ;

void FUNC_4(int VAR_1,int VAR_2,int VAR_3)
{
  if(VAR_1==VAR_3) {
    FUNC_0("imul %%%s,%%%s\n",VAR_0[VAR_2],VAR_0[VAR_3]);
    FUNC_2(0x0F);
    FUNC_2(0xAF);
    FUNC_3(3,VAR_2,VAR_3);
  }
  else
  {
    FUNC_1(VAR_1,VAR_3);
    FUNC_4(VAR_3,VAR_2,VAR_3);
  }
}
