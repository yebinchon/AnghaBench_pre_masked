
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1, const uint8_t *VAR_2,
                                      ptrdiff_t VAR_3, ptrdiff_t VAR_4, int VAR_5)
{
    uint16_t *VAR_6 = (uint16_t *)VAR_0;
    const uint16_t *VAR_7 = (const uint16_t *)VAR_2;
    const uint16_t *VAR_8 = VAR_7 + VAR_3 / 2;
    const uint16_t *VAR_9 = VAR_7 + VAR_4 / 2;
    const uint16_t *VAR_10 = VAR_7 + VAR_3;
    const uint16_t *VAR_11 = VAR_7 + VAR_4;
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {



        VAR_14 = FUNC_1(VAR_7[VAR_12]);
        VAR_15 = VAR_14 << 1;
        VAR_16 = FUNC_1(VAR_8[VAR_12]) + FUNC_1(VAR_9[VAR_12]);
        VAR_13 = FUNC_0((4 + ((VAR_14 + VAR_15 + VAR_16) << 1)
                         - FUNC_1(VAR_10[VAR_12])
                         - FUNC_1(VAR_11[VAR_12])) >> 3, 0, VAR_5);



        if (VAR_16 > VAR_15) {
            if (VAR_13 < VAR_14)
                VAR_6[VAR_12] = FUNC_1(VAR_14);
            else
                VAR_6[VAR_12] = FUNC_1(VAR_13);
        } else if (VAR_13 > VAR_14) {
            VAR_6[VAR_12] = FUNC_1(VAR_14);
        } else
            VAR_6[VAR_12] = FUNC_1(VAR_13);
    }
}
