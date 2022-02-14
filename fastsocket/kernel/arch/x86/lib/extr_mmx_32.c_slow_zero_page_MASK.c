
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0)
{
 int VAR_1, VAR_2;

 __asm__ __volatile__(
  "cld\n\t"
  "rep ; stosl"

   : "=&c" (VAR_1), "=&D" (VAR_2)
   :"a" (0), "1" (VAR_0), "0" (1024)
   :"memory");
}
