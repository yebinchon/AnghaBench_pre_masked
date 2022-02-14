
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 __asm__ __volatile__(
  "cld\n\t"
  "rep ; movsl"
  : "=&c" (VAR_2), "=&D" (VAR_3), "=&S" (VAR_4)
  : "0" (1024), "1" ((long) VAR_0), "2" ((long) VAR_1)
  : "memory");
}
