
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int ** VAR_0 ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_1, int16_t *VAR_2,
                          ptrdiff_t VAR_3, ptrdiff_t VAR_4,
                          ptrdiff_t VAR_5, ptrdiff_t VAR_6, ptrdiff_t VAR_7)
{
    int VAR_8, VAR_9;






    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        const uint8_t *VAR_10 = VAR_0[VAR_8];
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += 8) {
            int VAR_11;
            VAR_11 = (VAR_2[VAR_9 + 0] + (VAR_10[0] >> VAR_7)) >> (6 - VAR_7); VAR_2[VAR_9 + 0] = VAR_2[VAR_9 + 0 - 8 * VAR_4] = 0; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + 0] = VAR_11;;
            VAR_11 = (VAR_2[VAR_9 + 1] + (VAR_10[1] >> VAR_7)) >> (6 - VAR_7); VAR_2[VAR_9 + 1] = VAR_2[VAR_9 + 1 - 8 * VAR_4] = 0; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + 1] = VAR_11;;
            VAR_11 = (VAR_2[VAR_9 + 2] + (VAR_10[2] >> VAR_7)) >> (6 - VAR_7); VAR_2[VAR_9 + 2] = VAR_2[VAR_9 + 2 - 8 * VAR_4] = 0; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + 2] = VAR_11;;
            VAR_11 = (VAR_2[VAR_9 + 3] + (VAR_10[3] >> VAR_7)) >> (6 - VAR_7); VAR_2[VAR_9 + 3] = VAR_2[VAR_9 + 3 - 8 * VAR_4] = 0; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + 3] = VAR_11;;
            VAR_11 = (VAR_2[VAR_9 + 4] + (VAR_10[4] >> VAR_7)) >> (6 - VAR_7); VAR_2[VAR_9 + 4] = VAR_2[VAR_9 + 4 - 8 * VAR_4] = 0; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + 4] = VAR_11;;
            VAR_11 = (VAR_2[VAR_9 + 5] + (VAR_10[5] >> VAR_7)) >> (6 - VAR_7); VAR_2[VAR_9 + 5] = VAR_2[VAR_9 + 5 - 8 * VAR_4] = 0; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + 5] = VAR_11;;
            VAR_11 = (VAR_2[VAR_9 + 6] + (VAR_10[6] >> VAR_7)) >> (6 - VAR_7); VAR_2[VAR_9 + 6] = VAR_2[VAR_9 + 6 - 8 * VAR_4] = 0; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + 6] = VAR_11;;
            VAR_11 = (VAR_2[VAR_9 + 7] + (VAR_10[7] >> VAR_7)) >> (6 - VAR_7); VAR_2[VAR_9 + 7] = VAR_2[VAR_9 + 7 - 8 * VAR_4] = 0; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + 7] = VAR_11;;
        }
        VAR_2 += VAR_4;
        VAR_1 += VAR_3;
    }
}
