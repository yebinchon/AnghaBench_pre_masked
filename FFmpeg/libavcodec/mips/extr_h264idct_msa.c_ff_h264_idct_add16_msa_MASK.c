
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int pixel ;
typedef int int32_t ;
typedef int int16_t ;
typedef scalar_t__ dctcoef ;


 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 (int*,int *,int) ;
 size_t* VAR_0 ;

void FUNC_2(uint8_t *VAR_1,
                            const int32_t *VAR_2,
                            int16_t *VAR_3, int32_t VAR_4,
                            const uint8_t VAR_5[15 * 8])
{
    int32_t VAR_6;

    for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
        int32_t VAR_7 = VAR_5[VAR_0[VAR_6]];

        if (VAR_7) {
            if (VAR_7 == 1 && ((dctcoef *) VAR_3)[VAR_6 * 16])
                FUNC_0(VAR_1 + VAR_2[VAR_6],
                                              VAR_3 + VAR_6 * 16 * sizeof(pixel),
                                              VAR_4);
            else
                FUNC_1(VAR_1 + VAR_2[VAR_6],
                                     VAR_3 + VAR_6 * 16 * sizeof(pixel),
                                     VAR_4);
        }
    }
}
