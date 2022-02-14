
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline void FUNC_0(u32 VAR_0)
{

 VAR_0 &= 0x0ffff77f;
 asm volatile("mcr p15, 0, %0, c15, c12, 0" : : "r" (VAR_0));
}
