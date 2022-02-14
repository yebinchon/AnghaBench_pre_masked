
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int addr_t ;



__attribute__((used)) static inline u16 FUNC_0(addr_t VAR_0)
{
 u16 VAR_1;
 asm volatile("movw %%gs:%1,%0" : "=r" (VAR_1) : "m" (*(u16 *)VAR_0));
 return VAR_1;
}
