
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (int,float) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, float *VAR_1, int VAR_2,
                            int VAR_3, int *VAR_4)
{
    float VAR_5[2];
    float VAR_6[2];
    float VAR_7 = 1.f;

    VAR_5[0] = -1;
    VAR_5[1] = -1;
    VAR_6[0] = 0;
    VAR_6[1] = 0;
    VAR_4[0] = 0;
    VAR_4[1] = 1;

    for (int VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
        VAR_7 += VAR_1[VAR_8] * VAR_1[VAR_8];

    for (int VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        if (VAR_0[VAR_9]>0) {
            float VAR_10;
            float VAR_11;

            VAR_11 = VAR_0[VAR_9];


            VAR_11 *= 1e-12f;
            VAR_10 = VAR_11 * VAR_11;
            if ((VAR_10 * VAR_6[1]) > (VAR_5[1] * VAR_7)) {
                if ((VAR_10 * VAR_6[0]) > (VAR_5[0] * VAR_7)) {
                    VAR_5[1] = VAR_5[0];
                    VAR_6[1] = VAR_6[0];
                    VAR_4[1] = VAR_4[0];
                    VAR_5[0] = VAR_10;
                    VAR_6[0] = VAR_7;
                    VAR_4[0] = VAR_9;
                } else {
                    VAR_5[1] = VAR_10;
                    VAR_6[1] = VAR_7;
                    VAR_4[1] = VAR_9;
                }
            }
        }
        VAR_7 += VAR_1[VAR_9+VAR_2]*VAR_1[VAR_9+VAR_2] - VAR_1[VAR_9] * VAR_1[VAR_9];
        VAR_7 = FUNC_0(1, VAR_7);
    }
}
