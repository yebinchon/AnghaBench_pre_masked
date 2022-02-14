
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(uint16_t *VAR_1, int VAR_2, int VAR_3,
                   uint8_t *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    VAR_2 += 128;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7 += 2) {
            VAR_1[VAR_7 ] += VAR_2 * VAR_4[VAR_7 ];
            VAR_1[VAR_7+1] += VAR_2 * VAR_4[VAR_7+1];
        }
        VAR_1 += VAR_3;
        VAR_4 += VAR_0;
    }
}
