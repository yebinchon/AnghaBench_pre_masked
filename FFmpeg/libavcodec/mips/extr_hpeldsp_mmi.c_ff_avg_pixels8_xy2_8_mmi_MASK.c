
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;


 void* FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;

void FUNC_2(uint8_t *VAR_0, const uint8_t *VAR_1,
    ptrdiff_t VAR_2, int VAR_3)
{

    int VAR_4;

    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        int VAR_5;
        const uint32_t VAR_6 = FUNC_0(VAR_1);
        const uint32_t VAR_7 = FUNC_0(VAR_1 + 1);
        uint32_t VAR_8 = (VAR_6 & 0x03030303UL) +
                      (VAR_7 & 0x03030303UL) +
                           0x02020202UL;
        uint32_t VAR_9 = ((VAR_6 & 0xFCFCFCFCUL) >> 2) +
                      ((VAR_7 & 0xFCFCFCFCUL) >> 2);
        uint32_t VAR_10, VAR_11;

        VAR_1 += VAR_2;
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 2) {
            uint32_t VAR_12 = FUNC_0(VAR_1);
            uint32_t VAR_13 = FUNC_0(VAR_1 + 1);
            VAR_10 = (VAR_12 & 0x03030303UL) +
                 (VAR_13 & 0x03030303UL);
            VAR_11 = ((VAR_12 & 0xFCFCFCFCUL) >> 2) +
                 ((VAR_13 & 0xFCFCFCFCUL) >> 2);
            *((uint32_t *) VAR_0) = FUNC_1(*((uint32_t *) VAR_0), VAR_9 + VAR_11 + (((VAR_8 + VAR_10) >> 2) & 0x0F0F0F0FUL));
            VAR_1 += VAR_2;
            VAR_0 += VAR_2;
            VAR_12 = FUNC_0(VAR_1);
            VAR_13 = FUNC_0(VAR_1 + 1);
            VAR_8 = (VAR_12 & 0x03030303UL) +
                 (VAR_13 & 0x03030303UL) +
                      0x02020202UL;
            VAR_9 = ((VAR_12 & 0xFCFCFCFCUL) >> 2) +
                 ((VAR_13 & 0xFCFCFCFCUL) >> 2);
            *((uint32_t *) VAR_0) = FUNC_1(*((uint32_t *) VAR_0), VAR_9 + VAR_11 + (((VAR_8 + VAR_10) >> 2) & 0x0F0F0F0FUL));
            VAR_1 += VAR_2;
            VAR_0 += VAR_2;
        }
        VAR_1 += 4 - VAR_2 * (VAR_3 + 1);
        VAR_0 += 4 - VAR_2 * VAR_3;
    }
}
