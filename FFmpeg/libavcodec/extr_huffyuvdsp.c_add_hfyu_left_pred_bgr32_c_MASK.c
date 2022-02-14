
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_4, const uint8_t *VAR_5,
                                       intptr_t VAR_6, uint8_t *VAR_7)
{
    int VAR_8;
    uint8_t VAR_9 = VAR_7[VAR_3], VAR_10 = VAR_7[VAR_2], VAR_11 = VAR_7[VAR_1], VAR_12 = VAR_7[VAR_0];

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        VAR_11 += VAR_5[4 * VAR_8 + VAR_1];
        VAR_10 += VAR_5[4 * VAR_8 + VAR_2];
        VAR_9 += VAR_5[4 * VAR_8 + VAR_3];
        VAR_12 += VAR_5[4 * VAR_8 + VAR_0];

        VAR_4[4 * VAR_8 + VAR_1] = VAR_11;
        VAR_4[4 * VAR_8 + VAR_2] = VAR_10;
        VAR_4[4 * VAR_8 + VAR_3] = VAR_9;
        VAR_4[4 * VAR_8 + VAR_0] = VAR_12;
    }

    VAR_7[VAR_1] = VAR_11;
    VAR_7[VAR_2] = VAR_10;
    VAR_7[VAR_3] = VAR_9;
    VAR_7[VAR_0] = VAR_12;
}
