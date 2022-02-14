
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_filter_buffers; scalar_t__* filter_buffers; scalar_t__ va_context; scalar_t__ va_config; TYPE_1__* hwctx; int device_ref; } ;
typedef TYPE_2__ VAAPIVPPContext ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_5__ {int display; } ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(AVFilterContext *VAR_1)
{
    VAAPIVPPContext *VAR_2 = VAR_1->priv;
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->nb_filter_buffers; VAR_3++) {
        if (VAR_2->filter_buffers[VAR_3] != VAR_0) {
            FUNC_1(VAR_2->hwctx->display, VAR_2->filter_buffers[VAR_3]);
            VAR_2->filter_buffers[VAR_3] = VAR_0;
        }
    }
    VAR_2->nb_filter_buffers = 0;

    if (VAR_2->va_context != VAR_0) {
        FUNC_3(VAR_2->hwctx->display, VAR_2->va_context);
        VAR_2->va_context = VAR_0;
    }

    if (VAR_2->va_config != VAR_0) {
        FUNC_2(VAR_2->hwctx->display, VAR_2->va_config);
        VAR_2->va_config = VAR_0;
    }

    FUNC_0(&VAR_2->device_ref);
    VAR_2->hwctx = ((void*)0);
}
