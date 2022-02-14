
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 int ** VAR_0 ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_1, const uint16_t *VAR_2,
                          int VAR_3, int VAR_4,
                          int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;







    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        const uint8_t *VAR_10 = VAR_0[VAR_8&7];
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += 8) {
            int VAR_11;
            do { VAR_11 = ((VAR_2[VAR_9 + VAR_8 * VAR_4 + 0] << VAR_7) + VAR_10[0]) >> 8; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + VAR_8 * VAR_3 + 0] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_2[VAR_9 + VAR_8 * VAR_4 + 1] << VAR_7) + VAR_10[1]) >> 8; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + VAR_8 * VAR_3 + 1] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_2[VAR_9 + VAR_8 * VAR_4 + 2] << VAR_7) + VAR_10[2]) >> 8; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + VAR_8 * VAR_3 + 2] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_2[VAR_9 + VAR_8 * VAR_4 + 3] << VAR_7) + VAR_10[3]) >> 8; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + VAR_8 * VAR_3 + 3] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_2[VAR_9 + VAR_8 * VAR_4 + 4] << VAR_7) + VAR_10[4]) >> 8; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + VAR_8 * VAR_3 + 4] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_2[VAR_9 + VAR_8 * VAR_4 + 5] << VAR_7) + VAR_10[5]) >> 8; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + VAR_8 * VAR_3 + 5] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_2[VAR_9 + VAR_8 * VAR_4 + 6] << VAR_7) + VAR_10[6]) >> 8; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + VAR_8 * VAR_3 + 6] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_2[VAR_9 + VAR_8 * VAR_4 + 7] << VAR_7) + VAR_10[7]) >> 8; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_1[VAR_9 + VAR_8 * VAR_3 + 7] = VAR_11; } while (0);
        }
    }
}
