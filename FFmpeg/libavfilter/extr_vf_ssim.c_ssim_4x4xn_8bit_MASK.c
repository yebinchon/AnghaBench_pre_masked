
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, ptrdiff_t VAR_1,
                            const uint8_t *VAR_2, ptrdiff_t VAR_3,
                            int (*VAR_4)[4], int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        uint32_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

        for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
            for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
                int VAR_13 = VAR_0[VAR_6 + VAR_7 * VAR_1];
                int VAR_14 = VAR_2[VAR_6 + VAR_7 * VAR_3];

                VAR_9 += VAR_13;
                VAR_10 += VAR_14;
                VAR_11 += VAR_13*VAR_13;
                VAR_11 += VAR_14*VAR_14;
                VAR_12 += VAR_13*VAR_14;
            }
        }

        VAR_4[VAR_8][0] = VAR_9;
        VAR_4[VAR_8][1] = VAR_10;
        VAR_4[VAR_8][2] = VAR_11;
        VAR_4[VAR_8][3] = VAR_12;
        VAR_0 += 4;
        VAR_2 += 4;
    }
}
