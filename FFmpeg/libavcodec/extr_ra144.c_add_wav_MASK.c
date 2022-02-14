
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;
typedef unsigned int int16_t ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int** VAR_2 ;

__attribute__((used)) static void FUNC_0(int16_t *VAR_3, int VAR_4, int VAR_5, int *VAR_6,
                    const int16_t *VAR_7, const int8_t *VAR_8, const int8_t *VAR_9)
{
    int VAR_10;
    int VAR_11[3];

    VAR_11[0] = 0;
    for (VAR_10=!VAR_5; VAR_10<3; VAR_10++)
        VAR_11[VAR_10] = (VAR_2[VAR_4][VAR_10] * (unsigned)VAR_6[VAR_10]) >> VAR_1[VAR_4];

    if (VAR_11[0]) {
        for (VAR_10=0; VAR_10 < VAR_0; VAR_10++)
            VAR_3[VAR_10] = (int)((VAR_7[VAR_10]*(unsigned)VAR_11[0]) + VAR_8[VAR_10]*VAR_11[1] + VAR_9[VAR_10]*VAR_11[2]) >> 12;
    } else {
        for (VAR_10=0; VAR_10 < VAR_0; VAR_10++)
            VAR_3[VAR_10] = ( VAR_8[VAR_10]*VAR_11[1] + VAR_9[VAR_10]*VAR_11[2]) >> 12;
    }
}
