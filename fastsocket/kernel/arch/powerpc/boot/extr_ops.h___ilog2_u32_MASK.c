
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline __attribute__((const))
int FUNC_0(u32 VAR_0)
{
 int VAR_1;
 asm ("cntlzw %0,%1" : "=r" (VAR_1) : "r" (VAR_0));
 return 31 - VAR_1;
}
