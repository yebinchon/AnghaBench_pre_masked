
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
 float** VAR_5 ;
 float** VAR_6 ;

__attribute__((used)) static void FUNC_0(uint16_t *VAR_7, float *VAR_8)
{
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < 9; VAR_9++)
        VAR_8[VAR_9] = VAR_0[VAR_7[0]][VAR_9] * (1.0f / (1 << 15));

    for (VAR_9 = 0; VAR_9 < 7; VAR_9++)
        VAR_8[VAR_9 + 9] = VAR_6[VAR_7[1]][VAR_9] * (1.0f / (1 << 15));

    for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
        VAR_8[VAR_9] += VAR_1[VAR_7[2]][VAR_9] * (1.0f / (1 << 15));

    for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
        VAR_8[VAR_9 + 3] += VAR_2[VAR_7[3]][VAR_9] * (1.0f / (1 << 15));

    for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
        VAR_8[VAR_9 + 6] += VAR_3[VAR_7[4]][VAR_9] * (1.0f / (1 << 15));

    for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
        VAR_8[VAR_9 + 9] += VAR_4[VAR_7[5]][VAR_9] * (1.0f / (1 << 15));

    for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
        VAR_8[VAR_9 + 12] += VAR_5[VAR_7[6]][VAR_9] * (1.0f / (1 << 15));
}
