
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(void)
{
 unsigned int VAR_0;

 FUNC_0();
 asm volatile(
 "	mcr	p15, 0, %1, c7, c5, 0\n"
 "	mcr	p15, 0, %1, c7, c10, 4\n"



 "	mrc	p15, 0, %0, c1, c0, 1\n"
 "	bic	%0, %0, #0x20\n"
 "	mcr	p15, 0, %0, c1, c0, 1\n"
 "	mrc	p15, 0, %0, c1, c0, 0\n"
 "	bic	%0, %0, #0x04\n"
 "	mcr	p15, 0, %0, c1, c0, 0\n"
   : "=&r" (VAR_0)
   : "r" (0)
   : "cc");
}
