
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int min_mono_subband; int nsubbands; size_t*** part_stereo; float*** time_samples; unsigned int* ch_pres; } ;
typedef TYPE_1__ DCALbrDecoder ;


 float* VAR_0 ;

__attribute__((used)) static void FUNC_0(DCALbrDecoder *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;

    for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++) {
        for (VAR_6 = VAR_1->min_mono_subband; VAR_6 < VAR_1->nsubbands; VAR_6++) {
            uint8_t *VAR_8 = VAR_1->part_stereo[VAR_5][(VAR_6 - VAR_1->min_mono_subband) / 4];
            float *VAR_9 = VAR_1->time_samples[VAR_5][VAR_6];

            if (VAR_1->ch_pres[VAR_3] & (1U << VAR_6))
                continue;

            for (VAR_7 = 1; VAR_7 <= 4; VAR_7++, VAR_9 += 32) {
                float VAR_10 = VAR_0[VAR_8[VAR_7 - 1]];
                float VAR_11 = VAR_0[VAR_8[VAR_7 ]];

                for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
                    VAR_9[VAR_4] *= (32 - VAR_4) * VAR_10 + VAR_4 * VAR_11;
            }
        }
    }
}
