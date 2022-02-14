
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef float const int32_t ;



__attribute__((used)) static void FUNC_0(float *VAR_0, int32_t *VAR_1,
                            const float *VAR_2, ptrdiff_t VAR_3,
                            int VAR_4)
{

    int VAR_5 = 64 << VAR_4;
    int VAR_6 = 8 >> VAR_4;
    int VAR_7 = VAR_3 >> (VAR_4 + 1);
    int VAR_8, VAR_9, VAR_10;

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

        for (VAR_9 = 0; VAR_9 < VAR_5 / 2; VAR_9++) {
            float VAR_11 = 0;
            float VAR_12 = 0;

            for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
                VAR_11 += VAR_2[ VAR_9 * VAR_6 + VAR_10] * VAR_1[-VAR_10];
                VAR_12 += VAR_2[255 - VAR_9 * VAR_6 - VAR_10] * VAR_1[-VAR_10];
            }

            VAR_0[ VAR_9] = VAR_11;
            VAR_0[VAR_5 / 2 + VAR_9] = VAR_12;
        }

        VAR_1++;
        VAR_0 += VAR_5;
    }
}
