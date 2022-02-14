
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline u16 FUNC_0(void)
{
 u16 VAR_0;
 asm volatile("movw %%fs,%0" : "=rm" (VAR_0));
 return VAR_0;
}
