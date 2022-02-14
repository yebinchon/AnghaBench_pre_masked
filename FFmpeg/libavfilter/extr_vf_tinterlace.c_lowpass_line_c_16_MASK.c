
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1, const uint8_t *VAR_2,
                              ptrdiff_t VAR_3, ptrdiff_t VAR_4, int VAR_5)
{
    uint16_t *VAR_6 = (uint16_t *)VAR_0;
    const uint16_t *VAR_7 = (const uint16_t *)VAR_2;
    const uint16_t *VAR_8 = VAR_7 + VAR_3 / 2;
    const uint16_t *VAR_9 = VAR_7 + VAR_4 / 2;
    int VAR_10, VAR_11;
    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {



        VAR_11 = FUNC_0(VAR_7[VAR_10]) << 1;
        VAR_6[VAR_10] = FUNC_0((1 + VAR_11 + FUNC_0(VAR_8[VAR_10])
                             + FUNC_0(VAR_9[VAR_10])) >> 2);
    }
}
