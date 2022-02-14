
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 VAR_0)
{
 asm volatile("mcr p6, 0, %0, c0, c5, 0"::"r" (VAR_0));
}
