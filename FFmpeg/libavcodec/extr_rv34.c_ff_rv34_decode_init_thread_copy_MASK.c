
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* avctx; } ;
struct TYPE_11__ {TYPE_1__* internal; TYPE_2__* priv_data; } ;
struct TYPE_10__ {TYPE_6__ s; int * mb_type; int * intra_types_hist; int * deblock_coefs; int * cbp_luma; int * cbp_chroma; int * tmp_b_block_base; } ;
struct TYPE_9__ {scalar_t__ is_copy; } ;
typedef TYPE_2__ RV34DecContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(AVCodecContext *VAR_0)
{
    int VAR_1;
    RV34DecContext *VAR_2 = VAR_0->priv_data;

    VAR_2->s.avctx = VAR_0;

    if (VAR_0->internal->is_copy) {
        VAR_2->tmp_b_block_base = ((void*)0);
        VAR_2->cbp_chroma = ((void*)0);
        VAR_2->cbp_luma = ((void*)0);
        VAR_2->deblock_coefs = ((void*)0);
        VAR_2->intra_types_hist = ((void*)0);
        VAR_2->mb_type = ((void*)0);

        FUNC_2(&VAR_2->s);

        if ((VAR_1 = FUNC_1(&VAR_2->s)) < 0)
            return VAR_1;
        if ((VAR_1 = FUNC_3(VAR_2)) < 0) {
            FUNC_0(&VAR_2->s);
            return VAR_1;
        }
    }

    return 0;
}
