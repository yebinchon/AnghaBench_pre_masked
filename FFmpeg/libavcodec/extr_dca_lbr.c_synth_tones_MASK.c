
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int*** tonal_bounds; TYPE_1__* tones; } ;
struct TYPE_4__ {int* amp; int* phs; size_t f_delt; int x_freq; scalar_t__ ph_rot; } ;
typedef TYPE_1__ DCALbrTone ;
typedef TYPE_2__ DCALbrDecoder ;


 int VAR_0 ;
 float* VAR_1 ;
 float** VAR_2 ;
 float* VAR_3 ;
 float* VAR_4 ;

__attribute__((used)) static void FUNC_0(DCALbrDecoder *VAR_5, int VAR_6, float *VAR_7,
                        int VAR_8, int VAR_9, int VAR_10)
{
    int VAR_11, VAR_12, VAR_13;

    if (VAR_10 < 0)
        return;

    VAR_12 = VAR_5->tonal_bounds[VAR_8][VAR_9][0];
    VAR_13 = (VAR_5->tonal_bounds[VAR_8][VAR_9][1] - VAR_12) & (VAR_0 - 1);

    for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
        DCALbrTone *VAR_14 = &VAR_5->tones[(VAR_12 + VAR_11) & (VAR_0 - 1)];

        if (VAR_14->amp[VAR_6]) {
            float VAR_15 = VAR_4[VAR_10] * VAR_3[VAR_14->amp[VAR_6]];
            float VAR_16 = VAR_15 * VAR_1[(VAR_14->phs[VAR_6] ) & 255];
            float VAR_17 = VAR_15 * VAR_1[(VAR_14->phs[VAR_6] + 64) & 255];
            const float *VAR_18 = VAR_2[VAR_14->f_delt];
            int VAR_19 = VAR_14->x_freq;

            switch (VAR_19) {
            case 0:
                goto p0;
            case 1:
                VAR_7[3] += VAR_18[0] * -VAR_17;
                VAR_7[2] += VAR_18[1] * VAR_16;
                VAR_7[1] += VAR_18[2] * VAR_17;
                VAR_7[0] += VAR_18[3] * -VAR_16;
                goto p1;
            case 2:
                VAR_7[2] += VAR_18[0] * -VAR_17;
                VAR_7[1] += VAR_18[1] * VAR_16;
                VAR_7[0] += VAR_18[2] * VAR_17;
                goto p2;
            case 3:
                VAR_7[1] += VAR_18[0] * -VAR_17;
                VAR_7[0] += VAR_18[1] * VAR_16;
                goto p3;
            case 4:
                VAR_7[0] += VAR_18[0] * -VAR_17;
                goto p4;
            }

            VAR_7[VAR_19 - 5] += VAR_18[ 0] * -VAR_17;
        p4: VAR_7[VAR_19 - 4] += VAR_18[ 1] * VAR_16;
        p3: VAR_7[VAR_19 - 3] += VAR_18[ 2] * VAR_17;
        p2: VAR_7[VAR_19 - 2] += VAR_18[ 3] * -VAR_16;
        p1: VAR_7[VAR_19 - 1] += VAR_18[ 4] * -VAR_17;
        p0: VAR_7[VAR_19 ] += VAR_18[ 5] * VAR_16;
            VAR_7[VAR_19 + 1] += VAR_18[ 6] * VAR_17;
            VAR_7[VAR_19 + 2] += VAR_18[ 7] * -VAR_16;
            VAR_7[VAR_19 + 3] += VAR_18[ 8] * -VAR_17;
            VAR_7[VAR_19 + 4] += VAR_18[ 9] * VAR_16;
            VAR_7[VAR_19 + 5] += VAR_18[10] * VAR_17;
        }

        VAR_14->phs[VAR_6] += VAR_14->ph_rot;
    }
}
