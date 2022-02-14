
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0)
{
    register int VAR_1 = (unsigned long) VAR_0 & 0x00000010, VAR_2 = 0;

    if (VAR_1) {
        ((unsigned long *) VAR_0)[0] = 0L;
        ((unsigned long *) VAR_0)[1] = 0L;
        ((unsigned long *) VAR_0)[2] = 0L;
        ((unsigned long *) VAR_0)[3] = 0L;
        VAR_2 += 16;
    }
    for (; VAR_2 < sizeof(int16_t) * 6 * 64 - 31; VAR_2 += 32)
        __asm__ volatile ("dcbz %0,%1" :: "b" (VAR_0), "r" (VAR_2) : "memory");
    if (VAR_1) {
        ((unsigned long *) VAR_0)[188] = 0L;
        ((unsigned long *) VAR_0)[189] = 0L;
        ((unsigned long *) VAR_0)[190] = 0L;
        ((unsigned long *) VAR_0)[191] = 0L;
        VAR_2 += 16;
    }
}
