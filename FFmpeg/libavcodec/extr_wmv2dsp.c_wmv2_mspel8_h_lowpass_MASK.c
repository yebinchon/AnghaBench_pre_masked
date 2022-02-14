
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
        VAR_2[0] = VAR_7[(9 * (VAR_3[0] + VAR_3[1]) - (VAR_3[-1] + VAR_3[2]) + 8) >> 4];
        VAR_2[1] = VAR_7[(9 * (VAR_3[1] + VAR_3[2]) - (VAR_3[0] + VAR_3[3]) + 8) >> 4];
        VAR_2[2] = VAR_7[(9 * (VAR_3[2] + VAR_3[3]) - (VAR_3[1] + VAR_3[4]) + 8) >> 4];
        VAR_2[3] = VAR_7[(9 * (VAR_3[3] + VAR_3[4]) - (VAR_3[2] + VAR_3[5]) + 8) >> 4];
        VAR_2[4] = VAR_7[(9 * (VAR_3[4] + VAR_3[5]) - (VAR_3[3] + VAR_3[6]) + 8) >> 4];
        VAR_2[5] = VAR_7[(9 * (VAR_3[5] + VAR_3[6]) - (VAR_3[4] + VAR_3[7]) + 8) >> 4];
        VAR_2[6] = VAR_7[(9 * (VAR_3[6] + VAR_3[7]) - (VAR_3[5] + VAR_3[8]) + 8) >> 4];
        VAR_2[7] = VAR_7[(9 * (VAR_3[7] + VAR_3[8]) - (VAR_3[6] + VAR_3[9]) + 8) >> 4];
        VAR_2 += VAR_4;
        VAR_3 += VAR_5;
    }
}
