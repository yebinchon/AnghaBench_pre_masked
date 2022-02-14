
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 float FUNC_0 (float const) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const float *VAR_1,
                            ptrdiff_t VAR_2, ptrdiff_t VAR_3,
                            ptrdiff_t VAR_4, ptrdiff_t VAR_5)
{
    int VAR_6 = 0;

    for (int VAR_7 = VAR_5; VAR_7 < VAR_5 + VAR_2; VAR_7++, VAR_6++)
        VAR_0[VAR_6] += -FUNC_0(VAR_1[VAR_4 - VAR_3 - 1] - VAR_1[VAR_7 - VAR_3 - 1]) + FUNC_0(VAR_1[VAR_4 + VAR_3] - VAR_1[VAR_7 + VAR_3]);
}
