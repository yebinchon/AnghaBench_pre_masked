
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float,float) ;

float FUNC_1(
    float VAR_0, float VAR_1, float VAR_2,
    int VAR_3, float VAR_4, float VAR_5)
{
    float VAR_6 = 1.0f;
    float VAR_7 = 1.0f;
    float VAR_8 = 1.0f;
    float VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2);
    int VAR_10;
    for (VAR_10 = 1; VAR_10 < VAR_3; ++VAR_10) {
        VAR_6 *= VAR_5;
        VAR_7 *= VAR_4;
        VAR_8 += VAR_7;
        VAR_9 += FUNC_0(VAR_0 * VAR_6, VAR_1 * VAR_6, VAR_2 * VAR_6) * VAR_7;
    }
    return (1 + VAR_9 / VAR_8) / 2;
}
