
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(int VAR_1)
{
 if (VAR_0)
  asm volatile("diag %0,0,0x9c"
        : : "d" (FUNC_0(VAR_1)));
 else
  FUNC_0();
}
