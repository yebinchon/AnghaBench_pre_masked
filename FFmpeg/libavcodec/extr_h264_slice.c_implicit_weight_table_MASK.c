
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


typedef long long int64_t ;
struct TYPE_15__ {int picture_structure; TYPE_1__* cur_pic_ptr; } ;
struct TYPE_13__ {int use_weight; int use_weight_chroma; int luma_log2_weight_denom; int chroma_log2_weight_denom; int*** implicit_weight; scalar_t__* chroma_weight_flag; scalar_t__* luma_weight_flag; } ;
struct TYPE_14__ {int* ref_count; TYPE_4__ pwt; TYPE_3__** ref_list; } ;
struct TYPE_12__ {long long poc; TYPE_2__* parent; } ;
struct TYPE_11__ {int long_ref; } ;
struct TYPE_10__ {int poc; int* field_poc; } ;
typedef TYPE_5__ H264SliceContext ;
typedef TYPE_6__ H264Context ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__ const*) ;
 int VAR_0 ;
 int FUNC_2 (long long) ;

__attribute__((used)) static void FUNC_3(const H264Context *VAR_1, H264SliceContext *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
        VAR_2->pwt.luma_weight_flag[VAR_6] = 0;
        VAR_2->pwt.chroma_weight_flag[VAR_6] = 0;
    }

    if (VAR_3 < 0) {
        if (VAR_1->picture_structure == VAR_0) {
            VAR_7 = VAR_1->cur_pic_ptr->poc;
        } else {
            VAR_7 = VAR_1->cur_pic_ptr->field_poc[VAR_1->picture_structure - 1];
        }
        if (VAR_2->ref_count[0] == 1 && VAR_2->ref_count[1] == 1 && !FUNC_1(VAR_1) &&
            VAR_2->ref_list[0][0].poc + (int64_t)VAR_2->ref_list[1][0].poc == 2LL * VAR_7) {
            VAR_2->pwt.use_weight = 0;
            VAR_2->pwt.use_weight_chroma = 0;
            return;
        }
        VAR_8 = 0;
        VAR_9 = VAR_2->ref_count[0];
        VAR_10 = VAR_2->ref_count[1];
    } else {
        VAR_7 = VAR_1->cur_pic_ptr->field_poc[VAR_3];
        VAR_8 = 16;
        VAR_9 = 16 + 2 * VAR_2->ref_count[0];
        VAR_10 = 16 + 2 * VAR_2->ref_count[1];
    }

    VAR_2->pwt.use_weight = 2;
    VAR_2->pwt.use_weight_chroma = 2;
    VAR_2->pwt.luma_log2_weight_denom = 5;
    VAR_2->pwt.chroma_log2_weight_denom = 5;

    for (VAR_4 = VAR_8; VAR_4 < VAR_9; VAR_4++) {
        int64_t VAR_11 = VAR_2->ref_list[0][VAR_4].poc;
        for (VAR_5 = VAR_8; VAR_5 < VAR_10; VAR_5++) {
            int VAR_12 = 32;
            if (!VAR_2->ref_list[0][VAR_4].parent->long_ref && !VAR_2->ref_list[1][VAR_5].parent->long_ref) {
                int VAR_13 = VAR_2->ref_list[1][VAR_5].poc;
                int VAR_14 = FUNC_2(VAR_13 - VAR_11);
                if (VAR_14) {
                    int VAR_15 = FUNC_2(VAR_7 - VAR_11);
                    int VAR_16 = (16384 + (FUNC_0(VAR_14) >> 1)) / VAR_14;
                    int VAR_17 = (VAR_15 * VAR_16 + 32) >> 8;
                    if (VAR_17 >= -64 && VAR_17 <= 128)
                        VAR_12 = 64 - VAR_17;
                }
            }
            if (VAR_3 < 0) {
                VAR_2->pwt.implicit_weight[VAR_4][VAR_5][0] =
                VAR_2->pwt.implicit_weight[VAR_4][VAR_5][1] = VAR_12;
            } else {
                VAR_2->pwt.implicit_weight[VAR_4][VAR_5][VAR_3] = VAR_12;
            }
        }
    }
}
