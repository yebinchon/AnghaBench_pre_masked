
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(u32 VAR_1)
{
 VAR_1 &= VAR_0;
 asm volatile("mcr p15, 0, %0, c9, c12, 0" : : "r" (VAR_1));
}
