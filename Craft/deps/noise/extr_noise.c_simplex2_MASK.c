
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float) ;

float FUNC_1(
    float VAR_0, float VAR_1,
    int VAR_2, float VAR_3, float VAR_4)
{
    float VAR_5 = 1.0f;
    float VAR_6 = 1.0f;
    float VAR_7 = 1.0f;
    float VAR_8 = FUNC_0(VAR_0, VAR_1);
    int VAR_9;
    for (VAR_9 = 1; VAR_9 < VAR_2; VAR_9++) {
        VAR_5 *= VAR_4;
        VAR_6 *= VAR_3;
        VAR_7 += VAR_6;
        VAR_8 += FUNC_0(VAR_0 * VAR_5, VAR_1 * VAR_5) * VAR_6;
    }
    return (1 + VAR_8 / VAR_7) / 2;
}
