
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 int FUNC_0 (int) ;
 float* FUNC_1 (int,int) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float FUNC_4 (float) ;

__attribute__((used)) static float *FUNC_5(int VAR_1, float VAR_2, float VAR_3, float VAR_4,
                       float VAR_5, int VAR_6)
{
    int VAR_7, VAR_8 = VAR_1 - 1;
    float *VAR_9 = FUNC_1(VAR_1, sizeof(*VAR_9)), VAR_10 = 0;
    float VAR_11 = VAR_5 / FUNC_2(VAR_3), VAR_12 = 1.f / (.5f * VAR_8 + VAR_4);

    FUNC_0(VAR_2 >= 0 && VAR_2 <= 1);

    for (VAR_7 = 0; VAR_7 <= VAR_8 / 2; VAR_7++) {
        float VAR_13 = VAR_7 - .5f * VAR_8, VAR_14 = VAR_13 * VAR_0, VAR_15 = VAR_13 * VAR_12;
        VAR_9[VAR_7] = VAR_14 ? FUNC_3(VAR_2 * VAR_14) / VAR_14 : VAR_2;
        VAR_10 += VAR_9[VAR_7] *= FUNC_2(VAR_3 * FUNC_4(1.f - VAR_15 * VAR_15)) * VAR_11;
        if (VAR_8 - VAR_7 != VAR_7) {
            VAR_9[VAR_8 - VAR_7] = VAR_9[VAR_7];
            VAR_10 += VAR_9[VAR_7];
        }
    }

    for (VAR_7 = 0; VAR_6 && VAR_7 < VAR_1; VAR_7++)
        VAR_9[VAR_7] *= VAR_5 / VAR_10;

    return VAR_9;
}
