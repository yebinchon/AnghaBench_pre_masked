
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0, int VAR_1, uint8_t *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
        int VAR_4 = (uint16_t)VAR_0[VAR_3];
        int VAR_5 = VAR_4 & 1;

        VAR_0[VAR_3] = (((VAR_4 >> 1) ^ -VAR_5) * VAR_1 * VAR_2[VAR_3] >> 4)
                   + VAR_5;
    }
}
