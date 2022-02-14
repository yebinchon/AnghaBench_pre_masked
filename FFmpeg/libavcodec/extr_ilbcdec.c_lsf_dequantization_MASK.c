
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static void FUNC_0(int16_t *VAR_5, int16_t *VAR_6, int16_t VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < VAR_3[VAR_8]; VAR_9++) {
            VAR_5[VAR_10 + VAR_9] = VAR_2[VAR_11 + VAR_6[VAR_8] * VAR_3[VAR_8] + VAR_9];
        }

        VAR_10 += VAR_3[VAR_8];
        VAR_11 += VAR_4[VAR_8] * VAR_3[VAR_8];
    }

    if (VAR_7 > 1) {
        VAR_10 = 0;
        VAR_11 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
            for (VAR_9 = 0; VAR_9 < VAR_3[VAR_8]; VAR_9++) {
                VAR_5[VAR_0 + VAR_10 + VAR_9] = VAR_2[VAR_11 +
                    VAR_6[VAR_1 + VAR_8] * VAR_3[VAR_8] + VAR_9];
            }

            VAR_10 += VAR_3[VAR_8];
            VAR_11 += VAR_4[VAR_8] * VAR_3[VAR_8];
        }
    }
}
