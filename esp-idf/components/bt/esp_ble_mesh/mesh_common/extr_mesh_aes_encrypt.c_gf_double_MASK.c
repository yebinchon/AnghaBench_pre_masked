
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(uint8_t *VAR_2, uint8_t *VAR_3)
{


    uint8_t *VAR_4 = VAR_3 + (VAR_0 - 1);


    uint8_t VAR_5 = (VAR_3[0] >> 7) ? VAR_1 : 0;

    VAR_2 += (VAR_0 - 1);
    for (;;) {
        *VAR_2-- = (*VAR_4 << 1) ^ VAR_5;
        if (VAR_4 == VAR_3) {
            break;
        }
        VAR_5 = *VAR_4-- >> 7;
    }
}
