
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,int,int) ;
 int * VAR_0 ;

void FUNC_5(int VAR_1,int VAR_2,unsigned int VAR_3,int VAR_4)
{
  if(VAR_1==VAR_4) {
    FUNC_0("shld %%%s,%%%s,%d\n",VAR_0[VAR_4],VAR_0[VAR_2],VAR_3);
    FUNC_1(VAR_3>0);
    FUNC_3(0x0F);
    FUNC_3(0xA4);
    FUNC_4(3,VAR_4,VAR_2);
    FUNC_3(VAR_3);
  }
  else {
    FUNC_2(VAR_1,VAR_4);
    FUNC_5(VAR_4,VAR_2,VAR_3,VAR_4);
  }
}
