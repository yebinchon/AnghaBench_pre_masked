
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;
typedef int int16_t ;



__attribute__((used)) static int FUNC_0(const int8_t *VAR_0, const int16_t *VAR_1,
                               intptr_t VAR_2)
{
    int VAR_3 = 0, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_3 += (VAR_0[VAR_4] - VAR_1[VAR_4]) * (VAR_0[VAR_4] - VAR_1[VAR_4]);
    return VAR_3;
}
