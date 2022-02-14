
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(void)
{
 register unsigned long VAR_0 asm("1") = 3;
 register unsigned long VAR_1 asm("2");
 register unsigned long VAR_2 asm("3");

 asm volatile(
  "	.insn	rre,0xb2650000,2,0"
  : "+d" (VAR_0), "=d" (VAR_1), "=d" (VAR_2));
 return VAR_2;
}
