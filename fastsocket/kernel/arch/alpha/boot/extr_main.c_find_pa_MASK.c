
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void *
FUNC_0(unsigned long *VAR_0, void *VAR_1)
{
 unsigned long VAR_2 = (unsigned long) VAR_1;
 unsigned long VAR_3;

 VAR_3 = VAR_0[VAR_2 >> 13];
 VAR_3 >>= 32;
 VAR_3 <<= 13;
 VAR_3 |= VAR_2 & 0x1fff;
 return (void *) VAR_3;
}
