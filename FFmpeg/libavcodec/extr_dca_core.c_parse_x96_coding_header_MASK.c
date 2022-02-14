
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x96_high_res; int x96_rev_no; int x96_subband_start; int x96_nchannels; int* nsubbands; int* joint_intensity_index; int* scale_factor_sel; int gb; scalar_t__ crc_present; int avctx; void*** quant_index_sel; void** bit_allocation_sel; scalar_t__ x96_crc_present; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *,int,int) ;
 int* VAR_3 ;
 scalar_t__ FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(DCACoreDecoder *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = FUNC_5(&VAR_4->gb);

    if (FUNC_6(&VAR_4->gb) < 0)
        return VAR_0;

    if (VAR_5) {

        VAR_9 = FUNC_3(&VAR_4->gb, 7) + 1;


        if (VAR_4->x96_crc_present
            && FUNC_1(VAR_4->avctx, &VAR_4->gb, VAR_10, VAR_10 + VAR_9 * 8)) {
            FUNC_0(VAR_4->avctx, VAR_1, "Invalid X96 channel set header checksum\n");
            return VAR_0;
        }
    }


    VAR_4->x96_high_res = FUNC_4(&VAR_4->gb);


    if (VAR_4->x96_rev_no < 8) {
        VAR_4->x96_subband_start = FUNC_3(&VAR_4->gb, 5);
        if (VAR_4->x96_subband_start > 27) {
            FUNC_0(VAR_4->avctx, VAR_1, "Invalid X96 subband start index (%d)\n", VAR_4->x96_subband_start);
            return VAR_0;
        }
    } else {
        VAR_4->x96_subband_start = VAR_2;
    }


    for (VAR_8 = VAR_6; VAR_8 < VAR_4->x96_nchannels; VAR_8++) {
        VAR_4->nsubbands[VAR_8] = FUNC_3(&VAR_4->gb, 6) + 1;
        if (VAR_4->nsubbands[VAR_8] < VAR_2) {
            FUNC_0(VAR_4->avctx, VAR_1, "Invalid X96 subband activity count (%d)\n", VAR_4->nsubbands[VAR_8]);
            return VAR_0;
        }
    }


    for (VAR_8 = VAR_6; VAR_8 < VAR_4->x96_nchannels; VAR_8++) {
        if ((VAR_7 = FUNC_3(&VAR_4->gb, 3)) && VAR_6)
            VAR_7 += VAR_6 - 1;
        if (VAR_7 > VAR_4->x96_nchannels) {
            FUNC_0(VAR_4->avctx, VAR_1, "Invalid X96 joint intensity coding index\n");
            return VAR_0;
        }
        VAR_4->joint_intensity_index[VAR_8] = VAR_7;
    }


    for (VAR_8 = VAR_6; VAR_8 < VAR_4->x96_nchannels; VAR_8++) {
        VAR_4->scale_factor_sel[VAR_8] = FUNC_3(&VAR_4->gb, 3);
        if (VAR_4->scale_factor_sel[VAR_8] >= 6) {
            FUNC_0(VAR_4->avctx, VAR_1, "Invalid X96 scale factor code book\n");
            return VAR_0;
        }
    }


    for (VAR_8 = VAR_6; VAR_8 < VAR_4->x96_nchannels; VAR_8++)
        VAR_4->bit_allocation_sel[VAR_8] = FUNC_3(&VAR_4->gb, 3);


    for (VAR_7 = 0; VAR_7 < 6 + 4 * VAR_4->x96_high_res; VAR_7++)
        for (VAR_8 = VAR_6; VAR_8 < VAR_4->x96_nchannels; VAR_8++)
            VAR_4->quant_index_sel[VAR_8][VAR_7] = FUNC_3(&VAR_4->gb, VAR_3[VAR_7]);

    if (VAR_5) {



        if (FUNC_2(&VAR_4->gb, VAR_10 + VAR_9 * 8)) {
            FUNC_0(VAR_4->avctx, VAR_1, "Read past end of X96 channel set header\n");
            return VAR_0;
        }
    } else {
        if (VAR_4->crc_present)
            FUNC_7(&VAR_4->gb, 16);
    }

    return 0;
}
