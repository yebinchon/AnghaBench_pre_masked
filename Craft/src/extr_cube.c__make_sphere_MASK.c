
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (float) ;
 int FUNC_1 (float*,float*,float*) ;

int FUNC_2(
    float *VAR_1, float VAR_2, int VAR_3,
    float *VAR_4, float *VAR_5, float *VAR_6,
    float *VAR_7, float *VAR_8, float *VAR_9)
{
    if (VAR_3 == 0) {
        float *VAR_10 = VAR_1;
        *(VAR_10++) = VAR_4[0] * VAR_2; *(VAR_10++) = VAR_4[1] * VAR_2; *(VAR_10++) = VAR_4[2] * VAR_2;
        *(VAR_10++) = VAR_4[0]; *(VAR_10++) = VAR_4[1]; *(VAR_10++) = VAR_4[2];
        *(VAR_10++) = VAR_7[0]; *(VAR_10++) = VAR_7[1];
        *(VAR_10++) = VAR_5[0] * VAR_2; *(VAR_10++) = VAR_5[1] * VAR_2; *(VAR_10++) = VAR_5[2] * VAR_2;
        *(VAR_10++) = VAR_5[0]; *(VAR_10++) = VAR_5[1]; *(VAR_10++) = VAR_5[2];
        *(VAR_10++) = VAR_8[0]; *(VAR_10++) = VAR_8[1];
        *(VAR_10++) = VAR_6[0] * VAR_2; *(VAR_10++) = VAR_6[1] * VAR_2; *(VAR_10++) = VAR_6[2] * VAR_2;
        *(VAR_10++) = VAR_6[0]; *(VAR_10++) = VAR_6[1]; *(VAR_10++) = VAR_6[2];
        *(VAR_10++) = VAR_9[0]; *(VAR_10++) = VAR_9[1];
        return 1;
    }
    else {
        float VAR_11[3], VAR_12[3], VAR_13[3];
        for (int VAR_14 = 0; VAR_14 < 3; VAR_14++) {
            VAR_11[VAR_14] = (VAR_4[VAR_14] + VAR_5[VAR_14]) / 2;
            VAR_12[VAR_14] = (VAR_4[VAR_14] + VAR_6[VAR_14]) / 2;
            VAR_13[VAR_14] = (VAR_5[VAR_14] + VAR_6[VAR_14]) / 2;
        }
        FUNC_1(VAR_11 + 0, VAR_11 + 1, VAR_11 + 2);
        FUNC_1(VAR_12 + 0, VAR_12 + 1, VAR_12 + 2);
        FUNC_1(VAR_13 + 0, VAR_13 + 1, VAR_13 + 2);
        float VAR_15[2], VAR_16[2], VAR_17[2];
        VAR_15[0] = 0; VAR_15[1] = 1 - FUNC_0(VAR_11[1]) / VAR_0;
        VAR_16[0] = 0; VAR_16[1] = 1 - FUNC_0(VAR_12[1]) / VAR_0;
        VAR_17[0] = 0; VAR_17[1] = 1 - FUNC_0(VAR_13[1]) / VAR_0;
        int VAR_18 = 0;
        int VAR_19;
        VAR_19 = FUNC_2(VAR_1, VAR_2, VAR_3 - 1, VAR_4, VAR_11, VAR_12, VAR_7, VAR_15, VAR_16);
        VAR_18 += VAR_19; VAR_1 += VAR_19 * 24;
        VAR_19 = FUNC_2(VAR_1, VAR_2, VAR_3 - 1, VAR_5, VAR_13, VAR_11, VAR_8, VAR_17, VAR_15);
        VAR_18 += VAR_19; VAR_1 += VAR_19 * 24;
        VAR_19 = FUNC_2(VAR_1, VAR_2, VAR_3 - 1, VAR_6, VAR_12, VAR_13, VAR_9, VAR_16, VAR_17);
        VAR_18 += VAR_19; VAR_1 += VAR_19 * 24;
        VAR_19 = FUNC_2(VAR_1, VAR_2, VAR_3 - 1, VAR_11, VAR_13, VAR_12, VAR_15, VAR_17, VAR_16);
        VAR_18 += VAR_19; VAR_1 += VAR_19 * 24;
        return VAR_18;
    }
}
