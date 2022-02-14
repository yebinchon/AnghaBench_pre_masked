
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const) ;
 float VAR_0 ;

__attribute__((used)) static void FUNC_1(const float *VAR_1, const int VAR_2, float *VAR_3)
{
    float VAR_4 = 0.0f, VAR_5 = 0.0f;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        VAR_4 += VAR_1[VAR_6] * (VAR_1[VAR_2 + VAR_6] / (1.0f + FUNC_0(VAR_1[VAR_2 + VAR_6])));
        VAR_5 += VAR_1[VAR_6];
    }
    if (VAR_5 > VAR_0)
        VAR_3[3] += ((5.0f * VAR_4) / VAR_5) * VAR_3[1] + VAR_3[0];
    else
        VAR_3[3] += VAR_3[0];
}
