
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int chroma_qp_offset_list_len_minus1; scalar_t__ log2_sao_offset_scale_luma; scalar_t__ log2_sao_offset_scale_chroma; void** cr_qp_offset_list; void** cb_qp_offset_list; void* diff_cu_chroma_qp_offset_depth; void* chroma_qp_offset_list_enabled_flag; void* cross_component_prediction_enabled_flag; void* log2_max_transform_skip_block_size; scalar_t__ transform_skip_enabled_flag; } ;
struct TYPE_5__ {scalar_t__ bit_depth_chroma; scalar_t__ bit_depth; } ;
typedef TYPE_1__ HEVCSPS ;
typedef TYPE_2__ HEVCPPS ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(GetBitContext *VAR_3, AVCodecContext *VAR_4,
                                HEVCPPS *VAR_5, HEVCSPS *VAR_6) {
    int VAR_7;

    if (VAR_5->transform_skip_enabled_flag) {
        VAR_5->log2_max_transform_skip_block_size = FUNC_4(VAR_3) + 2;
    }
    VAR_5->cross_component_prediction_enabled_flag = FUNC_2(VAR_3);
    VAR_5->chroma_qp_offset_list_enabled_flag = FUNC_2(VAR_3);
    if (VAR_5->chroma_qp_offset_list_enabled_flag) {
        VAR_5->diff_cu_chroma_qp_offset_depth = FUNC_4(VAR_3);
        VAR_5->chroma_qp_offset_list_len_minus1 = FUNC_4(VAR_3);
        if (VAR_5->chroma_qp_offset_list_len_minus1 > 5) {
            FUNC_1(VAR_4, VAR_1,
                   "chroma_qp_offset_list_len_minus1 shall be in the range [0, 5].\n");
            return VAR_0;
        }
        for (VAR_7 = 0; VAR_7 <= VAR_5->chroma_qp_offset_list_len_minus1; VAR_7++) {
            VAR_5->cb_qp_offset_list[VAR_7] = FUNC_3(VAR_3);
            if (VAR_5->cb_qp_offset_list[VAR_7]) {
                FUNC_1(VAR_4, VAR_2,
                       "cb_qp_offset_list not tested yet.\n");
            }
            VAR_5->cr_qp_offset_list[VAR_7] = FUNC_3(VAR_3);
            if (VAR_5->cr_qp_offset_list[VAR_7]) {
                FUNC_1(VAR_4, VAR_2,
                       "cb_qp_offset_list not tested yet.\n");
            }
        }
    }
    VAR_5->log2_sao_offset_scale_luma = FUNC_4(VAR_3);
    VAR_5->log2_sao_offset_scale_chroma = FUNC_4(VAR_3);

    if ( VAR_5->log2_sao_offset_scale_luma > FUNC_0(VAR_6->bit_depth - 10, 0)
        || VAR_5->log2_sao_offset_scale_chroma > FUNC_0(VAR_6->bit_depth_chroma - 10, 0)
    )
        return VAR_0;

    return(0);
}
