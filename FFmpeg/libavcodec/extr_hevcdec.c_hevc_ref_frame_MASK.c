
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_5__* hwaccel_priv_buf; scalar_t__ hwaccel_picture_private; int sequence; int flags; int ctb_count; int poc; TYPE_5__* rpl_buf; int rpl_tab; TYPE_5__* rpl_tab_buf; int tab_mvf; TYPE_5__* tab_mvf_buf; int tf; } ;
typedef TYPE_1__ HEVCFrame ;
typedef int HEVCContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(HEVCContext *VAR_1, HEVCFrame *VAR_2, HEVCFrame *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_3(&VAR_2->tf, &VAR_3->tf);
    if (VAR_4 < 0)
        return VAR_4;

    VAR_2->tab_mvf_buf = FUNC_1(VAR_3->tab_mvf_buf);
    if (!VAR_2->tab_mvf_buf)
        goto fail;
    VAR_2->tab_mvf = VAR_3->tab_mvf;

    VAR_2->rpl_tab_buf = FUNC_1(VAR_3->rpl_tab_buf);
    if (!VAR_2->rpl_tab_buf)
        goto fail;
    VAR_2->rpl_tab = VAR_3->rpl_tab;

    VAR_2->rpl_buf = FUNC_1(VAR_3->rpl_buf);
    if (!VAR_2->rpl_buf)
        goto fail;

    VAR_2->poc = VAR_3->poc;
    VAR_2->ctb_count = VAR_3->ctb_count;
    VAR_2->flags = VAR_3->flags;
    VAR_2->sequence = VAR_3->sequence;

    if (VAR_3->hwaccel_picture_private) {
        VAR_2->hwaccel_priv_buf = FUNC_1(VAR_3->hwaccel_priv_buf);
        if (!VAR_2->hwaccel_priv_buf)
            goto fail;
        VAR_2->hwaccel_picture_private = VAR_2->hwaccel_priv_buf->data;
    }

    return 0;
fail:
    FUNC_2(VAR_1, VAR_2, ~0);
    return FUNC_0(VAR_0);
}
