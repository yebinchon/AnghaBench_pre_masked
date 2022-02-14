
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(int16_t *VAR_3, int16_t *VAR_4,
                            int VAR_5)
{
    int VAR_6 = VAR_0 - VAR_1 / 2 - VAR_5;
    int VAR_7;

    VAR_3[0] = VAR_4[VAR_6];
    VAR_3[1] = VAR_4[VAR_6 + 1];

    VAR_6 += 2;
    for (VAR_7 = 2; VAR_7 < VAR_2 + VAR_1 - 1; VAR_7++)
        VAR_3[VAR_7] = VAR_4[VAR_6 + (VAR_7 - 2) % VAR_5];
}
