
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0, const int16_t *VAR_1,
                                 const int16_t *VAR_2, int VAR_3,
                                 int VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        VAR_0[VAR_5] = (VAR_1[VAR_5] + VAR_2[VAR_5]) >> VAR_4;
}
