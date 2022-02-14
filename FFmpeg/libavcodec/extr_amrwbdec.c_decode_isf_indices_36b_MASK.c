
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;


 float** VAR_0 ;
 float** VAR_1 ;
 float** VAR_2 ;
 float** VAR_3 ;
 float** VAR_4 ;

__attribute__((used)) static void FUNC_0(uint16_t *VAR_5, float *VAR_6)
{
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < 9; VAR_7++)
        VAR_6[VAR_7] = VAR_0[VAR_5[0]][VAR_7] * (1.0f / (1 << 15));

    for (VAR_7 = 0; VAR_7 < 7; VAR_7++)
        VAR_6[VAR_7 + 9] = VAR_4[VAR_5[1]][VAR_7] * (1.0f / (1 << 15));

    for (VAR_7 = 0; VAR_7 < 5; VAR_7++)
        VAR_6[VAR_7] += VAR_1[VAR_5[2]][VAR_7] * (1.0f / (1 << 15));

    for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
        VAR_6[VAR_7 + 5] += VAR_2[VAR_5[3]][VAR_7] * (1.0f / (1 << 15));

    for (VAR_7 = 0; VAR_7 < 7; VAR_7++)
        VAR_6[VAR_7 + 9] += VAR_3[VAR_5[4]][VAR_7] * (1.0f / (1 << 15));
}
