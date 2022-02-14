
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static void FUNC_0(uint32_t VAR_0, uint32_t *VAR_1,
                         uint16_t *VAR_2, uint16_t *VAR_3,
                         uint16_t *VAR_4, uint8_t *VAR_5)
{
    uint32_t VAR_6 = 0, VAR_7 = 4096 / VAR_0, VAR_8 = VAR_7 - (VAR_7 >> 1);

    *VAR_1 = VAR_8 * VAR_0;

    for (int VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
        VAR_2[VAR_9] = VAR_7;
        VAR_3[VAR_9] = VAR_6;
        VAR_4[VAR_9] = VAR_8;
        for (int VAR_10 = (VAR_6 + 128 - 1) >> 7, VAR_11 = ((VAR_6 + VAR_7 - 1) >> 7) + 1; VAR_10 < VAR_11; VAR_10++)
            VAR_5[VAR_10] = VAR_9;

        VAR_6 += VAR_7;
    }
}
