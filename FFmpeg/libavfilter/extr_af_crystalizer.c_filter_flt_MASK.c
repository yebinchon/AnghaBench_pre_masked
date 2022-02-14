
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,int,int) ;

__attribute__((used)) static void FUNC_1(void **VAR_0, void **VAR_1, const void **VAR_2,
                       int VAR_3, int VAR_4,
                       float VAR_5, int VAR_6)
{
    const float *VAR_7 = VAR_2[0];
    float *VAR_8 = VAR_0[0];
    float *VAR_9 = VAR_1[0];
    int VAR_10, VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
        for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
            float VAR_12 = VAR_7[VAR_11];

            VAR_8[VAR_11] = VAR_12 + (VAR_12 - VAR_9[VAR_11]) * VAR_5;
            VAR_9[VAR_11] = VAR_12;
            if (VAR_6) {
                VAR_8[VAR_11] = FUNC_0(VAR_8[VAR_11], -1, 1);
            }
        }

        VAR_8 += VAR_11;
        VAR_7 += VAR_11;
    }
}
