
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1,
                          uint8_t *VAR_2,
                          ptrdiff_t VAR_3, ptrdiff_t VAR_4,
                          ptrdiff_t VAR_5,
                          int VAR_6, int VAR_7,
                          int VAR_8, int VAR_9, int VAR_10)
{
    const uint16_t *VAR_11 = (const uint16_t *)VAR_0;
    const uint16_t *VAR_12 = (const uint16_t *)VAR_1;
    uint16_t *VAR_13 = (uint16_t *)VAR_2;
    int VAR_14, VAR_15;

    for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
        for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
            VAR_13[VAR_14] = ((VAR_11[VAR_14] * (((VAR_12[VAR_14] >> 1) & 1) + VAR_12[VAR_14])) + VAR_8) >> VAR_9;
        }

        VAR_13 += VAR_5 / 2;
        VAR_11 += VAR_3 / 2;
        VAR_12 += VAR_4 / 2;
    }
}
