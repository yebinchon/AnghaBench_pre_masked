
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1,
                          const uint8_t *VAR_2, uint8_t *VAR_3,
                          ptrdiff_t VAR_4, ptrdiff_t VAR_5,
                          ptrdiff_t VAR_6, ptrdiff_t VAR_7,
                          int VAR_8, int VAR_9,
                          int VAR_10, int VAR_11)
{
    const uint16_t *VAR_12 = (const uint16_t *)VAR_0;
    const uint16_t *VAR_13 = (const uint16_t *)VAR_1;
    const uint16_t *VAR_14 = (const uint16_t *)VAR_2;
    uint16_t *VAR_15 = (uint16_t *)VAR_3;
    int VAR_16, VAR_17;

    for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
        for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
            VAR_15[VAR_16] = VAR_12[VAR_16] + ((VAR_14[VAR_16] * (VAR_13[VAR_16] - VAR_12[VAR_16]) + VAR_10) >> VAR_11);
        }

        VAR_15 += VAR_7 / 2;
        VAR_12 += VAR_4 / 2;
        VAR_13 += VAR_5 / 2;
        VAR_14 += VAR_6 / 2;
    }
}
