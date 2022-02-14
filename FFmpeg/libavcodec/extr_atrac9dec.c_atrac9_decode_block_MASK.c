
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_45__ {int (* imdct_half ) (TYPE_7__*,scalar_t__,int ) ;} ;
struct TYPE_44__ {int q_unit_cnt; int reuseable; int band_count; int band_ext_q_unit; int stereo_q_unit; int has_band_ext; int cpe_base_channel; int* is_signs; int q_unit_cnt_prev; TYPE_5__* channel; scalar_t__ has_band_ext_data; } ;
struct TYPE_43__ {int q_unit_cnt; int* scalefactors; int* q_coeffs_fine; int* q_coeffs_coarse; int* precision_coarse; int prev_win; int coeffs; scalar_t__* precision_fine; } ;
struct TYPE_42__ {int samplerate_idx; int frame_log2; scalar_t__ temp; int imdct_win; TYPE_1__* fdsp; TYPE_7__ imdct; TYPE_2__* block_config; int avctx; } ;
struct TYPE_41__ {scalar_t__* extended_data; } ;
struct TYPE_40__ {scalar_t__* type; int** plane_map; } ;
struct TYPE_39__ {int (* vector_fmul_window ) (float*,int ,scalar_t__,int ,int const) ;} ;
typedef int GetBitContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ ATRAC9Context ;
typedef TYPE_5__ ATRAC9ChannelData ;
typedef TYPE_6__ ATRAC9BlockData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_4__*,TYPE_6__*,int const) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,int const) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*,int const) ;
 int* VAR_4 ;
 void** VAR_5 ;
 size_t* VAR_6 ;
 int FUNC_4 (int ,int ,char*,...) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_6__*,TYPE_5__*) ;
 int const FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,scalar_t__,int) ;
 int FUNC_11 (int*,int ,int) ;
 scalar_t__ FUNC_12 (TYPE_4__*,TYPE_6__*,int *,int const) ;
 scalar_t__ FUNC_13 (TYPE_4__*,TYPE_6__*,int *) ;
 int FUNC_14 (TYPE_4__*,TYPE_6__*,TYPE_5__*,int *) ;
 int FUNC_15 (TYPE_4__*,TYPE_6__*,TYPE_5__*,int *) ;
 scalar_t__ FUNC_16 (TYPE_4__*,TYPE_6__*,TYPE_5__*,int *,int,int const) ;
 int FUNC_17 (TYPE_7__*,scalar_t__,int ) ;
 int FUNC_18 (float*,int ,scalar_t__,int ,int const) ;

__attribute__((used)) static int FUNC_19(ATRAC9Context *VAR_7, GetBitContext *VAR_8,
                               ATRAC9BlockData *VAR_9, AVFrame *VAR_10,
                               int VAR_11, int VAR_12)
{
    const int VAR_13 = !FUNC_9(VAR_8);
    const int VAR_14 = FUNC_9(VAR_8);
    const int VAR_15 = VAR_7->block_config->type[VAR_12] == VAR_0;

    if (VAR_7->block_config->type[VAR_12] == VAR_1) {
        ATRAC9ChannelData *VAR_16 = &VAR_9->channel[0];
        const int VAR_17 = VAR_14 ? 8 : 4;
        VAR_16->q_unit_cnt = VAR_9->q_unit_cnt = 2;

        FUNC_11(VAR_16->scalefactors, 0, sizeof(VAR_16->scalefactors));
        FUNC_11(VAR_16->q_coeffs_fine, 0, sizeof(VAR_16->q_coeffs_fine));
        FUNC_11(VAR_16->q_coeffs_coarse, 0, sizeof(VAR_16->q_coeffs_coarse));

        for (int VAR_18 = 0; VAR_18 < VAR_9->q_unit_cnt; VAR_18++) {
            VAR_16->scalefactors[VAR_18] = FUNC_8(VAR_8, 5);
            VAR_16->precision_coarse[VAR_18] = VAR_17;
            VAR_16->precision_fine[VAR_18] = 0;
        }

        for (int VAR_19 = 0; VAR_19 < VAR_16->q_unit_cnt; VAR_19++) {
            const int VAR_20 = VAR_4[VAR_19 + 0];
            const int VAR_21 = VAR_4[VAR_19 + 1];
            for (int VAR_22 = VAR_20; VAR_22 < VAR_21; VAR_22++)
                VAR_16->q_coeffs_coarse[VAR_22] = FUNC_8(VAR_8, VAR_16->precision_coarse[VAR_19] + 1);
        }

        FUNC_7 (VAR_7, VAR_9, VAR_16);
        FUNC_3(VAR_7, VAR_9, 0);

        goto imdct;
    }

    if (VAR_13 && VAR_14) {
        FUNC_4(VAR_7->avctx, VAR_3, "Invalid block flags!\n");
        return VAR_2;
    }


    if (!VAR_14) {
        int VAR_23, VAR_24;
        const int VAR_25 = VAR_7->samplerate_idx > 7 ? 1 : 3;
        VAR_9->reuseable = 0;
        VAR_9->band_count = FUNC_8(VAR_8, 4) + VAR_25;
        VAR_9->q_unit_cnt = VAR_5[VAR_9->band_count];

        VAR_9->band_ext_q_unit = VAR_9->stereo_q_unit = VAR_9->q_unit_cnt;

        if (VAR_9->band_count > VAR_6[VAR_7->samplerate_idx]) {
            FUNC_4(VAR_7->avctx, VAR_3, "Invalid band count %i!\n",
                   VAR_9->band_count);
            return VAR_2;
        }

        if (VAR_15) {
            VAR_23 = FUNC_8(VAR_8, 4) + VAR_25;
            if (VAR_23 > VAR_9->band_count) {
                FUNC_4(VAR_7->avctx, VAR_3, "Invalid stereo band %i!\n",
                       VAR_23);
                return VAR_2;
            }
            VAR_9->stereo_q_unit = VAR_5[VAR_23];
        }

        VAR_9->has_band_ext = FUNC_9(VAR_8);
        if (VAR_9->has_band_ext) {
            VAR_24 = FUNC_8(VAR_8, 4) + VAR_25;
            if (VAR_24 < VAR_9->band_count) {
                FUNC_4(VAR_7->avctx, VAR_3, "Invalid extension band %i!\n",
                       VAR_24);
                return VAR_2;
            }
            VAR_9->band_ext_q_unit = VAR_5[VAR_24];
        }
        VAR_9->reuseable = 1;
    }
    if (!VAR_9->reuseable) {
        FUNC_4(VAR_7->avctx, VAR_3, "invalid block reused!\n");
        return VAR_2;
    }


    if (FUNC_13(VAR_7, VAR_9, VAR_8))
        return VAR_2;


    VAR_9->cpe_base_channel = 0;
    if (VAR_15) {
        VAR_9->cpe_base_channel = FUNC_9(VAR_8);
        if (FUNC_9(VAR_8)) {
            for (int VAR_26 = VAR_9->stereo_q_unit; VAR_26 < VAR_9->q_unit_cnt; VAR_26++)
                VAR_9->is_signs[VAR_26] = 1 - 2*FUNC_9(VAR_8);
        } else {
            for (int VAR_27 = 0; VAR_27 < FUNC_0(VAR_9->is_signs); VAR_27++)
                VAR_9->is_signs[VAR_27] = 1;
        }
    }


    if (FUNC_12(VAR_7, VAR_9, VAR_8, VAR_15))
        return VAR_2;


    for (int VAR_28 = 0; VAR_28 <= VAR_15; VAR_28++) {
        ATRAC9ChannelData *VAR_29 = &VAR_9->channel[VAR_28];
        VAR_29->q_unit_cnt = VAR_28 == VAR_9->cpe_base_channel ? VAR_9->q_unit_cnt :
                                                   VAR_9->stereo_q_unit;
        if (FUNC_16(VAR_7, VAR_9, VAR_29, VAR_8, VAR_28, VAR_13))
            return VAR_2;

        FUNC_6 (VAR_7, VAR_9, VAR_29);
        FUNC_5 (VAR_7, VAR_9, VAR_29);
        FUNC_14(VAR_7, VAR_9, VAR_29, VAR_8);
        FUNC_15 (VAR_7, VAR_9, VAR_29, VAR_8);
        FUNC_7 (VAR_7, VAR_9, VAR_29);
    }

    VAR_9->q_unit_cnt_prev = VAR_9->has_band_ext ? VAR_9->band_ext_q_unit : VAR_9->q_unit_cnt;

    FUNC_2(VAR_7, VAR_9, VAR_15);
    FUNC_3 (VAR_7, VAR_9, VAR_15);

    if (VAR_9->has_band_ext && VAR_9->has_band_ext_data)
        FUNC_1 (VAR_7, VAR_9, VAR_15);

imdct:
    for (int VAR_30 = 0; VAR_30 <= VAR_15; VAR_30++) {
        ATRAC9ChannelData *VAR_31 = &VAR_9->channel[VAR_30];
        const int VAR_32 = VAR_7->block_config->plane_map[VAR_12][VAR_30];
        const int VAR_33 = 1 << VAR_7->frame_log2;
        const ptrdiff_t VAR_34 = VAR_33*VAR_11*sizeof(float);
        float *VAR_35 = (float *)(VAR_10->extended_data[VAR_32] + VAR_34);

        VAR_7->imdct.imdct_half(&VAR_7->imdct, VAR_7->temp, VAR_31->coeffs);
        VAR_7->fdsp->vector_fmul_window(VAR_35, VAR_31->prev_win, VAR_7->temp,
                                    VAR_7->imdct_win, VAR_33 >> 1);
        FUNC_10(VAR_31->prev_win, VAR_7->temp + (VAR_33 >> 1), sizeof(float)*VAR_33 >> 1);
    }

    return 0;
}
