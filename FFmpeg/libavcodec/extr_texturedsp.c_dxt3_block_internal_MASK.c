
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;


 void* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int,int,int,int ) ;

__attribute__((used)) static inline void FUNC_4(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                       const uint8_t *VAR_2)
{
    int VAR_3, VAR_4;
    uint32_t VAR_5[4];
    uint16_t VAR_6 = FUNC_0(VAR_2 + 8);
    uint16_t VAR_7 = FUNC_0(VAR_2 + 10);
    uint32_t VAR_8 = FUNC_1(VAR_2 + 12);

    FUNC_3(VAR_5, VAR_6, VAR_7, 1, 0);

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        const uint16_t VAR_9 = FUNC_0(VAR_2 + 2 * VAR_4);
        uint8_t VAR_10[4];

        VAR_10[0] = ((VAR_9 >> 0) & 0x0F) * 17;
        VAR_10[1] = ((VAR_9 >> 4) & 0x0F) * 17;
        VAR_10[2] = ((VAR_9 >> 8) & 0x0F) * 17;
        VAR_10[3] = ((VAR_9 >> 12) & 0x0F) * 17;

        for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
            uint8_t VAR_11 = VAR_10[VAR_3];
            uint32_t VAR_12 = VAR_5[VAR_8 & 3] | ((unsigned)VAR_11 << 24);
            VAR_8 >>= 2;

            FUNC_2(VAR_0 + VAR_3 * 4, VAR_12);
        }
        VAR_0 += VAR_1;
    }
}
