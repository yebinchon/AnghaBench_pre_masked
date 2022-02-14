
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned short* FUNC_0 (unsigned int) ;
 unsigned short* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned short*) ;
 int FUNC_3 (int,unsigned int,void*,int,unsigned long,int) ;

void FUNC_4(unsigned int VAR_4, void *VAR_5, unsigned long VAR_6)
{
 unsigned short *VAR_7 = VAR_5;
 unsigned short *VAR_8;

 if (VAR_4 >= 0x300 && VAR_4 < 0x320) {
  VAR_8 = FUNC_1(VAR_4);
  while (VAR_6--)
   *VAR_7++ = FUNC_2(VAR_8);
 } else {
  VAR_8 = FUNC_0(VAR_4);
  while (VAR_6--)
   *VAR_7++ = *(volatile unsigned short *)VAR_8;
 }
}
