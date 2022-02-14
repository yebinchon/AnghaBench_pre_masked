
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned long VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 register unsigned long VAR_3 asm("2") = VAR_1;
 register unsigned long VAR_4 asm("3") = VAR_2;
 int VAR_5 = 0;

 asm volatile(





  "   diag    %2,2,0x14\n"

  "   ipm     %0\n"
  "   srl     %0,28\n"
  : "=d" (VAR_5), "+d" (VAR_4)
  : "d" (VAR_0), "d" (VAR_3)
  : "cc");

 return VAR_5;
}
