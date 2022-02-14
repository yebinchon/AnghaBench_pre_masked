
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __attribute__((noinline)) void FUNC_0(int VAR_0)
{
 asm volatile(
  "0: subs %0, %0, #1 ;"
  "bgt 0b"
  : "=r" (VAR_0) : "0" (VAR_0) : "cc");
}
