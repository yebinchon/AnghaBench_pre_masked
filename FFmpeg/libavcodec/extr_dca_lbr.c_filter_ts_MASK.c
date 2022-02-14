
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_4__ {int nsubbands; float*** time_samples; unsigned int*** high_res_scf; unsigned int*** grid_2_scf; unsigned int* ch_pres; int** sec_ch_sbms; int** sec_ch_lrms; int min_mono_subband; int part_stereo_pres; } ;
typedef TYPE_1__ DCALbrDecoder ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 float* VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_1(DCALbrDecoder *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;

    for (VAR_9 = 0; VAR_9 < VAR_4->nsubbands; VAR_9++) {

        for (VAR_10 = VAR_5; VAR_10 <= VAR_6; VAR_10++) {
            float *VAR_11 = VAR_4->time_samples[VAR_10][VAR_9];
            uint8_t *VAR_12 = VAR_4->high_res_scf[VAR_10][VAR_9];
            if (VAR_9 < 4) {
                for (VAR_7 = 0; VAR_7 < VAR_1 / 16; VAR_7++, VAR_11 += 16) {
                    unsigned int VAR_13 = VAR_12[VAR_7];
                    if (VAR_13 > VAR_0)
                        VAR_13 = VAR_0;
                    for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
                        VAR_11[VAR_8] *= VAR_2[VAR_13];
                }
            } else {
                uint8_t *VAR_14 = VAR_4->grid_2_scf[VAR_10][VAR_3[VAR_9]];
                for (VAR_7 = 0; VAR_7 < VAR_1 / 2; VAR_7++, VAR_11 += 2) {
                    unsigned int VAR_15 = VAR_12[VAR_7 / 8] - VAR_14[VAR_7];
                    if (VAR_15 > VAR_0)
                        VAR_15 = VAR_0;
                    VAR_11[0] *= VAR_2[VAR_15];
                    VAR_11[1] *= VAR_2[VAR_15];
                }
            }
        }


        if (VAR_5 != VAR_6) {
            float *VAR_16 = VAR_4->time_samples[VAR_5][VAR_9];
            float *VAR_17 = VAR_4->time_samples[VAR_6][VAR_9];
            int VAR_18 = VAR_4->ch_pres[VAR_6] & (1U << VAR_9);

            for (VAR_7 = 0; VAR_7 < VAR_1 / 16; VAR_7++) {
                int VAR_19 = (VAR_4->sec_ch_sbms[VAR_5 / 2][VAR_9] >> VAR_7) & 1;
                int VAR_20 = (VAR_4->sec_ch_lrms[VAR_5 / 2][VAR_9] >> VAR_7) & 1;

                if (VAR_9 >= VAR_4->min_mono_subband) {
                    if (VAR_20 && VAR_18) {
                        if (VAR_19) {
                            for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
                                float VAR_21 = VAR_16[VAR_8];
                                VAR_16[VAR_8] = VAR_17[VAR_8];
                                VAR_17[VAR_8] = -VAR_21;
                            }
                        } else {
                            for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
                                float VAR_22 = VAR_16[VAR_8];
                                VAR_16[VAR_8] = VAR_17[VAR_8];
                                VAR_17[VAR_8] = VAR_22;
                            }
                        }
                    } else if (!VAR_18) {
                        if (VAR_19 && (VAR_4->part_stereo_pres & (1 << VAR_5))) {
                            for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
                                VAR_17[VAR_8] = -VAR_16[VAR_8];
                        } else {
                            for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
                                VAR_17[VAR_8] = VAR_16[VAR_8];
                        }
                    }
                } else if (VAR_19 && VAR_18) {
                    for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
                        float VAR_23 = VAR_16[VAR_8];
                        VAR_16[VAR_8] = (VAR_23 + VAR_17[VAR_8]) * 0.5f;
                        VAR_17[VAR_8] = (VAR_23 - VAR_17[VAR_8]) * 0.5f;
                    }
                }

                VAR_16 += 16;
                VAR_17 += 16;
            }
        }


        if (VAR_9 < 3)
            FUNC_0(VAR_4, VAR_5, VAR_6, VAR_9);
    }
}
