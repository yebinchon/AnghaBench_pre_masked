
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(const int32_t *VAR_0, int32_t *VAR_1,
                            const int16_t *VAR_2)
{
    int VAR_3;

    VAR_1[0] = VAR_0[0];

    for (VAR_3 = 1; VAR_3 < 15; VAR_3++)
        VAR_1[VAR_3] = (VAR_0[VAR_3] * VAR_2[VAR_3] + 0x4000) >> 15;
}
