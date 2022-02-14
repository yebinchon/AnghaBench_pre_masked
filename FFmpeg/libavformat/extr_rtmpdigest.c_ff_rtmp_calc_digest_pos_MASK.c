
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



int FUNC_0(const uint8_t *VAR_0, int VAR_1, int VAR_2,
                            int VAR_3)
{
    int VAR_4, VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
        VAR_5 += VAR_0[VAR_4 + VAR_1];
    VAR_5 = VAR_5 % VAR_2 + VAR_3;

    return VAR_5;
}
