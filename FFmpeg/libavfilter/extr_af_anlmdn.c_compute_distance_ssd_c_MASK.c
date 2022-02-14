
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 scalar_t__ FUNC_0 (float const) ;

__attribute__((used)) static float FUNC_1(const float *VAR_0, const float *VAR_1, ptrdiff_t VAR_2)
{
    float VAR_3 = 0.;

    for (int VAR_4 = -VAR_2; VAR_4 <= VAR_2; VAR_4++)
        VAR_3 += FUNC_0(VAR_0[VAR_4] - VAR_1[VAR_4]);

    return VAR_3;
}
