
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_4, const uint8_t *VAR_5, const uint8_t *VAR_6, const uint8_t *VAR_7, int VAR_8,
                       uint32_t *VAR_9)
{
    int16_t *VAR_10 = (int16_t *)VAR_4;
    int32_t VAR_11 = VAR_9[VAR_3], VAR_12 = VAR_9[VAR_1], VAR_13 = VAR_9[VAR_0];
    int VAR_14;
    for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
        int VAR_15 = VAR_5[VAR_14 * 3 + 0];
        int VAR_16 = VAR_5[VAR_14 * 3 + 1];
        int VAR_17 = VAR_5[VAR_14 * 3 + 2];

        VAR_10[VAR_14] = ((VAR_11*VAR_15 + VAR_12*VAR_16 + VAR_13*VAR_17 + (32<<(VAR_2-1)) + (1<<(VAR_2-7)))>>(VAR_2-6));
    }
}
