
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {size_t* lut; int lut_clean; } ;
typedef TYPE_1__ EQParameters ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(EQParameters *VAR_0, uint8_t *VAR_1, int VAR_2,
                      const uint8_t *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;

    if (!VAR_0->lut_clean)
        FUNC_0(VAR_0);

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            VAR_1[VAR_8 * VAR_2 + VAR_7] = VAR_0->lut[VAR_3[VAR_8 * VAR_4 + VAR_7]];
        }
    }
}
