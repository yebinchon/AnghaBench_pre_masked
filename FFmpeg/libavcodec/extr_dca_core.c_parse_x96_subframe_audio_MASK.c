
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int8_t ;
typedef int int32_t ;
struct TYPE_7__ {int* nsubsubframes; int npcmblocks; int x96_nchannels; int x96_subband_start; int* nsubbands; int*** x96_subband_samples; int*** scale_factors; int** bit_allocation; int bit_rate; int* joint_intensity_index; int * joint_scale_factors; TYPE_1__* dcadsp; int * prediction_mode; int * prediction_vq_index; int avctx; int gb; scalar_t__ sync_ssf; } ;
struct TYPE_6__ {int (* decode_joint ) (int**,int**,int ,int,int,int,int) ;} ;
typedef TYPE_2__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int*,int,int) ;
 int FUNC_4 (int*,int*,int,int,int ,int) ;
 int** VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int**,int ,int ,int,int,int,int) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int**,int**,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_12(DCACoreDecoder *VAR_6, int VAR_7, int VAR_8, int *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;


    int VAR_15 = VAR_6->nsubsubframes[VAR_7] * VAR_2;
    if (*VAR_9 + VAR_15 > VAR_6->npcmblocks) {
        FUNC_1(VAR_6->avctx, VAR_1, "Subband sample buffer overflow\n");
        return VAR_0;
    }

    if (FUNC_6(&VAR_6->gb) < 0)
        return VAR_0;


    for (VAR_12 = VAR_8; VAR_12 < VAR_6->x96_nchannels; VAR_12++) {
        for (VAR_13 = VAR_6->x96_subband_start; VAR_13 < VAR_6->nsubbands[VAR_12]; VAR_13++) {

            int32_t *VAR_16 = VAR_6->x96_subband_samples[VAR_12][VAR_13] + *VAR_9;
            int32_t VAR_17 = VAR_6->scale_factors[VAR_12][VAR_13 >> 1][VAR_13 & 1];

            switch (VAR_6->bit_allocation[VAR_12][VAR_13]) {
            case 0:
                if (VAR_17 <= 1)
                    FUNC_8(VAR_16, 0, VAR_15 * sizeof(int32_t));
                else for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++)

                    VAR_16[VAR_10] = FUNC_9(FUNC_10(VAR_6), VAR_17);
                break;

            case 1:
                for (VAR_11 = 0; VAR_11 < (VAR_6->nsubsubframes[VAR_7] + 1) / 2; VAR_11++) {


                    const int8_t *VAR_18 = VAR_3[FUNC_5(&VAR_6->gb, 10)];

                    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_15 - VAR_11 * 16, 16); VAR_10++)
                        *VAR_16++ = FUNC_2((VAR_18[VAR_10] * VAR_17 + (1 << 3)) >> 4);
                }
                break;
            }
        }
    }


    for (VAR_11 = 0, VAR_14 = *VAR_9; VAR_11 < VAR_6->nsubsubframes[VAR_7]; VAR_11++) {
        for (VAR_12 = VAR_8; VAR_12 < VAR_6->x96_nchannels; VAR_12++) {
            if (FUNC_6(&VAR_6->gb) < 0)
                return VAR_0;

            for (VAR_13 = VAR_6->x96_subband_start; VAR_13 < VAR_6->nsubbands[VAR_12]; VAR_13++) {
                int VAR_19, VAR_20 = VAR_6->bit_allocation[VAR_12][VAR_13] - 1;
                int32_t VAR_21[VAR_2], VAR_22, VAR_23;


                if (VAR_20 < 1)
                    continue;


                if ((VAR_19 = FUNC_3(VAR_6, VAR_21, VAR_20, VAR_12)) < 0)
                    return VAR_19;



                if (VAR_6->bit_rate == 3)
                    VAR_22 = VAR_4[VAR_20];
                else
                    VAR_22 = VAR_5[VAR_20];


                VAR_23 = VAR_6->scale_factors[VAR_12][VAR_13 >> 1][VAR_13 & 1];

                FUNC_4(VAR_6->x96_subband_samples[VAR_12][VAR_13] + VAR_14,
                           VAR_21, VAR_22, VAR_23, 0, VAR_2);
            }
        }


        if ((VAR_11 == VAR_6->nsubsubframes[VAR_7] - 1 || VAR_6->sync_ssf) && FUNC_5(&VAR_6->gb, 16) != 0xffff) {
            FUNC_1(VAR_6->avctx, VAR_1, "X96-DSYNC check failed\n");
            return VAR_0;
        }

        VAR_14 += VAR_2;
    }


    for (VAR_12 = VAR_8; VAR_12 < VAR_6->x96_nchannels; VAR_12++) {
        FUNC_7(VAR_6->x96_subband_samples[VAR_12], VAR_6->prediction_vq_index[VAR_12],
                      VAR_6->prediction_mode[VAR_12], VAR_6->x96_subband_start, VAR_6->nsubbands[VAR_12],
                      *VAR_9, VAR_15);
    }


    for (VAR_12 = VAR_8; VAR_12 < VAR_6->x96_nchannels; VAR_12++) {
        int VAR_24 = VAR_6->joint_intensity_index[VAR_12] - 1;
        if (VAR_24 >= 0) {
            VAR_6->dcadsp->decode_joint(VAR_6->x96_subband_samples[VAR_12], VAR_6->x96_subband_samples[VAR_24],
                                    VAR_6->joint_scale_factors[VAR_12], VAR_6->nsubbands[VAR_12],
                                    VAR_6->nsubbands[VAR_24], *VAR_9, VAR_15);
        }
    }


    *VAR_9 = VAR_14;
    return 0;
}
