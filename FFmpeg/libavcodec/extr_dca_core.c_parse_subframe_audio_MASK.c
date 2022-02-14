
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
typedef enum HeaderType { ____Placeholder_HeaderType } HeaderType ;
struct TYPE_6__ {int* nsubsubframes; int npcmblocks; int nchannels; int* subband_vq_start; int* nsubbands; int*** scale_factors; int lfe_present; int** bit_allocation; int bit_rate; int*** transition_mode; int** scale_factor_adj; int* joint_intensity_index; int * joint_scale_factors; scalar_t__** subband_samples; TYPE_1__* dcadsp; int * prediction_mode; int * prediction_vq_index; int avctx; int gb; scalar_t__ sync_ssf; void** lfe_samples; } ;
struct TYPE_5__ {int (* decode_joint ) (scalar_t__*,scalar_t__*,int ,int,int,int,int) ;int (* decode_hf ) (scalar_t__*,int*,int ,int**,int,int,int,int) ;} ;
typedef TYPE_2__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int*,int,int) ;
 int FUNC_5 (scalar_t__,int*,int,int,int ,int) ;
 int VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_6 (int *,int*,int,int) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*,int ,int ,int ,int,int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (scalar_t__*,int*,int ,int**,int,int,int,int) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_13(DCACoreDecoder *VAR_9, int VAR_10, enum HeaderType VAR_11,
                                int VAR_12, int *VAR_13, int *VAR_14)
{
    int32_t VAR_15[16], VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;


    int VAR_22 = VAR_9->nsubsubframes[VAR_10] * VAR_3;
    if (*VAR_13 + VAR_22 > VAR_9->npcmblocks) {
        FUNC_2(VAR_9->avctx, VAR_1, "Subband sample buffer overflow\n");
        return VAR_0;
    }

    if (FUNC_8(&VAR_9->gb) < 0)
        return VAR_0;


    for (VAR_20 = VAR_12; VAR_20 < VAR_9->nchannels; VAR_20++) {
        int32_t VAR_23[VAR_2];

        for (VAR_21 = VAR_9->subband_vq_start[VAR_20]; VAR_21 < VAR_9->nsubbands[VAR_20]; VAR_21++)

            VAR_23[VAR_21] = FUNC_7(&VAR_9->gb, 10);

        if (VAR_9->subband_vq_start[VAR_20] < VAR_9->nsubbands[VAR_20]) {
            VAR_9->dcadsp->decode_hf(VAR_9->subband_samples[VAR_20], VAR_23,
                                 VAR_5, VAR_9->scale_factors[VAR_20],
                                 VAR_9->subband_vq_start[VAR_20], VAR_9->nsubbands[VAR_20],
                                 *VAR_13, VAR_22);
        }
    }


    if (VAR_9->lfe_present && VAR_11 == VAR_4) {
        unsigned int VAR_24;


        int VAR_25 = 2 * VAR_9->lfe_present * VAR_9->nsubsubframes[VAR_10];
        FUNC_1((unsigned int)VAR_25 <= FUNC_0(VAR_15));


        FUNC_6(&VAR_9->gb, VAR_15, VAR_25, 8);


        VAR_24 = FUNC_7(&VAR_9->gb, 8);
        if (VAR_24 >= FUNC_0(VAR_8)) {
            FUNC_2(VAR_9->avctx, VAR_1, "Invalid LFE scale factor index\n");
            return VAR_0;
        }


        VAR_16 = VAR_8[VAR_24];


        VAR_16 = FUNC_10(4697620 , VAR_16);


        for (VAR_17 = 0, VAR_19 = *VAR_14; VAR_17 < VAR_25; VAR_17++, VAR_19++)
            VAR_9->lfe_samples[VAR_19] = FUNC_3(VAR_15[VAR_17] * VAR_16 >> 4);


        *VAR_14 = VAR_19;
    }


    for (VAR_18 = 0, VAR_19 = *VAR_13; VAR_18 < VAR_9->nsubsubframes[VAR_10]; VAR_18++) {
        for (VAR_20 = VAR_12; VAR_20 < VAR_9->nchannels; VAR_20++) {
            if (FUNC_8(&VAR_9->gb) < 0)
                return VAR_0;


            for (VAR_21 = 0; VAR_21 < VAR_9->subband_vq_start[VAR_20]; VAR_21++) {
                int VAR_26, VAR_27, VAR_28 = VAR_9->bit_allocation[VAR_20][VAR_21];
                int32_t VAR_29;


                if ((VAR_26 = FUNC_4(VAR_9, VAR_15, VAR_28, VAR_20)) < 0)
                    return VAR_26;



                if (VAR_9->bit_rate == 3)
                    VAR_29 = VAR_6[VAR_28];
                else
                    VAR_29 = VAR_7[VAR_28];


                VAR_27 = VAR_9->transition_mode[VAR_10][VAR_20][VAR_21];


                if (VAR_27 == 0 || VAR_18 < VAR_27)
                    VAR_16 = VAR_9->scale_factors[VAR_20][VAR_21][0];
                else
                    VAR_16 = VAR_9->scale_factors[VAR_20][VAR_21][1];


                if (VAR_26 > 0) {
                    int64_t VAR_30 = VAR_9->scale_factor_adj[VAR_20][VAR_28 - 1];
                    VAR_16 = FUNC_3(VAR_30 * VAR_16 >> 22);
                }

                FUNC_5(VAR_9->subband_samples[VAR_20][VAR_21] + VAR_19,
                           VAR_15, VAR_29, VAR_16, 0, VAR_3);
            }
        }


        if ((VAR_18 == VAR_9->nsubsubframes[VAR_10] - 1 || VAR_9->sync_ssf) && FUNC_7(&VAR_9->gb, 16) != 0xffff) {
            FUNC_2(VAR_9->avctx, VAR_1, "DSYNC check failed\n");
            return VAR_0;
        }

        VAR_19 += VAR_3;
    }


    for (VAR_20 = VAR_12; VAR_20 < VAR_9->nchannels; VAR_20++) {
        FUNC_9(VAR_9->subband_samples[VAR_20], VAR_9->prediction_vq_index[VAR_20],
                      VAR_9->prediction_mode[VAR_20], 0, VAR_9->nsubbands[VAR_20],
                      *VAR_13, VAR_22);
    }


    for (VAR_20 = VAR_12; VAR_20 < VAR_9->nchannels; VAR_20++) {
        int VAR_31 = VAR_9->joint_intensity_index[VAR_20] - 1;
        if (VAR_31 >= 0) {
            VAR_9->dcadsp->decode_joint(VAR_9->subband_samples[VAR_20], VAR_9->subband_samples[VAR_31],
                                    VAR_9->joint_scale_factors[VAR_20], VAR_9->nsubbands[VAR_20],
                                    VAR_9->nsubbands[VAR_31], *VAR_13, VAR_22);
        }
    }


    *VAR_13 = VAR_19;
    return 0;
}
