
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(int VAR_0, int VAR_1, int VAR_2,
                                     const uint8_t *VAR_3,
                                     const uint8_t *VAR_4,
                                     uint8_t *VAR_5,
                                     ptrdiff_t VAR_6,
                                     ptrdiff_t VAR_7,
                                     ptrdiff_t VAR_8,
                                     float *VAR_9)
{
    const uint16_t *VAR_10 = (const uint16_t *)VAR_3;
    const uint16_t *VAR_11 = (const uint16_t *)VAR_4;
    uint16_t *VAR_12 = (uint16_t *)VAR_5;
    int VAR_13, VAR_14;

    VAR_6 /= 2;
    VAR_8 /= 2;
    VAR_7 /= 2;

    for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
        for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
            int VAR_15 = VAR_9[VAR_10[(VAR_14 << 1) * VAR_6 + (VAR_13 << 1)]];

            if (VAR_15 >= 0 && VAR_15 <= VAR_0) {
                VAR_12[VAR_13] = VAR_15;
            } else {
                VAR_12[VAR_13] = VAR_11[VAR_13];
            }
        }
        VAR_11 += VAR_7;
        VAR_12 += VAR_8;
    }
}
