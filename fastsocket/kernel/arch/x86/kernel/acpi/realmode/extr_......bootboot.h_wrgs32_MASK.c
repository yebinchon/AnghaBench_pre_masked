
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int addr_t ;



__attribute__((used)) static inline void FUNC_0(u32 VAR_0, addr_t VAR_1)
{
 asm volatile("movl %1,%%gs:%0" : "+m" (*(u32 *)VAR_1) : "ri" (VAR_0));
}
