
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;

esp_err_t FUNC_0(int VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;
    if (VAR_2 < 0 || VAR_2 > 1) {
        return VAR_0;
    }
    if (VAR_5 & (~0xC0000000)) {
        return VAR_0;
    }
    int VAR_7 = 0x3F;

    for (VAR_6 = 0; VAR_6 < 7; VAR_6++) {
        if (VAR_4 == (1 << VAR_6)) {
            break;
        }
        VAR_7 <<= 1;
    }
    if (VAR_6 == 7) {
        return VAR_0;
    }

    VAR_7 = (VAR_7 & 0x3f) | VAR_5;

    if (VAR_2 == 0) {
        asm volatile(
            "wsr.dbreaka0 %0\n" "wsr.dbreakc0 %1\n" ::"r"(VAR_3), "r"(VAR_7));


    } else {
        asm volatile(
            "wsr.dbreaka1 %0\n" "wsr.dbreakc1 %1\n" ::"r"(VAR_3), "r"(VAR_7));


    }
    return VAR_1;
}
