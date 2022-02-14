
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0, int16_t *VAR_1, int VAR_2,
                           const uint8_t VAR_3[2], int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
        for (VAR_6 = 0; VAR_6 < VAR_3[VAR_5 >= VAR_4]; VAR_6++)
            VAR_0[VAR_7++] = VAR_1[VAR_6 * VAR_2 + VAR_5];
}
