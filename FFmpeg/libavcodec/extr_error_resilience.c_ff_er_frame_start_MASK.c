
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int error_concealment; } ;
struct TYPE_4__ {int mecc_inited; int mb_stride; int mb_height; int mb_num; scalar_t__ error_occurred; int error_count; int error_status_table; TYPE_2__* avctx; int mecc; } ;
typedef TYPE_1__ ERContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(ERContext *VAR_3)
{
    if (!VAR_3->avctx->error_concealment)
        return;

    if (!VAR_3->mecc_inited) {
        FUNC_1(&VAR_3->mecc, VAR_3->avctx);
        VAR_3->mecc_inited = 1;
    }

    FUNC_2(VAR_3->error_status_table, VAR_1 | VAR_2 | VAR_0,
           VAR_3->mb_stride * VAR_3->mb_height * sizeof(uint8_t));
    FUNC_0(&VAR_3->error_count, 3 * VAR_3->mb_num);
    VAR_3->error_occurred = 0;
}
