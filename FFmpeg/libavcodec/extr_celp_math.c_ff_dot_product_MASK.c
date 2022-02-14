
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (int const,int const) ;

int64_t FUNC_1(const int16_t *VAR_0, const int16_t *VAR_1, int VAR_2)
{
    int VAR_3;
    int64_t VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        VAR_4 += FUNC_0(VAR_0[VAR_3], VAR_1[VAR_3]);

    return VAR_4;
}
