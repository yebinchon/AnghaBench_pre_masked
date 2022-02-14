
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* aw_n_pulses; int aw_pulse_range; scalar_t__* aw_first_pulse_off; scalar_t__ aw_idx_is_ext; } ;
typedef TYPE_1__ WMAVoiceContext ;
struct TYPE_6__ {double* y; size_t n; scalar_t__* x; scalar_t__ pitch_lag; int no_repeat_mask; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AMRFixed ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(WMAVoiceContext *VAR_1, GetBitContext *VAR_2,
                          int VAR_3, AMRFixed *VAR_4)
{
    int VAR_5 = FUNC_0(VAR_2, 12 - 2 * (VAR_1->aw_idx_is_ext && !VAR_3));
    float VAR_6;

    if (VAR_1->aw_n_pulses[VAR_3] > 0) {
        int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

        if (VAR_1->aw_pulse_range == 24) {
            VAR_11 = 3;
            VAR_8 = 8;
            VAR_9 = 7;
            VAR_10 = 4;
        } else {
            VAR_11 = 4;
            VAR_8 = 4;
            VAR_9 = 3;
            VAR_10 = 3;
        }

        for (VAR_7 = VAR_11 - 1; VAR_7 >= 0; VAR_7--, VAR_5 >>= VAR_10) {
            VAR_4->y[VAR_4->n] = (VAR_5 & VAR_8) ? -1.0 : 1.0;
            VAR_4->x[VAR_4->n] = (VAR_5 & VAR_9) * VAR_11 + VAR_7 +
                                 VAR_1->aw_first_pulse_off[VAR_3];
            while (VAR_4->x[VAR_4->n] < 0)
                VAR_4->x[VAR_4->n] += VAR_4->pitch_lag;
            if (VAR_4->x[VAR_4->n] < VAR_0 / 2)
                VAR_4->n++;
        }
    } else {
        int VAR_12 = (VAR_5 & 0x1FF) >> 1, VAR_13, VAR_14;

        if (VAR_12 < 1 * 79) { VAR_13 = 1; VAR_14 = VAR_12 + 1; }
        else if (VAR_12 < 2 * 78) { VAR_13 = 3; VAR_14 = VAR_12 + 1 - 1 * 77; }
        else if (VAR_12 < 3 * 77) { VAR_13 = 5; VAR_14 = VAR_12 + 1 - 2 * 76; }
        else { VAR_13 = 7; VAR_14 = VAR_12 + 1 - 3 * 75; }
        VAR_6 = (VAR_5 & 0x200) ? -1.0 : 1.0;

        VAR_4->no_repeat_mask |= 3 << VAR_4->n;
        VAR_4->x[VAR_4->n] = VAR_14 - VAR_13;
        VAR_4->y[VAR_4->n] = VAR_6;
        VAR_4->x[VAR_4->n + 1] = VAR_14;
        VAR_4->y[VAR_4->n + 1] = (VAR_5 & 1) ? -VAR_6 : VAR_6;
        VAR_4->n += 2;
    }
}
