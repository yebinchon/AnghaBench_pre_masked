
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int (* get_model_sym ) (TYPE_4__*,int *) ;} ;
struct TYPE_18__ {int mask_stride; int mask; int pal_stride; int pal_pic; int * pal; scalar_t__ rgb_pic; TYPE_1__* avctx; } ;
struct TYPE_17__ {int intra_pix_ctx; int inter_pix_ctx; int inter_region; TYPE_3__* c; } ;
struct TYPE_16__ {int err_recognition; } ;
typedef TYPE_2__ SliceContext ;
typedef TYPE_3__ MSS12Context ;
typedef TYPE_4__ ArithCoder ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const*,int,int,int,int) ;
 int FUNC_1 (TYPE_4__*,int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,int *,int,int,int,int,int ,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*,int,int,int,int) ;
 int FUNC_4 (TYPE_3__ const*,TYPE_4__*,int ,int ,int ,int ,int,int,int,int,int *) ;
 int FUNC_5 (TYPE_3__ const*,int,int,int,int) ;
 int FUNC_6 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_7(SliceContext *VAR_1, ArithCoder *VAR_2,
                               int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    MSS12Context const *VAR_7 = VAR_1->c;
    int VAR_8;

    VAR_8 = VAR_2->get_model_sym(VAR_2, &VAR_1->inter_region);

    if (!VAR_8) {
        VAR_8 = FUNC_1(VAR_2, &VAR_1->inter_pix_ctx, ((void*)0), 0, 0);
        if (VAR_8 < 0)
            return VAR_8;

        if (VAR_7->avctx->err_recognition & VAR_0 &&
            ( VAR_7->rgb_pic && VAR_8 != 0x01 && VAR_8 != 0x02 && VAR_8 != 0x04 ||
             !VAR_7->rgb_pic && VAR_8 != 0x80 && VAR_8 != 0xFF))
            return -1;

        if (VAR_8 == 0x02)
            FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
        else if (VAR_8 == 0x04)
            return FUNC_5(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
        else if (VAR_8 != 0x80)
            return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    } else {
        if (FUNC_2(VAR_2, VAR_7->mask, ((void*)0),
                          VAR_3, VAR_4, VAR_5, VAR_6, VAR_7->mask_stride, 0,
                          &VAR_1->inter_pix_ctx, &VAR_7->pal[0]) < 0)
            return -1;
        return FUNC_4(VAR_7, VAR_2, VAR_7->pal_pic,
                                    VAR_7->pal_stride, VAR_7->mask,
                                    VAR_7->mask_stride,
                                    VAR_3, VAR_4, VAR_5, VAR_6,
                                    &VAR_1->intra_pix_ctx);
    }

    return 0;
}
