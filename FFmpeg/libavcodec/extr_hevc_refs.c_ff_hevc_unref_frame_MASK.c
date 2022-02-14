
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int avctx; } ;
struct TYPE_7__ {int flags; int * hwaccel_picture_private; int hwaccel_priv_buf; int * collocated_ref; int * refPicList; int * rpl_tab; int rpl_tab_buf; int rpl_buf; int * tab_mvf; int tab_mvf_buf; int tf; TYPE_1__* frame; } ;
struct TYPE_6__ {int * buf; } ;
typedef TYPE_2__ HEVCFrame ;
typedef TYPE_3__ HEVCContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(HEVCContext *VAR_0, HEVCFrame *VAR_1, int VAR_2)
{

    if (!VAR_1->frame || !VAR_1->frame->buf[0])
        return;

    VAR_1->flags &= ~VAR_2;
    if (!VAR_1->flags) {
        FUNC_1(VAR_0->avctx, &VAR_1->tf);

        FUNC_0(&VAR_1->tab_mvf_buf);
        VAR_1->tab_mvf = ((void*)0);

        FUNC_0(&VAR_1->rpl_buf);
        FUNC_0(&VAR_1->rpl_tab_buf);
        VAR_1->rpl_tab = ((void*)0);
        VAR_1->refPicList = ((void*)0);

        VAR_1->collocated_ref = ((void*)0);

        FUNC_0(&VAR_1->hwaccel_priv_buf);
        VAR_1->hwaccel_picture_private = ((void*)0);
    }
}
