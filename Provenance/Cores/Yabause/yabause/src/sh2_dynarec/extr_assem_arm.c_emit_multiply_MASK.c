
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int) ;
 int * VAR_0 ;

void FUNC_4(unsigned int VAR_1,unsigned int VAR_2,unsigned int VAR_3)
{
  if(VAR_1==VAR_3&&VAR_2==VAR_3) {FUNC_2(VAR_1,14);FUNC_4(14,14,VAR_3);}
  else if(VAR_1==VAR_3) {FUNC_4(VAR_2,VAR_1,VAR_3);}
  else {
    FUNC_0("mul %s, %s, %s\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_0[VAR_2]);
    FUNC_1(VAR_1<16);
    FUNC_1(VAR_2<16);
    FUNC_1(VAR_3<16);
    FUNC_3(0xe0000090|(VAR_3<<16)|(VAR_2<<8)|VAR_1);
  }
}
