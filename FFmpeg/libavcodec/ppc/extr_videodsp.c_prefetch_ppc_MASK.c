
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, ptrdiff_t VAR_1, int VAR_2)
{
    register const uint8_t *VAR_3 = VAR_0;
    do {
        __asm__ volatile ("dcbt 0,%0" : : "r" (VAR_3));
        VAR_3 += VAR_1;
    } while(--VAR_2);
}
