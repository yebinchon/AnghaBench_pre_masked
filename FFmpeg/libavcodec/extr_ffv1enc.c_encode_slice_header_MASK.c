
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int state ;
struct TYPE_13__ {TYPE_3__* f; } ;
struct TYPE_14__ {int slice_x; int num_h_slices; int width; int slice_y; int num_v_slices; int height; int slice_width; int slice_height; int plane_count; int context_model; int version; int slice_coding_mode; int slice_rct_by_coef; int slice_rct_ry_coef; TYPE_4__ picture; TYPE_1__* plane; int c; } ;
struct TYPE_11__ {int num; int den; } ;
struct TYPE_12__ {TYPE_2__ sample_aspect_ratio; int top_field_first; int interlaced_frame; } ;
struct TYPE_10__ {int quant_table_index; } ;
typedef int RangeCoder ;
typedef TYPE_5__ FFV1Context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int,int ) ;

__attribute__((used)) static void FUNC_5(FFV1Context *VAR_1, FFV1Context *VAR_2)
{
    RangeCoder *VAR_3 = &VAR_2->c;
    uint8_t VAR_4[VAR_0];
    int VAR_5;
    FUNC_2(VAR_4, 128, sizeof(VAR_4));

    FUNC_4(VAR_3, VAR_4, (VAR_2->slice_x +1)*VAR_1->num_h_slices / VAR_1->width , 0);
    FUNC_4(VAR_3, VAR_4, (VAR_2->slice_y +1)*VAR_1->num_v_slices / VAR_1->height , 0);
    FUNC_4(VAR_3, VAR_4, (VAR_2->slice_width +1)*VAR_1->num_h_slices / VAR_1->width -1, 0);
    FUNC_4(VAR_3, VAR_4, (VAR_2->slice_height+1)*VAR_1->num_v_slices / VAR_1->height-1, 0);
    for (VAR_5=0; VAR_5<VAR_1->plane_count; VAR_5++) {
        FUNC_4(VAR_3, VAR_4, VAR_1->plane[VAR_5].quant_table_index, 0);
        FUNC_0(VAR_1->plane[VAR_5].quant_table_index == VAR_1->context_model);
    }
    if (!VAR_1->picture.f->interlaced_frame)
        FUNC_4(VAR_3, VAR_4, 3, 0);
    else
        FUNC_4(VAR_3, VAR_4, 1 + !VAR_1->picture.f->top_field_first, 0);
    FUNC_4(VAR_3, VAR_4, VAR_1->picture.f->sample_aspect_ratio.num, 0);
    FUNC_4(VAR_3, VAR_4, VAR_1->picture.f->sample_aspect_ratio.den, 0);
    if (VAR_1->version > 3) {
        FUNC_3(VAR_3, VAR_4, VAR_2->slice_coding_mode == 1);
        if (VAR_2->slice_coding_mode == 1)
            FUNC_1(VAR_1, VAR_2);
        FUNC_4(VAR_3, VAR_4, VAR_2->slice_coding_mode, 0);
        if (VAR_2->slice_coding_mode != 1) {
            FUNC_4(VAR_3, VAR_4, VAR_2->slice_rct_by_coef, 0);
            FUNC_4(VAR_3, VAR_4, VAR_2->slice_rct_ry_coef, 0);
        }
    }
}
