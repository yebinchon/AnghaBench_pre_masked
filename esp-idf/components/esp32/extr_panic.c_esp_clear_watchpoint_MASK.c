
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0)
{

    int VAR_1 = 0;
    if (VAR_0 == 0) {
        asm volatile(
            "wsr.dbreakc0 %0\n" ::"r"(VAR_1));

    } else {
        asm volatile(
            "wsr.dbreakc1 %0\n" ::"r"(VAR_1));

    }
}
