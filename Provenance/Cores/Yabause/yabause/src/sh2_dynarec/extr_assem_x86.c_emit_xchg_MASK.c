
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int * VAR_1 ;

void FUNC_3(int VAR_2, int VAR_3)
{
  FUNC_0("xchg %%%s,%%%s\n",VAR_1[VAR_2],VAR_1[VAR_3]);
  if(VAR_2==VAR_0) {
    FUNC_1(0x90+VAR_3);
  }
  else
  {
    FUNC_1(0x87);
    FUNC_2(3,VAR_2,VAR_3);
  }
}
