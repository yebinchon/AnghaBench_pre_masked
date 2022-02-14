
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int NNEDIContext ;



__attribute__((used)) static void FUNC_0(NNEDIContext *VAR_0, const float *VAR_1, const float *VAR_2, float *VAR_3, const int VAR_4, const int VAR_5, const float *VAR_6)
{
    const int16_t *VAR_7 = (int16_t *)VAR_1;
    const int16_t *VAR_8 = (int16_t *)VAR_2;
    const float *VAR_9 = (float *)&VAR_8[VAR_4 * VAR_5];
    int VAR_10, VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        int VAR_12 = 0, VAR_13 = ((VAR_10 >> 2) << 3) + (VAR_10 & 3);
        for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
            VAR_12 += VAR_7[VAR_11] * VAR_8[VAR_10 * VAR_5 + VAR_11];

        VAR_3[VAR_10] = VAR_12 * VAR_9[VAR_13] * VAR_6[0] + VAR_9[VAR_13 + 4];
    }
}
