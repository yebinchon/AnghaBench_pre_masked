
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_0)
{
 unsigned long VAR_1;

 __asm__ __volatile__("rd	%%asr24, %0\n\t"
        "add	%0, %1, %0\n\t"
        "wr	%0, 0, %%asr24\n\t"
        : "=&r" (VAR_1)
        : "r" (VAR_0));

 return VAR_1;
}
