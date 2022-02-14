
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char,int ) ;
 int FUNC_1 (unsigned short,unsigned long) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(unsigned char VAR_0, unsigned long VAR_1)
{
 if (VAR_1 >= 0x300 && VAR_1 < 0x320 && VAR_1 & 0x01) {
  FUNC_1(((unsigned short)VAR_0 << 8), VAR_1 - 1);
  return;
 }

 FUNC_0(VAR_0, FUNC_2(VAR_1));
}
