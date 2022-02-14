
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, int VAR_1, int VAR_2,
                                int VAR_3, int VAR_4, int VAR_5,
                                float VAR_6, float VAR_7, int VAR_8)
{
    const int VAR_9 = VAR_1 * VAR_2;
    int VAR_10, VAR_11, VAR_12, VAR_13;
    float *VAR_14;
    for (VAR_11 = VAR_3; VAR_11 < VAR_4;) {
        for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
            VAR_14 = VAR_0 + VAR_11;
            for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
                VAR_14[VAR_12] *= VAR_7;
            }

            for (VAR_10 = VAR_1; VAR_10 < VAR_9; VAR_10 += VAR_1) {
                for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
                    VAR_14[VAR_10 + VAR_12] += VAR_6 * VAR_14[VAR_10 - VAR_1 + VAR_12];
                }
            }
            VAR_10 = VAR_9 - VAR_1;

            for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
                VAR_14[VAR_10 + VAR_12] *= VAR_7;


            for (; VAR_10 > 0; VAR_10 -= VAR_1) {
                for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
                    VAR_14[VAR_10 - VAR_1 + VAR_12] += VAR_6 * VAR_14[VAR_10 + VAR_12];
            }
        }
        VAR_11 += VAR_8;
    }
}
