
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {int separate_colour_plane_flag; int qpprime_y_zero_transform_bypass_flag; } ;
struct TYPE_18__ {int is_reference; int field_pic_flag; int bottom_field_flag; int mb_adaptive_frame_field_flag; int log2_max_pic_order_cnt_lsb_minus4; int * scaling_lists_8x8; int scaling_lists_4x4; int redundant_pic_cnt_present_flag; int deblocking_filter_control_present_flag; int pic_order_present_flag; int entropy_coding_mode_flag; int direct_8x8_inference_flag; int delta_pic_order_always_zero_flag; scalar_t__ pic_order_cnt_type; scalar_t__ log2_max_frame_num_minus4; scalar_t__ num_ref_idx_l1_active_minus1; scalar_t__ num_ref_idx_l0_active_minus1; scalar_t__ pic_init_qp_minus26; int second_chroma_qp_index_offset; int chroma_qp_index_offset; int transform_8x8_mode_flag; int frame_mbs_only_flag; int weighted_bipred_idc; int weighted_pred_flag; int constrained_intra_pred_flag; int num_ref_frames; int frame_num; void** field_order_cnt; scalar_t__ slice_count; } ;
struct TYPE_15__ {TYPE_4__ h264_predictive; TYPE_5__ h264; } ;
struct vdpau_picture_context {TYPE_2__ info; } ;
typedef TYPE_4__ VdpPictureInfoH264Predictive ;
typedef TYPE_5__ VdpPictureInfoH264 ;
struct TYPE_16__ {int frame_num; } ;
struct TYPE_14__ {TYPE_6__* sps; TYPE_7__* pps; } ;
struct TYPE_22__ {scalar_t__ nal_ref_idc; scalar_t__ picture_structure; TYPE_3__ poc; TYPE_8__* cur_pic_ptr; TYPE_1__ ps; } ;
struct TYPE_21__ {int * field_poc; struct vdpau_picture_context* hwaccel_picture_private; } ;
struct TYPE_20__ {int * scaling_matrix8; int scaling_matrix4; int redundant_pic_cnt_present; int deblocking_filter_parameters_present; int pic_order_present; int cabac; scalar_t__* ref_count; scalar_t__ init_qp; int * chroma_qp_index_offset; int transform_8x8_mode; int weighted_bipred_idc; int weighted_pred; int constrained_intra_pred; } ;
struct TYPE_19__ {int log2_max_poc_lsb; int residual_color_transform_flag; int transform_bypass; int direct_8x8_inference_flag; int delta_pic_order_always_zero_flag; scalar_t__ poc_type; scalar_t__ log2_max_frame_num; int frame_mbs_only_flag; scalar_t__ mb_aff; int ref_frame_count; } ;
struct TYPE_13__ {TYPE_9__* priv_data; } ;
typedef TYPE_6__ SPS ;
typedef TYPE_7__ PPS ;
typedef TYPE_8__ H264Picture ;
typedef TYPE_9__ H264Context ;
typedef TYPE_10__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vdpau_picture_context*,int const*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_10__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2,
                                  const uint8_t *VAR_3, uint32_t VAR_4)
{
    H264Context * const VAR_5 = VAR_2->priv_data;
    const PPS *VAR_6 = VAR_5->ps.pps;
    const SPS *VAR_7 = VAR_5->ps.sps;
    H264Picture *VAR_8 = VAR_5->cur_pic_ptr;
    struct vdpau_picture_context *VAR_9 = VAR_8->hwaccel_picture_private;
    VdpPictureInfoH264 *VAR_10 = &VAR_9->info.h264;





    VAR_10->slice_count = 0;
    VAR_10->field_order_cnt[0] = FUNC_1(VAR_8->field_poc[0]);
    VAR_10->field_order_cnt[1] = FUNC_1(VAR_8->field_poc[1]);
    VAR_10->is_reference = VAR_5->nal_ref_idc != 0;
    VAR_10->frame_num = VAR_5->poc.frame_num;
    VAR_10->field_pic_flag = VAR_5->picture_structure != VAR_1;
    VAR_10->bottom_field_flag = VAR_5->picture_structure == VAR_0;
    VAR_10->num_ref_frames = VAR_7->ref_frame_count;
    VAR_10->mb_adaptive_frame_field_flag = VAR_7->mb_aff && !VAR_10->field_pic_flag;
    VAR_10->constrained_intra_pred_flag = VAR_6->constrained_intra_pred;
    VAR_10->weighted_pred_flag = VAR_6->weighted_pred;
    VAR_10->weighted_bipred_idc = VAR_6->weighted_bipred_idc;
    VAR_10->frame_mbs_only_flag = VAR_7->frame_mbs_only_flag;
    VAR_10->transform_8x8_mode_flag = VAR_6->transform_8x8_mode;
    VAR_10->chroma_qp_index_offset = VAR_6->chroma_qp_index_offset[0];
    VAR_10->second_chroma_qp_index_offset = VAR_6->chroma_qp_index_offset[1];
    VAR_10->pic_init_qp_minus26 = VAR_6->init_qp - 26;
    VAR_10->num_ref_idx_l0_active_minus1 = VAR_6->ref_count[0] - 1;
    VAR_10->num_ref_idx_l1_active_minus1 = VAR_6->ref_count[1] - 1;
    VAR_10->log2_max_frame_num_minus4 = VAR_7->log2_max_frame_num - 4;
    VAR_10->pic_order_cnt_type = VAR_7->poc_type;
    VAR_10->log2_max_pic_order_cnt_lsb_minus4 = VAR_7->poc_type ? 0 : VAR_7->log2_max_poc_lsb - 4;
    VAR_10->delta_pic_order_always_zero_flag = VAR_7->delta_pic_order_always_zero_flag;
    VAR_10->direct_8x8_inference_flag = VAR_7->direct_8x8_inference_flag;




    VAR_10->entropy_coding_mode_flag = VAR_6->cabac;
    VAR_10->pic_order_present_flag = VAR_6->pic_order_present;
    VAR_10->deblocking_filter_control_present_flag = VAR_6->deblocking_filter_parameters_present;
    VAR_10->redundant_pic_cnt_present_flag = VAR_6->redundant_pic_cnt_present;

    FUNC_2(VAR_10->scaling_lists_4x4, VAR_6->scaling_matrix4,
           sizeof(VAR_10->scaling_lists_4x4));
    FUNC_2(VAR_10->scaling_lists_8x8[0], VAR_6->scaling_matrix8[0],
           sizeof(VAR_10->scaling_lists_8x8[0]));
    FUNC_2(VAR_10->scaling_lists_8x8[1], VAR_6->scaling_matrix8[3],
           sizeof(VAR_10->scaling_lists_8x8[1]));

    FUNC_3(VAR_2);

    return FUNC_0(VAR_9, VAR_3, VAR_4);
}
