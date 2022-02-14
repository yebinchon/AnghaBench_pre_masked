
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
typedef int cavs_vector ;
struct TYPE_3__ {int mb_width; int mb_height; void* block; void* col_type_base; void* col_mv; void* top_border_v; void* top_border_u; void* top_border_y; void* top_pred_Y; void** top_mv; void* top_qp; } ;
typedef TYPE_1__ AVSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void**) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int,int) ;

int FUNC_4(AVSContext *VAR_1)
{

    VAR_1->top_qp = FUNC_2(VAR_1->mb_width);
    VAR_1->top_mv[0] = FUNC_3(VAR_1->mb_width * 2 + 1, sizeof(cavs_vector));
    VAR_1->top_mv[1] = FUNC_3(VAR_1->mb_width * 2 + 1, sizeof(cavs_vector));
    VAR_1->top_pred_Y = FUNC_3(VAR_1->mb_width * 2, sizeof(*VAR_1->top_pred_Y));
    VAR_1->top_border_y = FUNC_3(VAR_1->mb_width + 1, 16);
    VAR_1->top_border_u = FUNC_3(VAR_1->mb_width, 10);
    VAR_1->top_border_v = FUNC_3(VAR_1->mb_width, 10);


    VAR_1->col_mv = FUNC_3(VAR_1->mb_width * VAR_1->mb_height,
                                        4 * sizeof(cavs_vector));
    VAR_1->col_type_base = FUNC_2(VAR_1->mb_width * VAR_1->mb_height);
    VAR_1->block = FUNC_2(64 * sizeof(int16_t));

    if (!VAR_1->top_qp || !VAR_1->top_mv[0] || !VAR_1->top_mv[1] || !VAR_1->top_pred_Y ||
        !VAR_1->top_border_y || !VAR_1->top_border_u || !VAR_1->top_border_v ||
        !VAR_1->col_mv || !VAR_1->col_type_base || !VAR_1->block) {
        FUNC_1(&VAR_1->top_qp);
        FUNC_1(&VAR_1->top_mv[0]);
        FUNC_1(&VAR_1->top_mv[1]);
        FUNC_1(&VAR_1->top_pred_Y);
        FUNC_1(&VAR_1->top_border_y);
        FUNC_1(&VAR_1->top_border_u);
        FUNC_1(&VAR_1->top_border_v);
        FUNC_1(&VAR_1->col_mv);
        FUNC_1(&VAR_1->col_type_base);
        FUNC_1(&VAR_1->block);
        return FUNC_0(VAR_0);
    }
    return 0;
}
