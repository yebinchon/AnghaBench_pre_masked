
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_17__ ;
typedef struct TYPE_19__ TYPE_16__ ;
typedef struct TYPE_18__ TYPE_15__ ;


struct TYPE_21__ {scalar_t__ preferred_transfer_characteristics; scalar_t__ present; } ;
struct TYPE_22__ {TYPE_1__ alternative_transfer; } ;
struct TYPE_23__ {TYPE_4__ const* sps; TYPE_16__* sps_ref; TYPE_5__ const* pps; TYPE_17__** sps_list; TYPE_16__* pps_ref; TYPE_17__** pps_list; } ;
struct TYPE_27__ {int mb_width; int mb_height; scalar_t__ cur_bit_depth_luma; scalar_t__ cur_chroma_format_idc; scalar_t__ bit_depth_luma; scalar_t__ chroma_format_idc; int context_initialized; int mb_num; int mb_stride; int b_stride; int chroma_y_shift; int width; int height; TYPE_15__* avctx; scalar_t__ current_slice; TYPE_6__ const* slice_ctx; TYPE_2__ sei; int setup_finished; TYPE_3__ ps; } ;
struct TYPE_26__ {size_t pps_id; } ;
struct TYPE_25__ {size_t sps_id; } ;
struct TYPE_24__ {int mb_width; int mb_height; scalar_t__ bit_depth_luma; scalar_t__ chroma_format_idc; scalar_t__ full_range; scalar_t__ colorspace; scalar_t__ color_trc; int color_primaries; scalar_t__ colour_description_present_flag; scalar_t__ video_signal_type_present_flag; int ref_frame_count; int level_idc; int sar; } ;
struct TYPE_20__ {scalar_t__ data; } ;
struct TYPE_19__ {scalar_t__ data; } ;
struct TYPE_18__ {int coded_width; int coded_height; int pix_fmt; scalar_t__ colorspace; scalar_t__ color_trc; int color_primaries; int color_range; int refs; int level; int profile; int sample_aspect_ratio; } ;
typedef TYPE_4__ const SPS ;
typedef TYPE_5__ PPS ;
typedef TYPE_6__ H264SliceContext ;
typedef TYPE_7__ H264Context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (TYPE_17__*) ;
 int FUNC_3 (TYPE_16__**) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_15__*,int ,char*,...) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_4__ const*) ;
 int FUNC_10 (TYPE_7__*,int) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(H264Context *VAR_8, const H264SliceContext *VAR_9, int VAR_10)
{
    const SPS *VAR_11;
    int VAR_12 = 0, VAR_13, VAR_14;

    if (VAR_10) {
        FUNC_3(&VAR_8->ps.pps_ref);
        VAR_8->ps.pps = ((void*)0);
        VAR_8->ps.pps_ref = FUNC_2(VAR_8->ps.pps_list[VAR_9->pps_id]);
        if (!VAR_8->ps.pps_ref)
            return FUNC_0(VAR_7);
        VAR_8->ps.pps = (const PPS*)VAR_8->ps.pps_ref->data;
    }

    if (VAR_8->ps.sps != (const SPS*)VAR_8->ps.sps_list[VAR_8->ps.pps->sps_id]->data) {
        FUNC_3(&VAR_8->ps.sps_ref);
        VAR_8->ps.sps = ((void*)0);
        VAR_8->ps.sps_ref = FUNC_2(VAR_8->ps.sps_list[VAR_8->ps.pps->sps_id]);
        if (!VAR_8->ps.sps_ref)
            return FUNC_0(VAR_7);
        VAR_8->ps.sps = (const SPS*)VAR_8->ps.sps_ref->data;

        if (VAR_8->mb_width != VAR_8->ps.sps->mb_width ||
            VAR_8->mb_height != VAR_8->ps.sps->mb_height ||
            VAR_8->cur_bit_depth_luma != VAR_8->ps.sps->bit_depth_luma ||
            VAR_8->cur_chroma_format_idc != VAR_8->ps.sps->chroma_format_idc
        )
            VAR_12 = 1;

        if (VAR_8->bit_depth_luma != VAR_8->ps.sps->bit_depth_luma ||
            VAR_8->chroma_format_idc != VAR_8->ps.sps->chroma_format_idc)
            VAR_12 = 1;
    }
    VAR_11 = VAR_8->ps.sps;

    VAR_13 = (VAR_8->context_initialized &&
                    ( 16*VAR_11->mb_width != VAR_8->avctx->coded_width
                     || 16*VAR_11->mb_height != VAR_8->avctx->coded_height
                     || VAR_8->cur_bit_depth_luma != VAR_11->bit_depth_luma
                     || VAR_8->cur_chroma_format_idc != VAR_11->chroma_format_idc
                     || VAR_8->mb_width != VAR_11->mb_width
                     || VAR_8->mb_height != VAR_11->mb_height
                    ));
    if (VAR_8->avctx->pix_fmt == VAR_6
        || (FUNC_13(VAR_8->avctx->pix_fmt) != FUNC_13(FUNC_10(VAR_8, 0))))
        VAR_13 = 1;

    if (VAR_10 && FUNC_4(VAR_11->sar, VAR_8->avctx->sample_aspect_ratio))
        VAR_13 = 1;

    if (!VAR_8->setup_finished) {
        VAR_8->avctx->profile = FUNC_9(VAR_11);
        VAR_8->avctx->level = VAR_11->level_idc;
        VAR_8->avctx->refs = VAR_11->ref_frame_count;

        VAR_8->mb_width = VAR_11->mb_width;
        VAR_8->mb_height = VAR_11->mb_height;
        VAR_8->mb_num = VAR_8->mb_width * VAR_8->mb_height;
        VAR_8->mb_stride = VAR_8->mb_width + 1;

        VAR_8->b_stride = VAR_8->mb_width * 4;

        VAR_8->chroma_y_shift = VAR_11->chroma_format_idc <= 1;

        VAR_8->width = 16 * VAR_8->mb_width;
        VAR_8->height = 16 * VAR_8->mb_height;

        VAR_14 = FUNC_12(VAR_8);
        if (VAR_14 < 0)
            return VAR_14;

        if (VAR_11->video_signal_type_present_flag) {
            VAR_8->avctx->color_range = VAR_11->full_range > 0 ? VAR_0
                                                        : VAR_1;
            if (VAR_11->colour_description_present_flag) {
                if (VAR_8->avctx->colorspace != VAR_11->colorspace)
                    VAR_12 = 1;
                VAR_8->avctx->color_primaries = VAR_11->color_primaries;
                VAR_8->avctx->color_trc = VAR_11->color_trc;
                VAR_8->avctx->colorspace = VAR_11->colorspace;
            }
        }

        if (VAR_8->sei.alternative_transfer.present &&
            FUNC_5(VAR_8->sei.alternative_transfer.preferred_transfer_characteristics) &&
            VAR_8->sei.alternative_transfer.preferred_transfer_characteristics != VAR_2) {
            VAR_8->avctx->color_trc = VAR_8->sei.alternative_transfer.preferred_transfer_characteristics;
        }
    }

    if (!VAR_8->context_initialized || VAR_13 || VAR_12) {
        int VAR_15 = VAR_8->context_initialized;
        VAR_8->context_initialized = 0;
        if (VAR_9 != VAR_8->slice_ctx) {
            FUNC_7(VAR_8->avctx, VAR_4,
                   "changing width %d -> %d / height %d -> %d on "
                   "slice %d\n",
                   VAR_8->width, VAR_8->avctx->coded_width,
                   VAR_8->height, VAR_8->avctx->coded_height,
                   VAR_8->current_slice + 1);
            return VAR_3;
        }

        FUNC_1(VAR_10);

        if (VAR_15)
            FUNC_8(VAR_8);

        if ((VAR_14 = FUNC_10(VAR_8, 1)) < 0)
            return VAR_14;
        VAR_8->avctx->pix_fmt = VAR_14;

        FUNC_7(VAR_8->avctx, VAR_5, "Reinit context to %dx%d, "
               "pix_fmt: %s\n", VAR_8->width, VAR_8->height, FUNC_6(VAR_8->avctx->pix_fmt));

        if ((VAR_14 = FUNC_11(VAR_8)) < 0) {
            FUNC_7(VAR_8->avctx, VAR_4,
                   "h264_slice_header_init() failed\n");
            return VAR_14;
        }
    }

    return 0;
}
