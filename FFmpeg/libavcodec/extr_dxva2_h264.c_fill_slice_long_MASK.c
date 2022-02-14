
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;


struct TYPE_29__ {TYPE_7__* priv_data; } ;
struct TYPE_28__ {unsigned int BSNALunitDataLocation; unsigned int SliceBytesInBuffer; int slice_type; int luma_log2_weight_denom; int chroma_log2_weight_denom; unsigned int num_ref_idx_l0_active_minus1; unsigned int num_ref_idx_l1_active_minus1; int slice_alpha_c0_offset_div2; int slice_beta_offset_div2; int**** Weights; int disable_deblocking_filter_idc; scalar_t__ slice_id; int cabac_init_idc; int direct_spatial_mv_pred_flag; int redundant_pic_cnt; scalar_t__ slice_qp_delta; scalar_t__ slice_qs_delta; TYPE_13__** RefPicList; scalar_t__ Reserved8Bits; scalar_t__ BitOffsetToSliceData; scalar_t__ NumMbsForSlice; scalar_t__ first_mb_in_slice; scalar_t__ wBadSliceChopping; } ;
struct TYPE_22__ {TYPE_1__* pps; } ;
struct TYPE_27__ {int mb_width; scalar_t__ current_slice; TYPE_2__ ps; TYPE_5__* slice_ctx; } ;
struct TYPE_26__ {int f; } ;
struct TYPE_24__ {int luma_log2_weight_denom; int chroma_log2_weight_denom; int*** luma_weight; int**** chroma_weight; scalar_t__* chroma_weight_flag; scalar_t__* luma_weight_flag; } ;
struct TYPE_25__ {int mb_y; int list_count; unsigned int* ref_count; int slice_alpha_c0_offset; int slice_beta_offset; scalar_t__ slice_type; int deblocking_filter; int cabac_init_idc; int direct_spatial_mv_pred; int redundant_pic_count; scalar_t__ qscale; TYPE_4__ pwt; TYPE_3__** ref_list; scalar_t__ slice_type_fixed; int gb; scalar_t__ mb_x; } ;
struct TYPE_23__ {scalar_t__ reference; TYPE_6__* parent; } ;
struct TYPE_21__ {scalar_t__ cabac; scalar_t__ init_qp; } ;
struct TYPE_20__ {int bPicEntry; } ;
typedef TYPE_5__ H264SliceContext ;
typedef TYPE_6__ H264Picture ;
typedef TYPE_7__ H264Context ;
typedef TYPE_8__ DXVA_Slice_H264_Long ;
typedef int DXVA_PicParams_H264 ;
typedef int AVDXVAContext ;
typedef TYPE_9__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*,int *) ;
 unsigned int FUNC_2 (TYPE_13__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_7__ const*) ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_4 (TYPE_9__*,int *,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_13__*,unsigned int,int) ;
 scalar_t__ FUNC_7 (int *) ;
 unsigned int FUNC_8 (int const*,unsigned int) ;
 int FUNC_9 (TYPE_8__*,int ,int) ;

__attribute__((used)) static void FUNC_10(AVCodecContext *VAR_3, DXVA_Slice_H264_Long *VAR_4,
                            const DXVA_PicParams_H264 *VAR_5, unsigned VAR_6, unsigned VAR_7)
{
    const H264Context *VAR_8 = VAR_3->priv_data;
    H264SliceContext *VAR_9 = &VAR_8->slice_ctx[0];
    AVDXVAContext *VAR_10 = FUNC_0(VAR_3);
    unsigned VAR_11;

    FUNC_9(VAR_4, 0, sizeof(*VAR_4));
    VAR_4->BSNALunitDataLocation = VAR_6;
    VAR_4->SliceBytesInBuffer = VAR_7;
    VAR_4->wBadSliceChopping = 0;

    VAR_4->first_mb_in_slice = (VAR_9->mb_y >> FUNC_3(VAR_8)) * VAR_8->mb_width + VAR_9->mb_x;
    VAR_4->NumMbsForSlice = 0;
    VAR_4->BitOffsetToSliceData = FUNC_7(&VAR_9->gb) - 8;
    VAR_4->slice_type = FUNC_5(VAR_9);
    if (VAR_9->slice_type_fixed)
        VAR_4->slice_type += 5;
    VAR_4->luma_log2_weight_denom = VAR_9->pwt.luma_log2_weight_denom;
    VAR_4->chroma_log2_weight_denom = VAR_9->pwt.chroma_log2_weight_denom;
    if (VAR_9->list_count > 0)
        VAR_4->num_ref_idx_l0_active_minus1 = VAR_9->ref_count[0] - 1;
    if (VAR_9->list_count > 1)
        VAR_4->num_ref_idx_l1_active_minus1 = VAR_9->ref_count[1] - 1;
    VAR_4->slice_alpha_c0_offset_div2 = VAR_9->slice_alpha_c0_offset / 2;
    VAR_4->slice_beta_offset_div2 = VAR_9->slice_beta_offset / 2;
    VAR_4->Reserved8Bits = 0;

    for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
        unsigned VAR_12;
        for (VAR_12 = 0; VAR_12 < FUNC_2(VAR_4->RefPicList[VAR_11]); VAR_12++) {
            if (VAR_11 < VAR_9->list_count && VAR_12 < VAR_9->ref_count[VAR_11]) {
                const H264Picture *VAR_13 = VAR_9->ref_list[VAR_11][VAR_12].parent;
                unsigned VAR_14;
                unsigned VAR_15;
                if (FUNC_1(VAR_3, VAR_10) & VAR_1)
                    VAR_15 = FUNC_4(VAR_3, VAR_10, VAR_13->f);
                else
                    VAR_15 = FUNC_8(VAR_5, FUNC_4(VAR_3, VAR_10, VAR_13->f));
                FUNC_6(&VAR_4->RefPicList[VAR_11][VAR_12], VAR_15,
                                   VAR_9->ref_list[VAR_11][VAR_12].reference == VAR_2);
                for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
                    int VAR_16, VAR_17;
                    if (VAR_14 == 0 && VAR_9->pwt.luma_weight_flag[VAR_11]) {
                        VAR_16 = VAR_9->pwt.luma_weight[VAR_12][VAR_11][0];
                        VAR_17 = VAR_9->pwt.luma_weight[VAR_12][VAR_11][1];
                    } else if (VAR_14 >= 1 && VAR_9->pwt.chroma_weight_flag[VAR_11]) {
                        VAR_16 = VAR_9->pwt.chroma_weight[VAR_12][VAR_11][VAR_14-1][0];
                        VAR_17 = VAR_9->pwt.chroma_weight[VAR_12][VAR_11][VAR_14-1][1];
                    } else {
                        VAR_16 = 1 << (VAR_14 == 0 ? VAR_9->pwt.luma_log2_weight_denom :
                                               VAR_9->pwt.chroma_log2_weight_denom);
                        VAR_17 = 0;
                    }
                    VAR_4->Weights[VAR_11][VAR_12][VAR_14][0] = VAR_16;
                    VAR_4->Weights[VAR_11][VAR_12][VAR_14][1] = VAR_17;
                }
            } else {
                unsigned VAR_18;
                VAR_4->RefPicList[VAR_11][VAR_12].bPicEntry = 0xff;
                for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
                    VAR_4->Weights[VAR_11][VAR_12][VAR_18][0] = 0;
                    VAR_4->Weights[VAR_11][VAR_12][VAR_18][1] = 0;
                }
            }
        }
    }
    VAR_4->slice_qs_delta = 0;
    VAR_4->slice_qp_delta = VAR_9->qscale - VAR_8->ps.pps->init_qp;
    VAR_4->redundant_pic_cnt = VAR_9->redundant_pic_count;
    if (VAR_9->slice_type == VAR_0)
        VAR_4->direct_spatial_mv_pred_flag = VAR_9->direct_spatial_mv_pred;
    VAR_4->cabac_init_idc = VAR_8->ps.pps->cabac ? VAR_9->cabac_init_idc : 0;
    if (VAR_9->deblocking_filter < 2)
        VAR_4->disable_deblocking_filter_idc = 1 - VAR_9->deblocking_filter;
    else
        VAR_4->disable_deblocking_filter_idc = VAR_9->deblocking_filter;
    VAR_4->slice_id = VAR_8->current_slice - 1;
}
