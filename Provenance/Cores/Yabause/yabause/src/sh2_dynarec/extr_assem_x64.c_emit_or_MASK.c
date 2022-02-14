
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,unsigned int,unsigned int) ;
 int * VAR_0 ;

void FUNC_5(unsigned int VAR_1,unsigned int VAR_2,unsigned int VAR_3)
{
  FUNC_1(VAR_1<8);
  FUNC_1(VAR_2<8);
  FUNC_1(VAR_3<8);
  if(VAR_1==VAR_3) {
    FUNC_0("or %%%s,%%%s\n",VAR_0[VAR_2],VAR_0[VAR_3]);
    FUNC_3(0x09);
    FUNC_4(3,VAR_1,VAR_2);
  }
  else
  if(VAR_2==VAR_3) {
    FUNC_0("or %%%s,%%%s\n",VAR_0[VAR_1],VAR_0[VAR_3]);
    FUNC_3(0x09);
    FUNC_4(3,VAR_2,VAR_1);
  }
  else {
    FUNC_2(VAR_1,VAR_3);
    FUNC_5(VAR_3,VAR_2,VAR_3);
  }
}
