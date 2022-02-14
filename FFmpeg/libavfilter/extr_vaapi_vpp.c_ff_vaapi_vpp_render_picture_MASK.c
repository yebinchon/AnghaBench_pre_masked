
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ VASurfaceID ;
typedef scalar_t__ VAStatus ;
typedef int VAProcPipelineParameterBuffer ;
typedef int VABufferID ;
struct TYPE_9__ {int va_context; TYPE_1__* hwctx; } ;
typedef TYPE_2__ VAAPIVPPContext ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {scalar_t__* data; } ;
struct TYPE_8__ {int driver_quirks; int display; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_4__*,int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int,int,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int) ;

int FUNC_8(AVFilterContext *VAR_7,
                                VAProcPipelineParameterBuffer *VAR_8,
                                AVFrame *VAR_9)
{
    VAAPIVPPContext *VAR_10 = VAR_7->priv;
    VASurfaceID VAR_11;
    VABufferID VAR_12;
    VAStatus VAR_13;
    int VAR_14;

    VAR_11 = (VASurfaceID)(uintptr_t)VAR_9->data[3];

    VAR_13 = FUNC_2(VAR_10->hwctx->display,
                         VAR_10->va_context, VAR_11);
    if (VAR_13 != VAR_6) {
        FUNC_1(VAR_7, VAR_1, "Failed to attach new picture: "
               "%d (%s).\n", VAR_13, FUNC_6(VAR_13));
        VAR_14 = FUNC_0(VAR_4);
        goto fail;
    }

    VAR_13 = FUNC_3(VAR_10->hwctx->display, VAR_10->va_context,
                         VAR_5,
                         sizeof(*VAR_8), 1, VAR_8, &VAR_12);
    if (VAR_13 != VAR_6) {
        FUNC_1(VAR_7, VAR_1, "Failed to create parameter buffer: "
               "%d (%s).\n", VAR_13, FUNC_6(VAR_13));
        VAR_14 = FUNC_0(VAR_4);
        goto fail_after_begin;
    }
    FUNC_1(VAR_7, VAR_0, "Pipeline parameter buffer is %#x.\n",
           VAR_12);

    VAR_13 = FUNC_7(VAR_10->hwctx->display, VAR_10->va_context,
                          &VAR_12, 1);
    if (VAR_13 != VAR_6) {
        FUNC_1(VAR_7, VAR_1, "Failed to render parameter buffer: "
               "%d (%s).\n", VAR_13, FUNC_6(VAR_13));
        VAR_14 = FUNC_0(VAR_4);
        goto fail_after_begin;
    }

    VAR_13 = FUNC_5(VAR_10->hwctx->display, VAR_10->va_context);
    if (VAR_13 != VAR_6) {
        FUNC_1(VAR_7, VAR_1, "Failed to start picture processing: "
               "%d (%s).\n", VAR_13, FUNC_6(VAR_13));
        VAR_14 = FUNC_0(VAR_4);
        goto fail_after_render;
    }

    if (VAR_3 || VAR_10->hwctx->driver_quirks &
        VAR_2) {
        VAR_13 = FUNC_4(VAR_10->hwctx->display, VAR_12);
        if (VAR_13 != VAR_6) {
            FUNC_1(VAR_7, VAR_1, "Failed to free parameter buffer: "
                   "%d (%s).\n", VAR_13, FUNC_6(VAR_13));

        }
    }

    return 0;





fail_after_begin:
    FUNC_7(VAR_10->hwctx->display, VAR_10->va_context, &VAR_12, 1);
fail_after_render:
    FUNC_5(VAR_10->hwctx->display, VAR_10->va_context);
fail:
    return VAR_14;
}
