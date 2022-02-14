
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;

int FUNC_1(void)
{
 int VAR_5;

 if ((FUNC_0() & 0x0008f000) == 0) {
  VAR_5 = VAR_4;
 } else if ((FUNC_0() & 0x0008f000) == 0x00007000) {
  VAR_5 = (FUNC_0() & (1 << 23)) ? VAR_1 : VAR_0;
 } else if ((FUNC_0() & 0x00080000) == 0x00000000) {
  VAR_5 = (FUNC_0() >> 16) & 7;
  if (VAR_5)
   VAR_5 += VAR_0;
 } else if ((FUNC_0() & 0x000f0000) == 0x000f0000) {
  unsigned int VAR_6;



  asm("mrc	p15, 0, %0, c0, c1, 4"
      : "=r" (VAR_6));
  if ((VAR_6 & 0x0000000f) == 0x00000003 ||
      (VAR_6 & 0x000000f0) == 0x00000030)
   VAR_5 = VAR_3;
  else if ((VAR_6 & 0x0000000f) == 0x00000002 ||
    (VAR_6 & 0x000000f0) == 0x00000020)
   VAR_5 = VAR_2;
  else
   VAR_5 = VAR_4;
 } else
  VAR_5 = VAR_4;

 return VAR_5;
}
