
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(unsigned long *VAR_0, unsigned long VAR_1)
{
 __asm__ __volatile__("swap [%2], %0" : "=&r" (VAR_1) : "0" (VAR_1), "r" (VAR_0));
 return VAR_1;
}
