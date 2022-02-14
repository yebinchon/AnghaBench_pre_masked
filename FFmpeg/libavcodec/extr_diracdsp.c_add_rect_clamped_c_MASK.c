
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, const uint16_t *VAR_1, int VAR_2,
                               const int16_t *VAR_3, int VAR_4,
                               int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7+=2) {
            VAR_0[VAR_7 ] = FUNC_0(((VAR_1[VAR_7 ]+32)>>6) + VAR_3[VAR_7 ]);
            VAR_0[VAR_7+1] = FUNC_0(((VAR_1[VAR_7+1]+32)>>6) + VAR_3[VAR_7+1]);
        }
        VAR_0 += VAR_2;
        VAR_1 += VAR_2;
        VAR_3 += VAR_4;
    }
}
