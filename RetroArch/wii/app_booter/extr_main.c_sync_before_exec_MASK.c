
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(const void *VAR_0, uint32_t VAR_1)
{
   uint32_t VAR_2 = (uint32_t)VAR_0 & ~0x1f;
   uint32_t VAR_3 = ((uint32_t)VAR_0 + VAR_1 + 0x1f) & ~0x1f;

   for ( ; VAR_2 < VAR_3; VAR_2 += 32)
      asm("dcbst 0,%0 ; sync ; icbi 0,%0" : : "b"(VAR_2));

   asm("sync ; isync");
}
