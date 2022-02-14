
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int delta_chroma_log2_weight_denom; int luma_log2_weight_denom; scalar_t__** ChromaOffsetL1; scalar_t__** delta_chroma_weight_l1; scalar_t__** luma_offset_l1; scalar_t__** delta_luma_weight_l1; scalar_t__** ChromaOffsetL0; scalar_t__** delta_chroma_weight_l0; scalar_t__** luma_offset_l0; scalar_t__** delta_luma_weight_l0; } ;
typedef TYPE_4__ VASliceParameterBufferHEVC ;
struct TYPE_12__ {TYPE_2__* sps; TYPE_1__* pps; } ;
struct TYPE_15__ {TYPE_3__ ps; } ;
struct TYPE_14__ {scalar_t__ slice_type; int luma_log2_weight_denom; int chroma_log2_weight_denom; int* nb_refs; scalar_t__** chroma_offset_l1; scalar_t__** chroma_weight_l1; scalar_t__** luma_offset_l1; scalar_t__** luma_weight_l1; scalar_t__** chroma_offset_l0; scalar_t__** chroma_weight_l0; scalar_t__** luma_offset_l0; scalar_t__** luma_weight_l0; } ;
struct TYPE_11__ {scalar_t__ chroma_format_idc; } ;
struct TYPE_10__ {int weighted_bipred_flag; int weighted_pred_flag; } ;
typedef TYPE_5__ SliceHeader ;
typedef TYPE_6__ HEVCContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (scalar_t__**,int ,int) ;

__attribute__((used)) static void FUNC_1(const HEVCContext *VAR_5,
                                   const SliceHeader *VAR_6,
                                   VASliceParameterBufferHEVC *VAR_7)
{
    int VAR_8;

    FUNC_0(VAR_7->delta_luma_weight_l0, 0, sizeof(VAR_7->delta_luma_weight_l0));
    FUNC_0(VAR_7->delta_luma_weight_l1, 0, sizeof(VAR_7->delta_luma_weight_l1));
    FUNC_0(VAR_7->luma_offset_l0, 0, sizeof(VAR_7->luma_offset_l0));
    FUNC_0(VAR_7->luma_offset_l1, 0, sizeof(VAR_7->luma_offset_l1));
    FUNC_0(VAR_7->delta_chroma_weight_l0, 0, sizeof(VAR_7->delta_chroma_weight_l0));
    FUNC_0(VAR_7->delta_chroma_weight_l1, 0, sizeof(VAR_7->delta_chroma_weight_l1));
    FUNC_0(VAR_7->ChromaOffsetL0, 0, sizeof(VAR_7->ChromaOffsetL0));
    FUNC_0(VAR_7->ChromaOffsetL1, 0, sizeof(VAR_7->ChromaOffsetL1));

    VAR_7->delta_chroma_log2_weight_denom = 0;
    VAR_7->luma_log2_weight_denom = 0;

    if (VAR_6->slice_type == VAR_1 ||
        (VAR_6->slice_type == VAR_2 && !VAR_5->ps.pps->weighted_pred_flag) ||
        (VAR_6->slice_type == VAR_0 && !VAR_5->ps.pps->weighted_bipred_flag))
        return;

    VAR_7->luma_log2_weight_denom = VAR_6->luma_log2_weight_denom;

    if (VAR_5->ps.sps->chroma_format_idc) {
        VAR_7->delta_chroma_log2_weight_denom = VAR_6->chroma_log2_weight_denom - VAR_6->luma_log2_weight_denom;
    }

    for (VAR_8 = 0; VAR_8 < 15 && VAR_8 < VAR_6->nb_refs[VAR_3]; VAR_8++) {
        VAR_7->delta_luma_weight_l0[VAR_8] = VAR_6->luma_weight_l0[VAR_8] - (1 << VAR_6->luma_log2_weight_denom);
        VAR_7->luma_offset_l0[VAR_8] = VAR_6->luma_offset_l0[VAR_8];
        VAR_7->delta_chroma_weight_l0[VAR_8][0] = VAR_6->chroma_weight_l0[VAR_8][0] - (1 << VAR_6->chroma_log2_weight_denom);
        VAR_7->delta_chroma_weight_l0[VAR_8][1] = VAR_6->chroma_weight_l0[VAR_8][1] - (1 << VAR_6->chroma_log2_weight_denom);
        VAR_7->ChromaOffsetL0[VAR_8][0] = VAR_6->chroma_offset_l0[VAR_8][0];
        VAR_7->ChromaOffsetL0[VAR_8][1] = VAR_6->chroma_offset_l0[VAR_8][1];
    }

    if (VAR_6->slice_type == VAR_0) {
        for (VAR_8 = 0; VAR_8 < 15 && VAR_8 < VAR_6->nb_refs[VAR_4]; VAR_8++) {
            VAR_7->delta_luma_weight_l1[VAR_8] = VAR_6->luma_weight_l1[VAR_8] - (1 << VAR_6->luma_log2_weight_denom);
            VAR_7->luma_offset_l1[VAR_8] = VAR_6->luma_offset_l1[VAR_8];
            VAR_7->delta_chroma_weight_l1[VAR_8][0] = VAR_6->chroma_weight_l1[VAR_8][0] - (1 << VAR_6->chroma_log2_weight_denom);
            VAR_7->delta_chroma_weight_l1[VAR_8][1] = VAR_6->chroma_weight_l1[VAR_8][1] - (1 << VAR_6->chroma_log2_weight_denom);
            VAR_7->ChromaOffsetL1[VAR_8][0] = VAR_6->chroma_offset_l1[VAR_8][0];
            VAR_7->ChromaOffsetL1[VAR_8][1] = VAR_6->chroma_offset_l1[VAR_8][1];
        }
    }
}
