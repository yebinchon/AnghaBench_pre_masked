
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int) ;
 int * VAR_0 ;

void FUNC_4(int VAR_1,int VAR_2)
{
  FUNC_0("add $%d,%%%s\n",VAR_1,VAR_0[VAR_2]);
  if(VAR_1<128&&VAR_1>=-128) {
    FUNC_1(0x83);
    FUNC_2(3,VAR_2,0);
    FUNC_1(VAR_1);
  }
  else
  {
    FUNC_1(0x81);
    FUNC_2(3,VAR_2,0);
    FUNC_3(VAR_1);
  }
}
