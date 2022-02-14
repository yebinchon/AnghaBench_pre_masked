
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ picture_structure; TYPE_1__* cur_pic_ptr; } ;
struct TYPE_14__ {int* ref_count; void** dist_scale_factor; void*** dist_scale_factor_field; TYPE_3__** ref_list; } ;
struct TYPE_13__ {int poc; TYPE_2__* parent; } ;
struct TYPE_12__ {int* field_poc; } ;
struct TYPE_11__ {int* field_poc; int poc; } ;
typedef TYPE_4__ H264SliceContext ;
typedef TYPE_5__ H264Context ;


 scalar_t__ FUNC_0 (TYPE_5__ const* const) ;
 scalar_t__ FUNC_1 (TYPE_5__ const* const) ;
 scalar_t__ VAR_0 ;
 void* FUNC_2 (TYPE_4__*,int const,int const,int) ;

void FUNC_3(const H264Context *const VAR_1,
                                      H264SliceContext *VAR_2)
{
    const int VAR_3 = FUNC_0(VAR_1) ? VAR_1->cur_pic_ptr->field_poc[VAR_1->picture_structure == VAR_0]
                                      : VAR_1->cur_pic_ptr->poc;
    const int VAR_4 = VAR_2->ref_list[1][0].poc;
    int VAR_5, VAR_6;

    if (FUNC_1(VAR_1))
        for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
            const int VAR_7 = VAR_1->cur_pic_ptr->field_poc[VAR_6];
            const int VAR_8 = VAR_2->ref_list[1][0].parent->field_poc[VAR_6];
            for (VAR_5 = 0; VAR_5 < 2 * VAR_2->ref_count[0]; VAR_5++)
                VAR_2->dist_scale_factor_field[VAR_6][VAR_5 ^ VAR_6] =
                    FUNC_2(VAR_2, VAR_7, VAR_8, VAR_5 + 16);
        }

    for (VAR_5 = 0; VAR_5 < VAR_2->ref_count[0]; VAR_5++)
        VAR_2->dist_scale_factor[VAR_5] = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
}
