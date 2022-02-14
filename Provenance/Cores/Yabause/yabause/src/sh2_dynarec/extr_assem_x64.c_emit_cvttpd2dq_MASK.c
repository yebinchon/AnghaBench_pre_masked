
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,unsigned int,unsigned int) ;

void FUNC_4(unsigned int VAR_0,unsigned int VAR_1)
{
  FUNC_0("cvttpd2dq xmm%d,xmm%d\n",VAR_0,VAR_1);
  FUNC_1(VAR_0<8);
  FUNC_1(VAR_1<8);
  FUNC_2(0x66);
  FUNC_2(0x0f);
  FUNC_2(0xe6);
  FUNC_3(3,VAR_0,VAR_1);
}
