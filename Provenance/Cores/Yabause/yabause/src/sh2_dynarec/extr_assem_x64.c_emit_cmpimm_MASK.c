
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int) ;
 int * VAR_0 ;

void FUNC_5(int VAR_1,int VAR_2)
{
  FUNC_0("cmp $%d,%%%s\n",VAR_2,VAR_0[VAR_1]);
  if(VAR_1>=8) FUNC_3(0,0,0,VAR_1>>3);
  if(VAR_2<128&&VAR_2>=-128) {
    FUNC_1(0x83);
    FUNC_2(3,VAR_1&7,7);
    FUNC_1(VAR_2);
  }
  else
  {
    FUNC_1(0x81);
    FUNC_2(3,VAR_1&7,7);
    FUNC_4(VAR_2);
  }
}
