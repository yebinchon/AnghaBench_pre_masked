
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 float VAR_0 ;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_1, const int VAR_2, const int VAR_3, const int VAR_4, float *VAR_5, float *VAR_6)
{
    int16_t *VAR_7 = (int16_t *)VAR_6;
    float VAR_8;
    int VAR_9 = 0, VAR_10 = 0;
    int VAR_11, VAR_12;

    for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
        const uint8_t *VAR_13 = VAR_1 + VAR_11 * VAR_2 * 2;
        for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
            VAR_9 += VAR_13[VAR_12];
            VAR_10 += VAR_13[VAR_12] * VAR_13[VAR_12];
            VAR_7[VAR_12] = VAR_13[VAR_12];
        }
        VAR_7 += VAR_3;
    }
    VAR_8 = 1.0f / (float)(VAR_3 * VAR_4);
    VAR_5[0] = VAR_9 * VAR_8;
    VAR_5[1] = VAR_10 * VAR_8 - VAR_5[0] * VAR_5[0];
    VAR_5[3] = 0.0f;
    if (VAR_5[1] <= VAR_0)
        VAR_5[1] = VAR_5[2] = 0.0f;
    else {
        VAR_5[1] = FUNC_0(VAR_5[1]);
        VAR_5[2] = 1.0f / VAR_5[1];
    }
}
