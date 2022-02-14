
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int state ;
struct TYPE_9__ {int* one_state; } ;
struct TYPE_10__ {int version; int ac; int* state_transition; int colorspace; int bits_per_raw_sample; int chroma_h_shift; int chroma_v_shift; int slice_count; int slice_x; int num_h_slices; int width; int slice_y; int num_v_slices; int height; int slice_width; int slice_height; int plane_count; int context_model; TYPE_1__* plane; struct TYPE_10__** slice_context; int quant_table; int transparency; int chroma_planes; TYPE_2__ c; } ;
struct TYPE_8__ {int quant_table_index; } ;
typedef TYPE_2__ RangeCoder ;
typedef TYPE_3__ FFV1Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (TYPE_2__* const,int *,int ) ;
 int FUNC_3 (TYPE_2__* const,int *,int,int) ;
 int FUNC_4 (TYPE_2__* const,int ) ;

__attribute__((used)) static void FUNC_5(FFV1Context *VAR_2)
{
    uint8_t VAR_3[VAR_1];
    int VAR_4, VAR_5;
    RangeCoder *const VAR_6 = &VAR_2->slice_context[0]->c;

    FUNC_1(VAR_3, 128, sizeof(VAR_3));

    if (VAR_2->version < 2) {
        FUNC_3(VAR_6, VAR_3, VAR_2->version, 0);
        FUNC_3(VAR_6, VAR_3, VAR_2->ac, 0);
        if (VAR_2->ac == VAR_0) {
            for (VAR_4 = 1; VAR_4 < 256; VAR_4++)
                FUNC_3(VAR_6, VAR_3,
                           VAR_2->state_transition[VAR_4] - VAR_6->one_state[VAR_4], 1);
        }
        FUNC_3(VAR_6, VAR_3, VAR_2->colorspace, 0);
        if (VAR_2->version > 0)
            FUNC_3(VAR_6, VAR_3, VAR_2->bits_per_raw_sample, 0);
        FUNC_2(VAR_6, VAR_3, VAR_2->chroma_planes);
        FUNC_3(VAR_6, VAR_3, VAR_2->chroma_h_shift, 0);
        FUNC_3(VAR_6, VAR_3, VAR_2->chroma_v_shift, 0);
        FUNC_2(VAR_6, VAR_3, VAR_2->transparency);

        FUNC_4(VAR_6, VAR_2->quant_table);
    } else if (VAR_2->version < 3) {
        FUNC_3(VAR_6, VAR_3, VAR_2->slice_count, 0);
        for (VAR_4 = 0; VAR_4 < VAR_2->slice_count; VAR_4++) {
            FFV1Context *VAR_7 = VAR_2->slice_context[VAR_4];
            FUNC_3(VAR_6, VAR_3,
                       (VAR_7->slice_x + 1) * VAR_2->num_h_slices / VAR_2->width, 0);
            FUNC_3(VAR_6, VAR_3,
                       (VAR_7->slice_y + 1) * VAR_2->num_v_slices / VAR_2->height, 0);
            FUNC_3(VAR_6, VAR_3,
                       (VAR_7->slice_width + 1) * VAR_2->num_h_slices / VAR_2->width - 1,
                       0);
            FUNC_3(VAR_6, VAR_3,
                       (VAR_7->slice_height + 1) * VAR_2->num_v_slices / VAR_2->height - 1,
                       0);
            for (VAR_5 = 0; VAR_5 < VAR_2->plane_count; VAR_5++) {
                FUNC_3(VAR_6, VAR_3, VAR_2->plane[VAR_5].quant_table_index, 0);
                FUNC_0(VAR_2->plane[VAR_5].quant_table_index == VAR_2->context_model);
            }
        }
    }
}
