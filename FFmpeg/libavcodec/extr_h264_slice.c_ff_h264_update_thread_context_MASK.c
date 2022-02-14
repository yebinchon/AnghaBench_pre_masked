
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_24__ ;
typedef struct TYPE_31__ TYPE_23__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_14__ ;


struct TYPE_39__ {int frame_num; int prev_frame_num; int frame_num_offset; int prev_frame_num_offset; int poc_lsb; int prev_poc_lsb; int poc_msb; int prev_poc_msb; } ;
struct TYPE_38__ {TYPE_6__* priv_data; } ;
struct TYPE_34__ {TYPE_24__* buf_ref; } ;
struct TYPE_35__ {TYPE_3__ a53_caption; } ;
struct TYPE_29__ {TYPE_2__* f; } ;
struct TYPE_30__ {TYPE_24__* sps_ref; TYPE_5__ const* sps; TYPE_24__* pps_ref; int const* pps; TYPE_24__** pps_list; TYPE_24__** sps_list; } ;
struct TYPE_37__ {int context_initialized; scalar_t__ width; scalar_t__ height; scalar_t__ mb_width; scalar_t__ mb_height; int recovery_frame; TYPE_8__ poc; int droppable; int cur_pic_ptr; TYPE_4__ sei; int frame_recovered; TYPE_8__* delayed_pic; TYPE_8__* long_ref; TYPE_8__* short_ref; int short_ref_count; int long_ref_count; int explicit_ref_marking; int mmco_reset; int nb_mmco; TYPE_8__* mmco; int next_outputed_poc; int next_output_pic; TYPE_8__* last_pocs; int nal_length_size; int is_avc; int workaround_bugs; int enable_er; TYPE_14__ cur_pic; TYPE_14__* DPB; int mb_aff_frame; int picture_structure; int first_field; int coded_picture_number; int height_from_caller; int width_from_caller; TYPE_23__* avctx; TYPE_8__* block_offset; int x264_build; int b_stride; int mb_stride; int mb_num; TYPE_1__ ps; } ;
struct TYPE_36__ {scalar_t__ bit_depth_luma; scalar_t__ chroma_format_idc; scalar_t__ colorspace; } ;
struct TYPE_33__ {scalar_t__* buf; } ;
struct TYPE_32__ {scalar_t__ data; } ;
struct TYPE_31__ {int height; int width; int coded_width; int coded_height; } ;
typedef TYPE_5__ SPS ;
typedef int PPS ;
typedef TYPE_6__ H264Context ;
typedef TYPE_7__ const AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_24__**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_6__*,TYPE_6__*) ;
 void* FUNC_3 (TYPE_24__*) ;
 int FUNC_4 (TYPE_24__**) ;
 int FUNC_5 (TYPE_23__*,int ,char*) ;
 int FUNC_6 (TYPE_8__*,TYPE_8__*,int,TYPE_6__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_14__*,TYPE_14__*) ;
 int FUNC_9 (TYPE_6__*,TYPE_14__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_8__*,TYPE_8__*,int) ;

int FUNC_12(AVCodecContext *VAR_4,
                                  const AVCodecContext *VAR_5)
{
    H264Context *VAR_6 = VAR_4->priv_data, *VAR_7 = VAR_5->priv_data;
    int VAR_8 = VAR_6->context_initialized, VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11, VAR_12;

    if (VAR_4 == VAR_5)
        return 0;





    if (VAR_8 &&
        (VAR_6->width != VAR_7->width ||
         VAR_6->height != VAR_7->height ||
         VAR_6->mb_width != VAR_7->mb_width ||
         VAR_6->mb_height != VAR_7->mb_height ||
         !VAR_6->ps.sps ||
         VAR_6->ps.sps->bit_depth_luma != VAR_7->ps.sps->bit_depth_luma ||
         VAR_6->ps.sps->chroma_format_idc != VAR_7->ps.sps->chroma_format_idc ||
         VAR_6->ps.sps->colorspace != VAR_7->ps.sps->colorspace)) {
        VAR_10 = 1;
    }


    FUNC_11(VAR_6->block_offset, VAR_7->block_offset, sizeof(VAR_6->block_offset));


    for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_6->ps.sps_list); VAR_11++) {
        FUNC_4(&VAR_6->ps.sps_list[VAR_11]);
        if (VAR_7->ps.sps_list[VAR_11]) {
            VAR_6->ps.sps_list[VAR_11] = FUNC_3(VAR_7->ps.sps_list[VAR_11]);
            if (!VAR_6->ps.sps_list[VAR_11])
                return FUNC_0(VAR_1);
        }
    }
    for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_6->ps.pps_list); VAR_11++) {
        FUNC_4(&VAR_6->ps.pps_list[VAR_11]);
        if (VAR_7->ps.pps_list[VAR_11]) {
            VAR_6->ps.pps_list[VAR_11] = FUNC_3(VAR_7->ps.pps_list[VAR_11]);
            if (!VAR_6->ps.pps_list[VAR_11])
                return FUNC_0(VAR_1);
        }
    }

    FUNC_4(&VAR_6->ps.pps_ref);
    FUNC_4(&VAR_6->ps.sps_ref);
    VAR_6->ps.pps = ((void*)0);
    VAR_6->ps.sps = ((void*)0);
    if (VAR_7->ps.pps_ref) {
        VAR_6->ps.pps_ref = FUNC_3(VAR_7->ps.pps_ref);
        if (!VAR_6->ps.pps_ref)
            return FUNC_0(VAR_1);
        VAR_6->ps.pps = (const PPS*)VAR_6->ps.pps_ref->data;
    }
    if (VAR_7->ps.sps_ref) {
        VAR_6->ps.sps_ref = FUNC_3(VAR_7->ps.sps_ref);
        if (!VAR_6->ps.sps_ref)
            return FUNC_0(VAR_1);
        VAR_6->ps.sps = (const SPS*)VAR_6->ps.sps_ref->data;
    }

    if (VAR_10 || !VAR_8) {
        VAR_6->width = VAR_7->width;
        VAR_6->height = VAR_7->height;
        VAR_6->mb_height = VAR_7->mb_height;
        VAR_6->mb_width = VAR_7->mb_width;
        VAR_6->mb_num = VAR_7->mb_num;
        VAR_6->mb_stride = VAR_7->mb_stride;
        VAR_6->b_stride = VAR_7->b_stride;
        VAR_6->x264_build = VAR_7->x264_build;

        if (VAR_6->context_initialized || VAR_7->context_initialized) {
            if ((VAR_9 = FUNC_10(VAR_6)) < 0) {
                FUNC_5(VAR_6->avctx, VAR_0, "h264_slice_header_init() failed");
                return VAR_9;
            }
        }


        FUNC_11(VAR_6->block_offset, VAR_7->block_offset, sizeof(VAR_6->block_offset));
    }

    VAR_6->avctx->coded_height = VAR_7->avctx->coded_height;
    VAR_6->avctx->coded_width = VAR_7->avctx->coded_width;
    VAR_6->avctx->width = VAR_7->avctx->width;
    VAR_6->avctx->height = VAR_7->avctx->height;
    VAR_6->width_from_caller = VAR_7->width_from_caller;
    VAR_6->height_from_caller = VAR_7->height_from_caller;
    VAR_6->coded_picture_number = VAR_7->coded_picture_number;
    VAR_6->first_field = VAR_7->first_field;
    VAR_6->picture_structure = VAR_7->picture_structure;
    VAR_6->mb_aff_frame = VAR_7->mb_aff_frame;
    VAR_6->droppable = VAR_7->droppable;

    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
        FUNC_9(VAR_6, &VAR_6->DPB[VAR_11]);
        if (VAR_7->DPB[VAR_11].f->buf[0] &&
            (VAR_12 = FUNC_8(VAR_6, &VAR_6->DPB[VAR_11], &VAR_7->DPB[VAR_11])) < 0)
            return VAR_12;
    }

    VAR_6->cur_pic_ptr = FUNC_2(VAR_7->cur_pic_ptr, VAR_6, VAR_7);
    FUNC_9(VAR_6, &VAR_6->cur_pic);
    if (VAR_7->cur_pic.f->buf[0]) {
        VAR_12 = FUNC_8(VAR_6, &VAR_6->cur_pic, &VAR_7->cur_pic);
        if (VAR_12 < 0)
            return VAR_12;
    }

    VAR_6->enable_er = VAR_7->enable_er;
    VAR_6->workaround_bugs = VAR_7->workaround_bugs;
    VAR_6->droppable = VAR_7->droppable;


    VAR_6->is_avc = VAR_7->is_avc;
    VAR_6->nal_length_size = VAR_7->nal_length_size;

    FUNC_11(&VAR_6->poc, &VAR_7->poc, sizeof(VAR_6->poc));

    FUNC_11(VAR_6->short_ref, VAR_7->short_ref, sizeof(VAR_6->short_ref));
    FUNC_11(VAR_6->long_ref, VAR_7->long_ref, sizeof(VAR_6->long_ref));
    FUNC_11(VAR_6->delayed_pic, VAR_7->delayed_pic, sizeof(VAR_6->delayed_pic));
    FUNC_11(VAR_6->last_pocs, VAR_7->last_pocs, sizeof(VAR_6->last_pocs));

    VAR_6->next_output_pic = VAR_7->next_output_pic;
    VAR_6->next_outputed_poc = VAR_7->next_outputed_poc;

    FUNC_11(VAR_6->mmco, VAR_7->mmco, sizeof(VAR_6->mmco));
    VAR_6->nb_mmco = VAR_7->nb_mmco;
    VAR_6->mmco_reset = VAR_7->mmco_reset;
    VAR_6->explicit_ref_marking = VAR_7->explicit_ref_marking;
    VAR_6->long_ref_count = VAR_7->long_ref_count;
    VAR_6->short_ref_count = VAR_7->short_ref_count;

    FUNC_6(VAR_6->short_ref, VAR_7->short_ref, 32, VAR_6, VAR_7);
    FUNC_6(VAR_6->long_ref, VAR_7->long_ref, 32, VAR_6, VAR_7);
    FUNC_6(VAR_6->delayed_pic, VAR_7->delayed_pic,
                       VAR_3 + 2, VAR_6, VAR_7);

    VAR_6->frame_recovered = VAR_7->frame_recovered;

    FUNC_4(&VAR_6->sei.a53_caption.buf_ref);
    if (VAR_7->sei.a53_caption.buf_ref) {
        VAR_6->sei.a53_caption.buf_ref = FUNC_3(VAR_7->sei.a53_caption.buf_ref);
        if (!VAR_6->sei.a53_caption.buf_ref)
            return FUNC_0(VAR_1);
    }

    if (!VAR_6->cur_pic_ptr)
        return 0;

    if (!VAR_6->droppable) {
        VAR_9 = FUNC_7(VAR_6);
        VAR_6->poc.prev_poc_msb = VAR_6->poc.poc_msb;
        VAR_6->poc.prev_poc_lsb = VAR_6->poc.poc_lsb;
    }
    VAR_6->poc.prev_frame_num_offset = VAR_6->poc.frame_num_offset;
    VAR_6->poc.prev_frame_num = VAR_6->poc.frame_num;

    VAR_6->recovery_frame = VAR_7->recovery_frame;

    return VAR_9;
}
