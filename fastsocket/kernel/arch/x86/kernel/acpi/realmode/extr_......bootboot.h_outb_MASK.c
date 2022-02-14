
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static inline void FUNC_0(u8 VAR_0, u16 VAR_1)
{
 asm volatile("outb %0,%1" : : "a" (VAR_0), "dN" (VAR_1));
}
