
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum HeaderType { ____Placeholder_HeaderType } HeaderType ;
struct TYPE_5__ {int* nsubsubframes; int nchannels; int* nsubbands; int* bit_allocation_sel; int* subband_vq_start; int** bit_allocation; int* transition_mode_sel; int* scale_factor_sel; int*** scale_factors; int* joint_intensity_index; int* joint_scale_sel; int** joint_scale_factors; int gb; scalar_t__ crc_present; scalar_t__ drc_present; int avctx; void**** transition_mode; void*** prediction_vq_index; scalar_t__** prediction_mode; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 void* FUNC_1 (int *,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (void**,int ,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int*,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(DCACoreDecoder *VAR_6, int VAR_7,
                                 enum HeaderType VAR_8, int VAR_9)
{
    int VAR_10, VAR_11, VAR_12;

    if (FUNC_4(&VAR_6->gb) < 0)
        return VAR_0;

    if (VAR_8 == VAR_3) {

        VAR_6->nsubsubframes[VAR_7] = FUNC_2(&VAR_6->gb, 2) + 1;


        FUNC_8(&VAR_6->gb, 3);
    }


    for (VAR_10 = VAR_9; VAR_10 < VAR_6->nchannels; VAR_10++)
        for (VAR_11 = 0; VAR_11 < VAR_6->nsubbands[VAR_10]; VAR_11++)
            VAR_6->prediction_mode[VAR_10][VAR_11] = FUNC_3(&VAR_6->gb);


    for (VAR_10 = VAR_9; VAR_10 < VAR_6->nchannels; VAR_10++)
        for (VAR_11 = 0; VAR_11 < VAR_6->nsubbands[VAR_10]; VAR_11++)
            if (VAR_6->prediction_mode[VAR_10][VAR_11])
                VAR_6->prediction_vq_index[VAR_10][VAR_11] = FUNC_2(&VAR_6->gb, 12);


    for (VAR_10 = VAR_9; VAR_10 < VAR_6->nchannels; VAR_10++) {
        int VAR_13 = VAR_6->bit_allocation_sel[VAR_10];

        for (VAR_11 = 0; VAR_11 < VAR_6->subband_vq_start[VAR_10]; VAR_11++) {
            int VAR_14;

            if (VAR_13 < 5)
                VAR_14 = FUNC_1(&VAR_6->gb, &VAR_4, VAR_13);
            else
                VAR_14 = FUNC_2(&VAR_6->gb, VAR_13 - 1);

            if (VAR_14 > VAR_2) {
                FUNC_0(VAR_6->avctx, VAR_1, "Invalid bit allocation index\n");
                return VAR_0;
            }

            VAR_6->bit_allocation[VAR_10][VAR_11] = VAR_14;
        }
    }


    for (VAR_10 = VAR_9; VAR_10 < VAR_6->nchannels; VAR_10++) {

        FUNC_5(VAR_6->transition_mode[VAR_7][VAR_10], 0, sizeof(VAR_6->transition_mode[0][0]));


        if (VAR_6->nsubsubframes[VAR_7] > 1) {
            int VAR_15 = VAR_6->transition_mode_sel[VAR_10];
            for (VAR_11 = 0; VAR_11 < VAR_6->subband_vq_start[VAR_10]; VAR_11++)
                if (VAR_6->bit_allocation[VAR_10][VAR_11])
                    VAR_6->transition_mode[VAR_7][VAR_10][VAR_11] = FUNC_1(&VAR_6->gb, &VAR_5, VAR_15);
        }
    }


    for (VAR_10 = VAR_9; VAR_10 < VAR_6->nchannels; VAR_10++) {
        int VAR_16 = VAR_6->scale_factor_sel[VAR_10];
        int VAR_17 = 0;


        for (VAR_11 = 0; VAR_11 < VAR_6->subband_vq_start[VAR_10]; VAR_11++) {
            if (VAR_6->bit_allocation[VAR_10][VAR_11]) {
                if ((VAR_12 = FUNC_7(VAR_6, &VAR_17, VAR_16)) < 0)
                    return VAR_12;
                VAR_6->scale_factors[VAR_10][VAR_11][0] = VAR_12;
                if (VAR_6->transition_mode[VAR_7][VAR_10][VAR_11]) {
                    if ((VAR_12 = FUNC_7(VAR_6, &VAR_17, VAR_16)) < 0)
                        return VAR_12;
                    VAR_6->scale_factors[VAR_10][VAR_11][1] = VAR_12;
                }
            } else {
                VAR_6->scale_factors[VAR_10][VAR_11][0] = 0;
            }
        }


        for (VAR_11 = VAR_6->subband_vq_start[VAR_10]; VAR_11 < VAR_6->nsubbands[VAR_10]; VAR_11++) {
            if ((VAR_12 = FUNC_7(VAR_6, &VAR_17, VAR_16)) < 0)
                return VAR_12;
            VAR_6->scale_factors[VAR_10][VAR_11][0] = VAR_12;
        }
    }


    for (VAR_10 = VAR_9; VAR_10 < VAR_6->nchannels; VAR_10++) {
        if (VAR_6->joint_intensity_index[VAR_10]) {
            VAR_6->joint_scale_sel[VAR_10] = FUNC_2(&VAR_6->gb, 3);
            if (VAR_6->joint_scale_sel[VAR_10] == 7) {
                FUNC_0(VAR_6->avctx, VAR_1, "Invalid joint scale factor code book\n");
                return VAR_0;
            }
        }
    }


    for (VAR_10 = VAR_9; VAR_10 < VAR_6->nchannels; VAR_10++) {
        int VAR_18 = VAR_6->joint_intensity_index[VAR_10] - 1;
        if (VAR_18 >= 0) {
            int VAR_19 = VAR_6->joint_scale_sel[VAR_10];
            for (VAR_11 = VAR_6->nsubbands[VAR_10]; VAR_11 < VAR_6->nsubbands[VAR_18]; VAR_11++) {
                if ((VAR_12 = FUNC_6(VAR_6, VAR_19)) < 0)
                    return VAR_12;
                VAR_6->joint_scale_factors[VAR_10][VAR_11] = VAR_12;
            }
        }
    }


    if (VAR_6->drc_present && VAR_8 == VAR_3)
        FUNC_8(&VAR_6->gb, 8);


    if (VAR_6->crc_present)
        FUNC_8(&VAR_6->gb, 16);

    return 0;
}
