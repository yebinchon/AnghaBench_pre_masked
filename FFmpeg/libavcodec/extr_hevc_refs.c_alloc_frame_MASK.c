
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_33__ {scalar_t__ picture_struct; } ;
struct TYPE_34__ {TYPE_8__ picture_timing; } ;
struct TYPE_32__ {int top_field_first; int interlaced_frame; scalar_t__* buf; } ;
struct TYPE_31__ {scalar_t__ data; } ;
struct TYPE_30__ {TYPE_4__* sps; } ;
struct TYPE_29__ {int ctb_width; int ctb_height; } ;
struct TYPE_28__ {scalar_t__ data; } ;
struct TYPE_27__ {scalar_t__ data; } ;
struct TYPE_26__ {int nb_nals; } ;
struct TYPE_25__ {TYPE_13__* hwaccel; } ;
struct TYPE_24__ {int frame_priv_data_size; } ;
struct TYPE_23__ {TYPE_14__* avctx; TYPE_9__ sei; TYPE_5__ ps; int rpl_tab_pool; int tab_mvf_pool; TYPE_1__ pkt; TYPE_11__* DPB; } ;
struct TYPE_22__ {int ctb_count; TYPE_10__* hwaccel_priv_buf; scalar_t__ hwaccel_picture_private; TYPE_7__* frame; TYPE_6__* rpl_buf; int ** rpl_tab; TYPE_3__* rpl_tab_buf; TYPE_2__* tab_mvf_buf; int * tab_mvf; int tf; } ;
struct TYPE_21__ {scalar_t__ data; } ;
typedef int RefPicListTab ;
typedef int MvField ;
typedef TYPE_11__ HEVCFrame ;
typedef TYPE_12__ HEVCContext ;
typedef TYPE_13__ AVHWAccel ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_11__*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_14__*,int ,char*) ;
 int FUNC_5 (TYPE_12__*,TYPE_11__*,int ) ;
 int FUNC_6 (TYPE_14__*,int *,int ) ;

__attribute__((used)) static HEVCFrame *FUNC_7(HEVCContext *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->DPB); VAR_5++) {
        HEVCFrame *VAR_8 = &VAR_4->DPB[VAR_5];
        if (VAR_8->frame->buf[0])
            continue;

        VAR_7 = FUNC_6(VAR_4->avctx, &VAR_8->tf,
                                   VAR_0);
        if (VAR_7 < 0)
            return ((void*)0);

        VAR_8->rpl_buf = FUNC_2(VAR_4->pkt.nb_nals * sizeof(RefPicListTab));
        if (!VAR_8->rpl_buf)
            goto fail;

        VAR_8->tab_mvf_buf = FUNC_3(VAR_4->tab_mvf_pool);
        if (!VAR_8->tab_mvf_buf)
            goto fail;
        VAR_8->tab_mvf = (MvField *)VAR_8->tab_mvf_buf->data;

        VAR_8->rpl_tab_buf = FUNC_3(VAR_4->rpl_tab_pool);
        if (!VAR_8->rpl_tab_buf)
            goto fail;
        VAR_8->rpl_tab = (RefPicListTab **)VAR_8->rpl_tab_buf->data;
        VAR_8->ctb_count = VAR_4->ps.sps->ctb_width * VAR_4->ps.sps->ctb_height;
        for (VAR_6 = 0; VAR_6 < VAR_8->ctb_count; VAR_6++)
            VAR_8->rpl_tab[VAR_6] = (RefPicListTab *)VAR_8->rpl_buf->data;

        VAR_8->frame->top_field_first = VAR_4->sei.picture_timing.picture_struct == VAR_3;
        VAR_8->frame->interlaced_frame = (VAR_4->sei.picture_timing.picture_struct == VAR_3) || (VAR_4->sei.picture_timing.picture_struct == VAR_2);

        if (VAR_4->avctx->hwaccel) {
            const AVHWAccel *VAR_9 = VAR_4->avctx->hwaccel;
            FUNC_1(!VAR_8->hwaccel_picture_private);
            if (VAR_9->frame_priv_data_size) {
                VAR_8->hwaccel_priv_buf = FUNC_2(VAR_9->frame_priv_data_size);
                if (!VAR_8->hwaccel_priv_buf)
                    goto fail;
                VAR_8->hwaccel_picture_private = VAR_8->hwaccel_priv_buf->data;
            }
        }

        return VAR_8;
fail:
        FUNC_5(VAR_4, VAR_8, ~0);
        return ((void*)0);
    }
    FUNC_4(VAR_4->avctx, VAR_1, "Error allocating frame, DPB full.\n");
    return ((void*)0);
}
