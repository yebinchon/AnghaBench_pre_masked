
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int use_mask ;
typedef int uint16_t ;
struct TYPE_5__ {int* aw_first_pulse_off; scalar_t__* aw_n_pulses; int aw_pulse_range; int aw_next_pulse_off_cache; } ;
typedef TYPE_1__ WMAVoiceContext ;
struct TYPE_6__ {int pitch_lag; int* x; size_t n; double* y; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AMRFixed ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static int FUNC_4(WMAVoiceContext *VAR_1, GetBitContext *VAR_2,
                         int VAR_3, AMRFixed *VAR_4)
{
    uint16_t VAR_5[9];
    uint16_t *VAR_6 = VAR_5 + 2;







    int VAR_7 = VAR_1->aw_first_pulse_off[VAR_3],
        VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;


    if (VAR_1->aw_n_pulses[VAR_3] > 0)
        while (VAR_7 + VAR_1->aw_pulse_range < 1)
            VAR_7 += VAR_4->pitch_lag;


    if (VAR_1->aw_n_pulses[0] > 0) {
        if (VAR_3 == 0) {
            VAR_11 = 32;
        } else {
            VAR_11 = 8;
            if (VAR_1->aw_n_pulses[VAR_3] > 0)
                VAR_7 = VAR_1->aw_next_pulse_off_cache;
        }
    } else
        VAR_11 = 16;
    VAR_8 = VAR_1->aw_n_pulses[VAR_3] > 0 ? VAR_7 - VAR_11 / 2 : 0;




    FUNC_3(&VAR_6[-2], 0, 2 * sizeof(VAR_6[0]));
    FUNC_3( VAR_6, -1, 5 * sizeof(VAR_6[0]));
    FUNC_3(&VAR_6[5], 0, 2 * sizeof(VAR_6[0]));
    if (VAR_1->aw_n_pulses[VAR_3] > 0)
        for (VAR_10 = VAR_7; VAR_10 < VAR_0 / 2; VAR_10 += VAR_4->pitch_lag) {
            int VAR_14 = VAR_1->aw_pulse_range;
            uint16_t *VAR_15 = &VAR_6[VAR_10 >> 4];
            int VAR_16 = 16 - (VAR_10 & 15);
            *VAR_15++ &= 0xFFFFu << VAR_16;
            VAR_14 -= VAR_16;
            if (VAR_14 >= 16) {
                *VAR_15++ = 0;
                *VAR_15 &= 0xFFFF >> (VAR_14 - 16);
            } else
                *VAR_15 &= 0xFFFF >> VAR_14;
        }


    VAR_12 = FUNC_1(VAR_2, VAR_1->aw_n_pulses[0] > 0 ? 5 - 2 * VAR_3 : 4);
    for (VAR_9 = 0; VAR_9 <= VAR_12; VAR_8++) {
        for (VAR_10 = VAR_8; VAR_10 < 0; VAR_10 += VAR_4->pitch_lag) ;
        if (VAR_10 >= VAR_0 / 2) {
            if (VAR_6[0]) VAR_10 = 0x0F;
            else if (VAR_6[1]) VAR_10 = 0x1F;
            else if (VAR_6[2]) VAR_10 = 0x2F;
            else if (VAR_6[3]) VAR_10 = 0x3F;
            else if (VAR_6[4]) VAR_10 = 0x4F;
            else return -1;
            VAR_10 -= FUNC_0(VAR_6[VAR_10 >> 4]);
        }
        if (VAR_6[VAR_10 >> 4] & (0x8000 >> (VAR_10 & 15))) {
            VAR_6[VAR_10 >> 4] &= ~(0x8000 >> (VAR_10 & 15));
            VAR_9++;
            VAR_13 = VAR_10;
        }
    }

    VAR_4->x[VAR_4->n] = VAR_13;
    VAR_4->y[VAR_4->n] = FUNC_2(VAR_2) ? -1.0 : 1.0;
    VAR_4->n++;


    VAR_9 = (VAR_0 / 2 - VAR_13) % VAR_4->pitch_lag;
    VAR_1->aw_next_pulse_off_cache = VAR_9 ? VAR_4->pitch_lag - VAR_9 : 0;
    return 0;
}
