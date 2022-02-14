
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint64_t ;
typedef unsigned int uint16_t ;
typedef int ptrdiff_t ;
typedef unsigned int int64_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, ptrdiff_t VAR_1,
                             const uint8_t *VAR_2, ptrdiff_t VAR_3,
                             int64_t (*VAR_4)[4], int VAR_5)
{
    const uint16_t *VAR_6 = (const uint16_t *)VAR_0;
    const uint16_t *VAR_7 = (const uint16_t *)VAR_2;
    int VAR_8, VAR_9, VAR_10;

    VAR_1 >>= 1;
    VAR_3 >>= 1;

    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
        uint64_t VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;

        for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
                unsigned VAR_15 = VAR_6[VAR_8 + VAR_9 * VAR_1];
                unsigned VAR_16 = VAR_7[VAR_8 + VAR_9 * VAR_3];

                VAR_11 += VAR_15;
                VAR_12 += VAR_16;
                VAR_13 += VAR_15*VAR_15;
                VAR_13 += VAR_16*VAR_16;
                VAR_14 += VAR_15*VAR_16;
            }
        }

        VAR_4[VAR_10][0] = VAR_11;
        VAR_4[VAR_10][1] = VAR_12;
        VAR_4[VAR_10][2] = VAR_13;
        VAR_4[VAR_10][3] = VAR_14;
        VAR_6 += 4;
        VAR_7 += 4;
    }
}
