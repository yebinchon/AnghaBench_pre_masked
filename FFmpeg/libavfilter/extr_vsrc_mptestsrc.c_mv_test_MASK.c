
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < 16*16; VAR_4++) {
        if (VAR_4&16)
            continue;
        for (VAR_3 = 0; VAR_3 < 16*16; VAR_3++)
            VAR_0[VAR_3 + VAR_4*VAR_1] = VAR_3 + VAR_2*8/(VAR_4/32+1);
    }
}
