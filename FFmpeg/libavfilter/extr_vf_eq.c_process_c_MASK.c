
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int contrast; double brightness; } ;
typedef TYPE_1__ EQParameters ;



__attribute__((used)) static void FUNC_0(EQParameters *VAR_0, uint8_t *VAR_1, int VAR_2,
                      const uint8_t *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;

    int VAR_10 = (int) (VAR_0->contrast * 256 * 16);
    int VAR_11 = ((int) (100.0 * VAR_0->brightness + 100.0) * 511) / 200 - 128 - VAR_10 / 32;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            VAR_9 = ((VAR_3[VAR_8 * VAR_4 + VAR_7] * VAR_10) >> 12) + VAR_11;

            if (VAR_9 & ~255)
                VAR_9 = (-VAR_9) >> 31;

            VAR_1[VAR_8 * VAR_2 + VAR_7] = VAR_9;
        }
    }
}
