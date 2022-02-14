
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const,int ,int) ;

__attribute__((used)) static float FUNC_1(float VAR_0, float VAR_1,
                           float VAR_2, float VAR_3, float VAR_4)
{
    const float VAR_5 = 4.f, VAR_6 = 0.333f, VAR_7 = 0.7f;

    VAR_2 *= FUNC_0((VAR_6 - VAR_1) * VAR_5 + 0.5f, 0, 1) * VAR_7;
    VAR_3 *= FUNC_0((VAR_1 - VAR_6) * VAR_5 + 0.5f, 0, 1) * FUNC_0((1.0 - VAR_1 - VAR_6) * VAR_5 + 0.5f, 0, 1) * VAR_7;
    VAR_4 *= FUNC_0((VAR_1 + VAR_6 - 1) * VAR_5 + 0.5f, 0, 1) * VAR_7;

    VAR_0 += VAR_2;
    VAR_0 += VAR_3;
    VAR_0 += VAR_4;

    return FUNC_0(VAR_0, 0, 1);
}
