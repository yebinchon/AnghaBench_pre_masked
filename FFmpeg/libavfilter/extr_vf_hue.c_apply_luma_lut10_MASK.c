
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_3__ {size_t* lut_l16; } ;
typedef TYPE_1__ HueContext ;



__attribute__((used)) static void FUNC_0(HueContext *VAR_0,
                             uint16_t *VAR_1, const int VAR_2,
                             uint16_t *VAR_3, const int VAR_4,
                             int VAR_5, int VAR_6)
{
    int VAR_7;

    while (VAR_6--) {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
            VAR_1[VAR_7] = VAR_0->lut_l16[VAR_3[VAR_7]];

        VAR_3 += VAR_4;
        VAR_1 += VAR_2;
    }
}
