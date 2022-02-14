
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int) ;
 int * VAR_0 ;

void FUNC_5(int VAR_1,int VAR_2,int VAR_3)
{
  if(VAR_1==VAR_3) {
    if(VAR_2!=0) {
      FUNC_0("xor $%d,%%%s\n",VAR_2,VAR_0[VAR_3]);
      if(VAR_2<128&&VAR_2>=-128) {
        FUNC_2(0x83);
        FUNC_3(3,VAR_3,6);
        FUNC_2(VAR_2);
      }
      else
      {
        FUNC_2(0x81);
        FUNC_3(3,VAR_3,6);
        FUNC_4(VAR_2);
      }
    }
  }
  else {
    FUNC_1(VAR_1,VAR_3);
    FUNC_5(VAR_3,VAR_2,VAR_3);
  }
}
