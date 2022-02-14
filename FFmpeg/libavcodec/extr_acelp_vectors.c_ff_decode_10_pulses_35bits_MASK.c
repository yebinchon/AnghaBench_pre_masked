
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {int n; int* x; float* y; scalar_t__ no_repeat_mask; } ;
typedef TYPE_1__ AMRFixed ;



void FUNC_0(const int16_t *VAR_0,
                                AMRFixed *VAR_1,
                                const uint8_t *VAR_2,
                                int VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6 = (1 << VAR_4) - 1;

    VAR_1->no_repeat_mask = 0;
    VAR_1->n = 2 * VAR_3;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        const int VAR_7 = VAR_2[VAR_0[2*VAR_5+1] & VAR_6] + VAR_5;
        const int VAR_8 = VAR_2[VAR_0[2*VAR_5 ] & VAR_6] + VAR_5;
        const float VAR_9 = (VAR_0[2*VAR_5+1] & (1 << VAR_4)) ? -1.0 : 1.0;
        VAR_1->x[2*VAR_5+1] = VAR_7;
        VAR_1->x[2*VAR_5 ] = VAR_8;
        VAR_1->y[2*VAR_5+1] = VAR_9;
        VAR_1->y[2*VAR_5 ] = VAR_8 < VAR_7 ? -VAR_9 : VAR_9;
    }
}
