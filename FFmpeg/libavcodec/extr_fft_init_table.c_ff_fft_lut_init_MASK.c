
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



void FUNC_0(uint16_t *VAR_0, int VAR_1, int VAR_2, int *VAR_3)
{
    if (VAR_2 < 16) {
        VAR_0[*VAR_3] = VAR_1 >> 2;
        (*VAR_3)++;
    }
    else {
        FUNC_0(VAR_0, VAR_1, VAR_2>>1, VAR_3);
        FUNC_0(VAR_0, VAR_1+(VAR_2>>1), VAR_2>>2, VAR_3);
        FUNC_0(VAR_0, VAR_1+3*(VAR_2>>2), VAR_2>>2, VAR_3);
    }
}
