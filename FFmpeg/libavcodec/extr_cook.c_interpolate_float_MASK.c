
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gain_size_factor; float* gain_table; } ;
typedef TYPE_1__ COOKContext ;


 float* VAR_0 ;

__attribute__((used)) static void FUNC_0(COOKContext *VAR_1, float *VAR_2,
                              int VAR_3, int VAR_4)
{
    int VAR_5;
    float VAR_6, VAR_7;
    VAR_6 = VAR_0[VAR_3 + 63];

    if (VAR_3 == VAR_4) {
        for (VAR_5 = 0; VAR_5 < VAR_1->gain_size_factor; VAR_5++)
            VAR_2[VAR_5] *= VAR_6;
    } else {
        VAR_7 = VAR_1->gain_table[15 + (VAR_4 - VAR_3)];
        for (VAR_5 = 0; VAR_5 < VAR_1->gain_size_factor; VAR_5++) {
            VAR_2[VAR_5] *= VAR_6;
            VAR_6 *= VAR_7;
        }
    }
}
