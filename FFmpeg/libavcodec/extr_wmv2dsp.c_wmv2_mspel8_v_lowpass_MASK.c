
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_2, const uint8_t *VAR_3,
                                  int VAR_4, int VAR_5, int VAR_6)
{
    const uint8_t *VAR_7 = VAR_1 + VAR_0;
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        const int VAR_9 = VAR_3[-VAR_5];
        const int VAR_10 = VAR_3[0];
        const int VAR_11 = VAR_3[VAR_5];
        const int VAR_12 = VAR_3[2 * VAR_5];
        const int VAR_13 = VAR_3[3 * VAR_5];
        const int VAR_14 = VAR_3[4 * VAR_5];
        const int VAR_15 = VAR_3[5 * VAR_5];
        const int VAR_16 = VAR_3[6 * VAR_5];
        const int VAR_17 = VAR_3[7 * VAR_5];
        const int VAR_18 = VAR_3[8 * VAR_5];
        const int VAR_19 = VAR_3[9 * VAR_5];
        VAR_2[0 * VAR_4] = VAR_7[(9 * (VAR_10 + VAR_11) - (VAR_9 + VAR_12) + 8) >> 4];
        VAR_2[1 * VAR_4] = VAR_7[(9 * (VAR_11 + VAR_12) - (VAR_10 + VAR_13) + 8) >> 4];
        VAR_2[2 * VAR_4] = VAR_7[(9 * (VAR_12 + VAR_13) - (VAR_11 + VAR_14) + 8) >> 4];
        VAR_2[3 * VAR_4] = VAR_7[(9 * (VAR_13 + VAR_14) - (VAR_12 + VAR_15) + 8) >> 4];
        VAR_2[4 * VAR_4] = VAR_7[(9 * (VAR_14 + VAR_15) - (VAR_13 + VAR_16) + 8) >> 4];
        VAR_2[5 * VAR_4] = VAR_7[(9 * (VAR_15 + VAR_16) - (VAR_14 + VAR_17) + 8) >> 4];
        VAR_2[6 * VAR_4] = VAR_7[(9 * (VAR_16 + VAR_17) - (VAR_15 + VAR_18) + 8) >> 4];
        VAR_2[7 * VAR_4] = VAR_7[(9 * (VAR_17 + VAR_18) - (VAR_16 + VAR_19) + 8) >> 4];
        VAR_3++;
        VAR_2++;
    }
}
