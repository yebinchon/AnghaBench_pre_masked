
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int) ;
 int * VAR_0 ;

void FUNC_4(int VAR_1,unsigned int VAR_2,int VAR_3)
{
  FUNC_1(VAR_2>0);
  FUNC_1(VAR_2<32);
  FUNC_0("ror %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2);
  FUNC_2(0xe1a00000|FUNC_3(VAR_3,0,VAR_1)|0x60|(VAR_2<<7));
}
