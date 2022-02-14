
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(char * VAR_0)
{

 asm volatile("ldc %0, sr\n\t"
       "mov.l @%1, %0" : : "r" (0x10000000), "r" (0x80000001));
}
