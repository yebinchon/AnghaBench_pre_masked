
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x96_nchannels; int x96_subband_start; int* nsubbands; int* bit_allocation_sel; int x96_high_res; int** bit_allocation; int* scale_factor_sel; int*** scale_factors; int* joint_intensity_index; int* joint_scale_sel; int** joint_scale_factors; int gb; scalar_t__ crc_present; int avctx; void*** prediction_vq_index; scalar_t__** prediction_mode; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int * VAR_2 ;
 void* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int*,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(DCACoreDecoder *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    if (FUNC_4(&VAR_3->gb) < 0)
        return VAR_0;


    for (VAR_5 = VAR_4; VAR_5 < VAR_3->x96_nchannels; VAR_5++)
        for (VAR_6 = VAR_3->x96_subband_start; VAR_6 < VAR_3->nsubbands[VAR_5]; VAR_6++)
            VAR_3->prediction_mode[VAR_5][VAR_6] = FUNC_3(&VAR_3->gb);


    for (VAR_5 = VAR_4; VAR_5 < VAR_3->x96_nchannels; VAR_5++)
        for (VAR_6 = VAR_3->x96_subband_start; VAR_6 < VAR_3->nsubbands[VAR_5]; VAR_6++)
            if (VAR_3->prediction_mode[VAR_5][VAR_6])
                VAR_3->prediction_vq_index[VAR_5][VAR_6] = FUNC_2(&VAR_3->gb, 12);


    for (VAR_5 = VAR_4; VAR_5 < VAR_3->x96_nchannels; VAR_5++) {
        int VAR_8 = VAR_3->bit_allocation_sel[VAR_5];
        int VAR_9 = 0;

        for (VAR_6 = VAR_3->x96_subband_start; VAR_6 < VAR_3->nsubbands[VAR_5]; VAR_6++) {

            if (VAR_8 < 7)
                VAR_9 += FUNC_1(&VAR_3->gb, &VAR_2[5 + 2 * VAR_3->x96_high_res], VAR_8);
            else
                VAR_9 = FUNC_2(&VAR_3->gb, 3 + VAR_3->x96_high_res);

            if (VAR_9 < 0 || VAR_9 > 7 + 8 * VAR_3->x96_high_res) {
                FUNC_0(VAR_3->avctx, VAR_1, "Invalid X96 bit allocation index\n");
                return VAR_0;
            }

            VAR_3->bit_allocation[VAR_5][VAR_6] = VAR_9;
        }
    }


    for (VAR_5 = VAR_4; VAR_5 < VAR_3->x96_nchannels; VAR_5++) {
        int VAR_10 = VAR_3->scale_factor_sel[VAR_5];
        int VAR_11 = 0;



        for (VAR_6 = VAR_3->x96_subband_start; VAR_6 < VAR_3->nsubbands[VAR_5]; VAR_6++) {
            if ((VAR_7 = FUNC_6(VAR_3, &VAR_11, VAR_10)) < 0)
                return VAR_7;
            VAR_3->scale_factors[VAR_5][VAR_6 >> 1][VAR_6 & 1] = VAR_7;
        }
    }


    for (VAR_5 = VAR_4; VAR_5 < VAR_3->x96_nchannels; VAR_5++) {
        if (VAR_3->joint_intensity_index[VAR_5]) {
            VAR_3->joint_scale_sel[VAR_5] = FUNC_2(&VAR_3->gb, 3);
            if (VAR_3->joint_scale_sel[VAR_5] == 7) {
                FUNC_0(VAR_3->avctx, VAR_1, "Invalid X96 joint scale factor code book\n");
                return VAR_0;
            }
        }
    }


    for (VAR_5 = VAR_4; VAR_5 < VAR_3->x96_nchannels; VAR_5++) {
        int VAR_12 = VAR_3->joint_intensity_index[VAR_5] - 1;
        if (VAR_12 >= 0) {
            int VAR_13 = VAR_3->joint_scale_sel[VAR_5];
            for (VAR_6 = VAR_3->nsubbands[VAR_5]; VAR_6 < VAR_3->nsubbands[VAR_12]; VAR_6++) {
                if ((VAR_7 = FUNC_5(VAR_3, VAR_13)) < 0)
                    return VAR_7;
                VAR_3->joint_scale_factors[VAR_5][VAR_6] = VAR_7;
            }
        }
    }


    if (VAR_3->crc_present)
        FUNC_7(&VAR_3->gb, 16);

    return 0;
}
