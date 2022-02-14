
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short* FUNC_0 (unsigned int) ;
 unsigned short* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,unsigned short*) ;

void FUNC_3(unsigned int VAR_0, const void *VAR_1, unsigned long VAR_2)
{
 const unsigned short *VAR_3 = VAR_1;
 unsigned short *VAR_4;

 if (VAR_0 >= 0x300 && VAR_0 < 0x320) {
  VAR_4 = FUNC_1(VAR_0);
  while (VAR_2--)
   FUNC_2(*VAR_3++, VAR_4);
 } else {
  VAR_4 = FUNC_0(VAR_0);
  while (VAR_2--)
   *(volatile unsigned short *)VAR_4 = *VAR_3++;
 }
}
