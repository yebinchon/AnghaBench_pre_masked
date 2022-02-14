
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__*,int const*) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void FUNC_3(uint16_t *VAR_0, ptrdiff_t VAR_1,
                         int16_t *VAR_2, const uint8_t *VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
        FUNC_1(VAR_2 + VAR_4, VAR_3 + VAR_4);
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
        FUNC_2(VAR_2 + VAR_4 * 8);

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
            int VAR_6 = FUNC_0(VAR_2[VAR_5 + VAR_4 * 8] + 0x800, 12);
            VAR_0[VAR_5] = (VAR_6 << 4) | (VAR_6 >> 8);
        }
        VAR_0 += VAR_1 >> 1;
    }
}
