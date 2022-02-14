
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef int NNEDIContext ;


 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(NNEDIContext *VAR_0, const float *VAR_1, const float *VAR_2, uint8_t *VAR_3)
{
    int16_t *VAR_4 = (int16_t *)VAR_1;
    int16_t *VAR_5 = (int16_t *)VAR_2;
    float *VAR_6 = (float *)&VAR_5[4 * 64];
    float VAR_7[8];
    int VAR_8, VAR_9, VAR_10;

    for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
        int VAR_11 = 0;
        float VAR_12;

        for (VAR_10 = 0; VAR_10 < 64; VAR_10++)
            VAR_11 += VAR_4[VAR_10] * VAR_5[(VAR_9 << 3) + ((VAR_10 >> 3) << 5) + (VAR_10 & 7)];
        VAR_12 = VAR_11 * VAR_6[VAR_9] + VAR_6[4 + VAR_9];
        VAR_7[VAR_9] = VAR_12 / (1.0f + FUNC_0(VAR_12));
    }

    for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
        float VAR_13 = 0.0f;

        for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
            VAR_13 += VAR_7[VAR_10] * VAR_6[8 + VAR_9 + (VAR_10 << 2)];
        VAR_7[4 + VAR_9] = VAR_13 + VAR_6[8 + 16 + VAR_9];
    }

    VAR_8 = 0;
    for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
        if (VAR_7[4 + VAR_9] > 0.0f)
            VAR_8 |= (0x1 << (VAR_9 << 3));
    }

    ((int *)VAR_3)[0] = VAR_8;
}
