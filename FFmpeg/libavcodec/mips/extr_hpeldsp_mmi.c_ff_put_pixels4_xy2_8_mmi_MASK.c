
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;


 void* FUNC_0 (int const*) ;

void FUNC_1(uint8_t *VAR_0, const uint8_t *VAR_1,
    ptrdiff_t VAR_2, int VAR_3)
{

    int VAR_4;
    const uint32_t VAR_5 = FUNC_0(VAR_1);
    const uint32_t VAR_6 = FUNC_0(VAR_1 + 1);
    uint32_t VAR_7 = (VAR_5 & 0x03030303UL) +
                  (VAR_6 & 0x03030303UL) +
                       0x02020202UL;
    uint32_t VAR_8 = ((VAR_5 & 0xFCFCFCFCUL) >> 2) +
                  ((VAR_6 & 0xFCFCFCFCUL) >> 2);
    uint32_t VAR_9, VAR_10;

    VAR_1 += VAR_2;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 2) {
        uint32_t VAR_11 = FUNC_0(VAR_1);
        uint32_t VAR_12 = FUNC_0(VAR_1 + 1);
        VAR_9 = (VAR_11 & 0x03030303UL) +
             (VAR_12 & 0x03030303UL);
        VAR_10 = ((VAR_11 & 0xFCFCFCFCUL) >> 2) +
             ((VAR_12 & 0xFCFCFCFCUL) >> 2);
        *((uint32_t *) VAR_0) = VAR_8 + VAR_10 + (((VAR_7 + VAR_9) >> 2) & 0x0F0F0F0FUL);
        VAR_1 += VAR_2;
        VAR_0 += VAR_2;
        VAR_11 = FUNC_0(VAR_1);
        VAR_12 = FUNC_0(VAR_1 + 1);
        VAR_7 = (VAR_11 & 0x03030303UL) +
             (VAR_12 & 0x03030303UL) +
                  0x02020202UL;
        VAR_8 = ((VAR_11 & 0xFCFCFCFCUL) >> 2) +
             ((VAR_12 & 0xFCFCFCFCUL) >> 2);
        *((uint32_t *) VAR_0) = VAR_8 + VAR_10 + (((VAR_7 + VAR_9) >> 2) & 0x0F0F0F0FUL);
        VAR_1 += VAR_2;
        VAR_0 += VAR_2;
    }
}
