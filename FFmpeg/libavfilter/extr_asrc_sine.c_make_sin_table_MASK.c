
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(int16_t *VAR_3)
{
    unsigned VAR_4 = 1 << (VAR_2 - 2);
    unsigned VAR_5 = VAR_0 << VAR_1;
    uint64_t VAR_6 = (uint64_t)(VAR_5 * VAR_5) << 32;
    unsigned VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;



    VAR_3[0] = 0;
    VAR_3[VAR_4] = VAR_5;
    for (VAR_7 = VAR_4; VAR_7 > 1; VAR_7 /= 2) {


        VAR_11 = 0x10000;
        for (VAR_8 = 0; VAR_8 < VAR_4 / 2; VAR_8 += VAR_7) {
            VAR_10 = VAR_3[VAR_8] + VAR_3[VAR_8 + VAR_7];
            VAR_9 = VAR_3[VAR_4 - VAR_8] + VAR_3[VAR_4 - VAR_8 - VAR_7];
            VAR_13 = VAR_10 * VAR_10 + VAR_9 * VAR_9;

            while (1) {
                VAR_12 = (VAR_11 + VAR_6 / ((uint64_t)VAR_11 * VAR_13) + 1) >> 1;
                if (VAR_11 == VAR_12)
                    break;
                VAR_11 = VAR_12;
            }
            VAR_3[VAR_8 + VAR_7 / 2] = (VAR_11 * VAR_10 + 0x7FFF) >> 16;
            VAR_3[VAR_4 - VAR_8 - VAR_7 / 2] = (VAR_11 * VAR_9 + 0x8000) >> 16;
        }
    }

    for (VAR_8 = 0; VAR_8 <= VAR_4; VAR_8++)
        VAR_3[VAR_8] = (VAR_3[VAR_8] + (1 << (VAR_1 - 1))) >> VAR_1;

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
        VAR_3[VAR_4 * 2 - VAR_8] = VAR_3[VAR_8];
    for (VAR_8 = 0; VAR_8 < 2 * VAR_4; VAR_8++)
        VAR_3[VAR_8 + 2 * VAR_4] = -VAR_3[VAR_8];
}
