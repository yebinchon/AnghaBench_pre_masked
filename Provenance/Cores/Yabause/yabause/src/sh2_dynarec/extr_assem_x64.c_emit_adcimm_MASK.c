
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,unsigned int,int) ;
 int FUNC_4 (int) ;
 int * VAR_0 ;

void FUNC_5(int VAR_1,unsigned int VAR_2)
{
  FUNC_0("adc $%d,%%%s\n",VAR_1,VAR_0[VAR_2]);
  FUNC_1(VAR_2<8);
  if(VAR_1<128&&VAR_1>=-128) {
    FUNC_2(0x83);
    FUNC_3(3,VAR_2,2);
    FUNC_2(VAR_1);
  }
  else
  {
    FUNC_2(0x81);
    FUNC_3(3,VAR_2,2);
    FUNC_4(VAR_1);
  }
}
