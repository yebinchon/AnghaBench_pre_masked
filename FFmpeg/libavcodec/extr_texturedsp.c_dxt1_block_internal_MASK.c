
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int*,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                       const uint8_t *VAR_2, uint8_t VAR_3)
{
    int VAR_4, VAR_5;
    uint32_t VAR_6[4];
    uint16_t VAR_7 = FUNC_0(VAR_2 + 0);
    uint16_t VAR_8 = FUNC_0(VAR_2 + 2);
    uint32_t VAR_9 = FUNC_1(VAR_2 + 4);

    FUNC_3(VAR_6, VAR_7, VAR_8, 0, VAR_3);

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
            uint32_t VAR_10 = VAR_6[VAR_9 & 3];
            VAR_9 >>= 2;
            FUNC_2(VAR_0 + VAR_4 * 4, VAR_10);
        }
        VAR_0 += VAR_1;
    }
}
