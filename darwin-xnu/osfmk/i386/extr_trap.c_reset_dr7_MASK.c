
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void
FUNC_0(void)
{
 long VAR_0 = 0x400;
 __asm__ volatile("mov %0,%%dr7" : : "r" (VAR_0));
}
