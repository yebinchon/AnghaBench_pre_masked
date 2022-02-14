
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int VAR_1, const uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    int16_t *VAR_8 = (int16_t *)VAR_2;
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6+=4) {
            VAR_0[VAR_6 ] = FUNC_0(VAR_8[VAR_6 ] + 128);
            VAR_0[VAR_6+1] = FUNC_0(VAR_8[VAR_6+1] + 128);
            VAR_0[VAR_6+2] = FUNC_0(VAR_8[VAR_6+2] + 128);
            VAR_0[VAR_6+3] = FUNC_0(VAR_8[VAR_6+3] + 128);
        }
        VAR_0 += VAR_1;
        VAR_8 += VAR_3 >> 1;
    }
}
