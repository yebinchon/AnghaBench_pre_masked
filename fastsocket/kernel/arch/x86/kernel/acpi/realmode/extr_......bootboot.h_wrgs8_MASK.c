
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int addr_t ;



__attribute__((used)) static inline void FUNC_0(u8 VAR_0, addr_t VAR_1)
{
 asm volatile("movb %1,%%gs:%0" : "+m" (*(u8 *)VAR_1) : "qi" (VAR_0));
}
