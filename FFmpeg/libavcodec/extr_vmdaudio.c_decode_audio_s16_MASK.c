
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_1, const uint8_t *VAR_2, int VAR_3,
                             int VAR_4)
{
    int VAR_5;
    const uint8_t *VAR_6 = VAR_2 + VAR_3;
    int VAR_7[2];
    int VAR_8 = VAR_4 - 1;


    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_7[VAR_5] = (int16_t)FUNC_0(VAR_2);
        VAR_2 += 2;
        *VAR_1++ = VAR_7[VAR_5];
    }


    VAR_5 = 0;
    while (VAR_2 < VAR_6) {
        uint8_t VAR_9 = *VAR_2++;
        if (VAR_9 & 0x80)
            VAR_7[VAR_5] -= VAR_0[VAR_9 & 0x7F];
        else
            VAR_7[VAR_5] += VAR_0[VAR_9];
        VAR_7[VAR_5] = FUNC_1(VAR_7[VAR_5]);
        *VAR_1++ = VAR_7[VAR_5];
        VAR_5 ^= VAR_8;
    }
}
