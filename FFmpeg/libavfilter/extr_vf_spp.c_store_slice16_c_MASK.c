
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint16_t *VAR_0, const int16_t *VAR_1,
                            int VAR_2, int VAR_3,
                            int VAR_4, int VAR_5, int VAR_6,
                            const uint8_t VAR_7[8][8], int VAR_8)
{
    int VAR_9, VAR_10;
    unsigned int VAR_11 = -1<<VAR_8;
    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        const uint8_t *VAR_12 = VAR_7[VAR_9];
        for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10 += 8) {
            int VAR_13;
            do { VAR_13 = ((VAR_1[VAR_10 + VAR_9*VAR_3 + 0] << VAR_6) + (VAR_12[0]>>1)) >> 5; if (VAR_13 & VAR_11 ) VAR_13 = ~(VAR_13 >> 31); VAR_0[VAR_10 + VAR_9*VAR_2 + 0] = VAR_13; } while (0);
            do { VAR_13 = ((VAR_1[VAR_10 + VAR_9*VAR_3 + 1] << VAR_6) + (VAR_12[1]>>1)) >> 5; if (VAR_13 & VAR_11 ) VAR_13 = ~(VAR_13 >> 31); VAR_0[VAR_10 + VAR_9*VAR_2 + 1] = VAR_13; } while (0);
            do { VAR_13 = ((VAR_1[VAR_10 + VAR_9*VAR_3 + 2] << VAR_6) + (VAR_12[2]>>1)) >> 5; if (VAR_13 & VAR_11 ) VAR_13 = ~(VAR_13 >> 31); VAR_0[VAR_10 + VAR_9*VAR_2 + 2] = VAR_13; } while (0);
            do { VAR_13 = ((VAR_1[VAR_10 + VAR_9*VAR_3 + 3] << VAR_6) + (VAR_12[3]>>1)) >> 5; if (VAR_13 & VAR_11 ) VAR_13 = ~(VAR_13 >> 31); VAR_0[VAR_10 + VAR_9*VAR_2 + 3] = VAR_13; } while (0);
            do { VAR_13 = ((VAR_1[VAR_10 + VAR_9*VAR_3 + 4] << VAR_6) + (VAR_12[4]>>1)) >> 5; if (VAR_13 & VAR_11 ) VAR_13 = ~(VAR_13 >> 31); VAR_0[VAR_10 + VAR_9*VAR_2 + 4] = VAR_13; } while (0);
            do { VAR_13 = ((VAR_1[VAR_10 + VAR_9*VAR_3 + 5] << VAR_6) + (VAR_12[5]>>1)) >> 5; if (VAR_13 & VAR_11 ) VAR_13 = ~(VAR_13 >> 31); VAR_0[VAR_10 + VAR_9*VAR_2 + 5] = VAR_13; } while (0);
            do { VAR_13 = ((VAR_1[VAR_10 + VAR_9*VAR_3 + 6] << VAR_6) + (VAR_12[6]>>1)) >> 5; if (VAR_13 & VAR_11 ) VAR_13 = ~(VAR_13 >> 31); VAR_0[VAR_10 + VAR_9*VAR_2 + 6] = VAR_13; } while (0);
            do { VAR_13 = ((VAR_1[VAR_10 + VAR_9*VAR_3 + 7] << VAR_6) + (VAR_12[7]>>1)) >> 5; if (VAR_13 & VAR_11 ) VAR_13 = ~(VAR_13 >> 31); VAR_0[VAR_10 + VAR_9*VAR_2 + 7] = VAR_13; } while (0);
        }
    }
}
