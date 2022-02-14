
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_1, uint32_t VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
    uint32_t VAR_5, VAR_6 = VAR_1 << (32 - VAR_2);

    for (int VAR_7 = 0; VAR_7 < 2; VAR_7++) {
        for (int VAR_8 = 0; VAR_8 < 43; VAR_8++) {
            VAR_5 = 4 * FUNC_0(VAR_8);
            if (VAR_2 >= VAR_5 && ((VAR_6 & (0xFFF00000u << (12 - VAR_5))) >> 20) == VAR_0[2 * VAR_8 + 1]) {
                if (VAR_0[2 * VAR_8] >> 8 == 0x80u) {
                    return;
                } else {
                    *VAR_3 = (*VAR_3 & 0xFFFFFFu) | (((12 + VAR_5 - VAR_2) | (0x40u<<VAR_7)) << 22);
                    if (VAR_7 == 0) {
                        *VAR_4 = VAR_0[2 * VAR_8];
                        VAR_2 -= VAR_5;
                        VAR_6 <<= VAR_5;
                    } else {
                        *VAR_4 |= (unsigned)VAR_0[2 * VAR_8] << 16;
                    }
                    break;
                }
            }
        }
    }
}
