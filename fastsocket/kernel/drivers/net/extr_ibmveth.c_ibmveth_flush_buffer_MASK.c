
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(void *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += VAR_0)
  asm("dcbfl %0,%1" :: "b" (VAR_1), "r" (VAR_3));
}
