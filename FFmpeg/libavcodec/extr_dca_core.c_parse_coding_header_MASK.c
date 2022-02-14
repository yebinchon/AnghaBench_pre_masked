
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum HeaderType { ____Placeholder_HeaderType } HeaderType ;
struct TYPE_3__ {int nchannels; size_t audio_mode; int ch_mask; unsigned int xxch_mask_nbits; unsigned int xxch_spkr_mask; int xxch_core_mask; int* xxch_dmix_coeff; unsigned int* xxch_dmix_mask; scalar_t__* nsubbands; int* joint_intensity_index; size_t* transition_mode_sel; size_t* scale_factor_sel; size_t* bit_allocation_sel; size_t** quant_index_sel; int gb; scalar_t__ crc_present; int avctx; int ** scale_factor_adj; scalar_t__* subband_vq_start; int xxch_dmix_embedded; int xxch_dmix_scale_inv; int xxch_crc_present; int lfe_present; int nsubframes; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;



 int* VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*,int) ;
 int* VAR_14 ;
 int FUNC_4 (int ,int *,int,int) ;
 int* VAR_15 ;
 int * VAR_16 ;
 scalar_t__* VAR_17 ;
 int* VAR_18 ;
 int * VAR_19 ;
 scalar_t__ FUNC_5 (int *,int) ;
 size_t FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 unsigned int FUNC_10 (int *,unsigned int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(DCACoreDecoder *VAR_20, enum HeaderType VAR_21, int VAR_22)
{
    int VAR_23, VAR_24, VAR_25, VAR_26 = 0, VAR_27 = FUNC_8(&VAR_20->gb);
    unsigned int VAR_28, VAR_29;

    if (FUNC_9(&VAR_20->gb) < 0)
        return VAR_0;

    switch (VAR_21) {
    case 130:

        VAR_20->nsubframes = FUNC_6(&VAR_20->gb, 4) + 1;


        VAR_20->nchannels = FUNC_6(&VAR_20->gb, 3) + 1;
        if (VAR_20->nchannels != VAR_14[VAR_20->audio_mode]) {
            FUNC_1(VAR_20->avctx, VAR_2, "Invalid number of primary audio channels (%d) for audio channel arrangement (%d)\n", VAR_20->nchannels, VAR_20->audio_mode);
            return VAR_0;
        }
        FUNC_0(VAR_20->nchannels <= VAR_3 - 2);

        VAR_20->ch_mask = VAR_13[VAR_20->audio_mode];


        if (VAR_20->lfe_present)
            VAR_20->ch_mask |= VAR_7;
        break;

    case 129:
        VAR_20->nchannels = VAR_14[VAR_20->audio_mode] + 1;
        FUNC_0(VAR_20->nchannels <= VAR_3 - 1);
        VAR_20->ch_mask |= VAR_6;
        break;

    case 128:

        VAR_26 = FUNC_6(&VAR_20->gb, 7) + 1;


        if (VAR_20->xxch_crc_present
            && FUNC_4(VAR_20->avctx, &VAR_20->gb, VAR_27, VAR_27 + VAR_26 * 8)) {
            FUNC_1(VAR_20->avctx, VAR_2, "Invalid XXCH channel set header checksum\n");
            return VAR_0;
        }


        VAR_25 = FUNC_6(&VAR_20->gb, 3) + 1;
        if (VAR_25 > VAR_9) {
            FUNC_3(VAR_20->avctx, "%d XXCH channels", VAR_25);
            return VAR_1;
        }
        VAR_20->nchannels = VAR_14[VAR_20->audio_mode] + VAR_25;
        FUNC_0(VAR_20->nchannels <= VAR_3);


        VAR_28 = FUNC_10(&VAR_20->gb, VAR_20->xxch_mask_nbits - VAR_5);
        VAR_20->xxch_spkr_mask = VAR_28 << VAR_5;

        if (FUNC_2(VAR_20->xxch_spkr_mask) != VAR_25) {
            FUNC_1(VAR_20->avctx, VAR_2, "Invalid XXCH speaker layout mask (%#x)\n", VAR_20->xxch_spkr_mask);
            return VAR_0;
        }

        if (VAR_20->xxch_core_mask & VAR_20->xxch_spkr_mask) {
            FUNC_1(VAR_20->avctx, VAR_2, "XXCH speaker layout mask (%#x) overlaps with core (%#x)\n", VAR_20->xxch_spkr_mask, VAR_20->xxch_core_mask);
            return VAR_0;
        }


        VAR_20->ch_mask = VAR_20->xxch_core_mask | VAR_20->xxch_spkr_mask;


        if (FUNC_7(&VAR_20->gb)) {
            int *VAR_30 = VAR_20->xxch_dmix_coeff;


            VAR_20->xxch_dmix_embedded = FUNC_7(&VAR_20->gb);


            VAR_29 = FUNC_6(&VAR_20->gb, 6) * 4 - VAR_10 - 3;
            if (VAR_29 >= VAR_12) {
                FUNC_1(VAR_20->avctx, VAR_2, "Invalid XXCH downmix scale index (%d)\n", VAR_29);
                return VAR_0;
            }
            VAR_20->xxch_dmix_scale_inv = VAR_16[VAR_29];


            for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
                VAR_28 = FUNC_10(&VAR_20->gb, VAR_20->xxch_mask_nbits);
                if ((VAR_28 & VAR_20->xxch_core_mask) != VAR_28) {
                    FUNC_1(VAR_20->avctx, VAR_2, "Invalid XXCH downmix channel mapping mask (%#x)\n", VAR_28);
                    return VAR_0;
                }
                VAR_20->xxch_dmix_mask[VAR_24] = VAR_28;
            }


            for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
                for (VAR_23 = 0; VAR_23 < VAR_20->xxch_mask_nbits; VAR_23++) {
                    if (VAR_20->xxch_dmix_mask[VAR_24] & (1U << VAR_23)) {
                        int VAR_31 = FUNC_6(&VAR_20->gb, 7);
                        int VAR_32 = (VAR_31 >> 6) - 1;
                        if (VAR_31 &= 63) {
                            VAR_29 = VAR_31 * 4 - 3;
                            if (VAR_29 >= VAR_11) {
                                FUNC_1(VAR_20->avctx, VAR_2, "Invalid XXCH downmix coefficient index (%d)\n", VAR_29);
                                return VAR_0;
                            }
                            *VAR_30++ = (VAR_15[VAR_29] ^ VAR_32) - VAR_32;
                        } else {
                            *VAR_30++ = 0;
                        }
                    }
                }
            }
        } else {
            VAR_20->xxch_dmix_embedded = 0;
        }

        break;
    }


    for (VAR_24 = VAR_22; VAR_24 < VAR_20->nchannels; VAR_24++) {
        VAR_20->nsubbands[VAR_24] = FUNC_6(&VAR_20->gb, 5) + 2;
        if (VAR_20->nsubbands[VAR_24] > VAR_8) {
            FUNC_1(VAR_20->avctx, VAR_2, "Invalid subband activity count\n");
            return VAR_0;
        }
    }


    for (VAR_24 = VAR_22; VAR_24 < VAR_20->nchannels; VAR_24++)
        VAR_20->subband_vq_start[VAR_24] = FUNC_6(&VAR_20->gb, 5) + 1;


    for (VAR_24 = VAR_22; VAR_24 < VAR_20->nchannels; VAR_24++) {
        if ((VAR_23 = FUNC_6(&VAR_20->gb, 3)) && VAR_21 == 128)
            VAR_23 += VAR_22 - 1;
        if (VAR_23 > VAR_20->nchannels) {
            FUNC_1(VAR_20->avctx, VAR_2, "Invalid joint intensity coding index\n");
            return VAR_0;
        }
        VAR_20->joint_intensity_index[VAR_24] = VAR_23;
    }


    for (VAR_24 = VAR_22; VAR_24 < VAR_20->nchannels; VAR_24++)
        VAR_20->transition_mode_sel[VAR_24] = FUNC_6(&VAR_20->gb, 2);


    for (VAR_24 = VAR_22; VAR_24 < VAR_20->nchannels; VAR_24++) {
        VAR_20->scale_factor_sel[VAR_24] = FUNC_6(&VAR_20->gb, 3);
        if (VAR_20->scale_factor_sel[VAR_24] == 7) {
            FUNC_1(VAR_20->avctx, VAR_2, "Invalid scale factor code book\n");
            return VAR_0;
        }
    }


    for (VAR_24 = VAR_22; VAR_24 < VAR_20->nchannels; VAR_24++) {
        VAR_20->bit_allocation_sel[VAR_24] = FUNC_6(&VAR_20->gb, 3);
        if (VAR_20->bit_allocation_sel[VAR_24] == 7) {
            FUNC_1(VAR_20->avctx, VAR_2, "Invalid bit allocation quantizer select\n");
            return VAR_0;
        }
    }


    for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++)
        for (VAR_24 = VAR_22; VAR_24 < VAR_20->nchannels; VAR_24++)
            VAR_20->quant_index_sel[VAR_24][VAR_23] = FUNC_6(&VAR_20->gb, VAR_18[VAR_23]);


    for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++)
        for (VAR_24 = VAR_22; VAR_24 < VAR_20->nchannels; VAR_24++)
            if (VAR_20->quant_index_sel[VAR_24][VAR_23] < VAR_17[VAR_23])
                VAR_20->scale_factor_adj[VAR_24][VAR_23] = VAR_19[FUNC_6(&VAR_20->gb, 2)];

    if (VAR_21 == 128) {



        if (FUNC_5(&VAR_20->gb, VAR_27 + VAR_26 * 8)) {
            FUNC_1(VAR_20->avctx, VAR_2, "Read past end of XXCH channel set header\n");
            return VAR_0;
        }
    } else {

        if (VAR_20->crc_present)
            FUNC_11(&VAR_20->gb, 16);
    }

    return 0;
}
