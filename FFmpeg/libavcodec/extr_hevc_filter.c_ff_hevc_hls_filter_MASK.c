
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* sps; } ;
struct TYPE_11__ {scalar_t__ slice_type; } ;
struct TYPE_16__ {int threads_type; TYPE_5__* ref; TYPE_4__ ps; int nal_unit_type; TYPE_2__* avctx; TYPE_1__ sh; } ;
struct TYPE_15__ {int tf; } ;
struct TYPE_13__ {int width; int height; scalar_t__ sao_enabled; } ;
struct TYPE_12__ {scalar_t__ skip_loop_filter; } ;
typedef TYPE_6__ HEVCContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (TYPE_6__*,int,int) ;

void FUNC_5(HEVCContext *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
    int VAR_12 = VAR_9 >= VAR_8->ps.sps->width - VAR_11;
    int VAR_13 = 0;
    if (VAR_8->avctx->skip_loop_filter >= VAR_0 ||
        (VAR_8->avctx->skip_loop_filter >= VAR_3 && !FUNC_0(VAR_8)) ||
        (VAR_8->avctx->skip_loop_filter >= VAR_2 &&
         VAR_8->sh.slice_type != VAR_7) ||
        (VAR_8->avctx->skip_loop_filter >= VAR_1 &&
         VAR_8->sh.slice_type == VAR_6) ||
        (VAR_8->avctx->skip_loop_filter >= VAR_4 &&
        FUNC_2(VAR_8->nal_unit_type)))
        VAR_13 = 1;

    if (!VAR_13)
        FUNC_1(VAR_8, VAR_9, VAR_10);
    if (VAR_8->ps.sps->sao_enabled && !VAR_13) {
        int VAR_14 = VAR_10 >= VAR_8->ps.sps->height - VAR_11;
        if (VAR_10 && VAR_9)
            FUNC_4(VAR_8, VAR_9 - VAR_11, VAR_10 - VAR_11);
        if (VAR_9 && VAR_14)
            FUNC_4(VAR_8, VAR_9 - VAR_11, VAR_10);
        if (VAR_10 && VAR_12) {
            FUNC_4(VAR_8, VAR_9, VAR_10 - VAR_11);
            if (VAR_8->threads_type & VAR_5 )
                FUNC_3(&VAR_8->ref->tf, VAR_10, 0);
        }
        if (VAR_12 && VAR_14) {
            FUNC_4(VAR_8, VAR_9 , VAR_10);
            if (VAR_8->threads_type & VAR_5 )
                FUNC_3(&VAR_8->ref->tf, VAR_10 + VAR_11, 0);
        }
    } else if (VAR_8->threads_type & VAR_5 && VAR_12)
        FUNC_3(&VAR_8->ref->tf, VAR_10 + VAR_11 - 4, 0);
}
