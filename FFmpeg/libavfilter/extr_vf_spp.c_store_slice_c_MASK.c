
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, const int16_t *VAR_1,
                          int VAR_2, int VAR_3,
                          int VAR_4, int VAR_5, int VAR_6,
                          const uint8_t VAR_7[8][8])
{
    int VAR_8, VAR_9;
    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        const uint8_t *VAR_10 = VAR_7[VAR_8];
        for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += 8) {
            int VAR_11;
            do { VAR_11 = ((VAR_1[VAR_9 + VAR_8*VAR_3 + 0] << VAR_6) + VAR_10[0]) >> 6; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_0[VAR_9 + VAR_8*VAR_2 + 0] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_1[VAR_9 + VAR_8*VAR_3 + 1] << VAR_6) + VAR_10[1]) >> 6; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_0[VAR_9 + VAR_8*VAR_2 + 1] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_1[VAR_9 + VAR_8*VAR_3 + 2] << VAR_6) + VAR_10[2]) >> 6; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_0[VAR_9 + VAR_8*VAR_2 + 2] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_1[VAR_9 + VAR_8*VAR_3 + 3] << VAR_6) + VAR_10[3]) >> 6; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_0[VAR_9 + VAR_8*VAR_2 + 3] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_1[VAR_9 + VAR_8*VAR_3 + 4] << VAR_6) + VAR_10[4]) >> 6; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_0[VAR_9 + VAR_8*VAR_2 + 4] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_1[VAR_9 + VAR_8*VAR_3 + 5] << VAR_6) + VAR_10[5]) >> 6; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_0[VAR_9 + VAR_8*VAR_2 + 5] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_1[VAR_9 + VAR_8*VAR_3 + 6] << VAR_6) + VAR_10[6]) >> 6; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_0[VAR_9 + VAR_8*VAR_2 + 6] = VAR_11; } while (0);
            do { VAR_11 = ((VAR_1[VAR_9 + VAR_8*VAR_3 + 7] << VAR_6) + VAR_10[7]) >> 6; if (VAR_11 & 0x100) VAR_11 = ~(VAR_11 >> 31); VAR_0[VAR_9 + VAR_8*VAR_2 + 7] = VAR_11; } while (0);
        }
    }
}
