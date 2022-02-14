
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int (* quant_band ) (TYPE_3__*,TYPE_2__*,int *,int,float*,float*,int,int,int,float*,int,float*,int ,float,float*,int) ;} ;
struct TYPE_11__ {int framebits; int anticollapse_needed; int start_band; int end_band; int blocks; int size; int channels; int remaining; int remaining2; int coded_bands; int* pulses; scalar_t__ spread; scalar_t__* tf_change; int intensity_stereo; TYPE_1__* block; TYPE_3__* pvq; scalar_t__ dual_stereo; } ;
struct TYPE_10__ {float* coeffs; int* collapse_masks; } ;
typedef int OpusRangeCoder ;
typedef TYPE_2__ CeltFrame ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_3 (float*,float*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int *,int,float*,float*,int,int,int,float*,int,float*,int ,float,float*,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,int *,int,float*,float*,int,int,int,float*,int,float*,int ,float,float*,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int *,int,float*,float*,int,int,int,float*,int,float*,int ,float,float*,int) ;

void FUNC_8(CeltFrame *VAR_3, OpusRangeCoder *VAR_4)
{
    float VAR_5[8 * 22];
    float VAR_6[2 * 8 * 100];
    float *VAR_7 = VAR_6 + 8 * 100;

    int VAR_8 = (VAR_3->framebits << 3) - VAR_3->anticollapse_needed;

    int VAR_9 = 1;
    int VAR_10 = 0;

    int VAR_11, VAR_12;

    for (VAR_11 = VAR_3->start_band; VAR_11 < VAR_3->end_band; VAR_11++) {
        uint32_t VAR_13[2] = { (1 << VAR_3->blocks) - 1, (1 << VAR_3->blocks) - 1 };
        int VAR_14 = VAR_1[VAR_11] << VAR_3->size;
        int VAR_15 = VAR_2[VAR_11] << VAR_3->size;
        float *VAR_16 = VAR_3->block[0].coeffs + VAR_14;
        float *VAR_17 = (VAR_3->channels == 2) ? VAR_3->block[1].coeffs + VAR_14 : ((void*)0);
        float *VAR_18, *VAR_19;

        int VAR_20 = FUNC_4(VAR_4);
        int VAR_21 = -1;
        int VAR_22 = 0;


        if (VAR_11 != VAR_3->start_band)
            VAR_3->remaining -= VAR_20;
        VAR_3->remaining2 = VAR_8 - VAR_20 - 1;
        if (VAR_11 <= VAR_3->coded_bands - 1) {
            int VAR_23 = VAR_3->remaining / FUNC_1(3, VAR_3->coded_bands-VAR_11);
            VAR_22 = FUNC_2(FUNC_1(VAR_3->remaining2 + 1, VAR_3->pulses[VAR_11] + VAR_23), 14);
        }

        if ((VAR_1[VAR_11] - VAR_2[VAR_11] >= VAR_1[VAR_3->start_band] ||
            VAR_11 == VAR_3->start_band + 1) && (VAR_9 || VAR_10 == 0))
            VAR_10 = VAR_11;

        if (VAR_11 == VAR_3->start_band + 1) {


            int VAR_24 = (VAR_2[VAR_11] - VAR_2[VAR_11-1]) << VAR_3->size;

            FUNC_3(&VAR_6[VAR_14], &VAR_6[VAR_14 - VAR_24], VAR_24 * sizeof(float));

            if (VAR_3->channels == 2)
                FUNC_3(&VAR_7[VAR_14], &VAR_7[VAR_14 - VAR_24], VAR_24 * sizeof(float));
        }



        if (VAR_10 != 0 && (VAR_3->spread != VAR_0 ||
                                    VAR_3->blocks > 1 || VAR_3->tf_change[VAR_11] < 0)) {
            int VAR_25, VAR_26;


            VAR_21 = FUNC_0(VAR_1[VAR_3->start_band],
                                      VAR_1[VAR_10] - VAR_2[VAR_11]);
            VAR_25 = VAR_10;
            while (VAR_1[--VAR_25] > VAR_21);
            VAR_26 = VAR_10 - 1;
            while (++VAR_26 < VAR_11 && VAR_1[VAR_26] < VAR_21 + VAR_2[VAR_11]);

            VAR_13[0] = VAR_13[1] = 0;
            for (VAR_12 = VAR_25; VAR_12 < VAR_26; VAR_12++) {
                VAR_13[0] |= VAR_3->block[0].collapse_masks[VAR_12];
                VAR_13[1] |= VAR_3->block[VAR_3->channels - 1].collapse_masks[VAR_12];
            }
        }

        if (VAR_3->dual_stereo && VAR_11 == VAR_3->intensity_stereo) {

            VAR_3->dual_stereo = 0;
            for (VAR_12 = VAR_1[VAR_3->start_band] << VAR_3->size; VAR_12 < VAR_14; VAR_12++)
                VAR_6[VAR_12] = (VAR_6[VAR_12] + VAR_7[VAR_12]) / 2;
        }

        VAR_18 = VAR_21 != -1 ? VAR_6 + (VAR_21 << VAR_3->size) : ((void*)0);
        VAR_19 = VAR_21 != -1 ? VAR_7 + (VAR_21 << VAR_3->size) : ((void*)0);

        if (VAR_3->dual_stereo) {
            VAR_13[0] = VAR_3->pvq->quant_band(VAR_3->pvq, VAR_3, VAR_4, VAR_11, VAR_16, ((void*)0), VAR_15, VAR_22 >> 1,
                                       VAR_3->blocks, VAR_18, VAR_3->size,
                                       VAR_6 + VAR_14, 0, 1.0f,
                                       VAR_5, VAR_13[0]);

            VAR_13[1] = VAR_3->pvq->quant_band(VAR_3->pvq, VAR_3, VAR_4, VAR_11, VAR_17, ((void*)0), VAR_15, VAR_22 >> 1,
                                       VAR_3->blocks, VAR_19, VAR_3->size,
                                       VAR_7 + VAR_14, 0, 1.0f,
                                       VAR_5, VAR_13[1]);
        } else {
            VAR_13[0] = VAR_3->pvq->quant_band(VAR_3->pvq, VAR_3, VAR_4, VAR_11, VAR_16, VAR_17, VAR_15, VAR_22 >> 0,
                                       VAR_3->blocks, VAR_18, VAR_3->size,
                                       VAR_6 + VAR_14, 0, 1.0f,
                                       VAR_5, VAR_13[0] | VAR_13[1]);
            VAR_13[1] = VAR_13[0];
        }

        VAR_3->block[0].collapse_masks[VAR_11] = (uint8_t)VAR_13[0];
        VAR_3->block[VAR_3->channels - 1].collapse_masks[VAR_11] = (uint8_t)VAR_13[1];
        VAR_3->remaining += VAR_3->pulses[VAR_11] + VAR_20;


        VAR_9 = (VAR_22 > VAR_15 << 3);
    }
}
