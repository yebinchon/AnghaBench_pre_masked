
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static inline int FUNC_0(int VAR_0, const void *VAR_1)
{
 u8 VAR_2;
 const u32 *VAR_3 = (const u32 *)VAR_1;

 asm("btl %2,%1; setc %0" : "=qm" (VAR_2) : "m" (*VAR_3), "Ir" (VAR_0));
 return VAR_2;
}
