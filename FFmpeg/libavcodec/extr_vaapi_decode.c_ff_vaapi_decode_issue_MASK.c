
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ VAStatus ;
struct TYPE_13__ {int nb_param_buffers; int nb_slices; int slice_buffers; scalar_t__ slices_allocated; int param_buffers; int output_surface; } ;
typedef TYPE_3__ VAAPIDecodePicture ;
struct TYPE_14__ {int va_context; TYPE_2__* hwctx; } ;
typedef TYPE_4__ VAAPIDecodeContext ;
struct TYPE_15__ {TYPE_1__* internal; } ;
struct TYPE_12__ {int driver_quirks; int display; } ;
struct TYPE_11__ {TYPE_4__* hwaccel_priv_data; } ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,int ,char*,scalar_t__,...) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int) ;

int FUNC_8(AVCodecContext *VAR_6,
                          VAAPIDecodePicture *VAR_7)
{
    VAAPIDecodeContext *VAR_8 = VAR_6->internal->hwaccel_priv_data;
    VAStatus VAR_9;
    int VAR_10;

    FUNC_2(VAR_6, VAR_0, "Decode to surface %#x.\n",
           VAR_7->output_surface);

    VAR_9 = FUNC_4(VAR_8->hwctx->display, VAR_8->va_context,
                         VAR_7->output_surface);
    if (VAR_9 != VAR_5) {
        FUNC_2(VAR_6, VAR_1, "Failed to begin picture decode "
               "issue: %d (%s).\n", VAR_9, FUNC_6(VAR_9));
        VAR_10 = FUNC_0(VAR_4);
        goto fail_with_picture;
    }

    VAR_9 = FUNC_7(VAR_8->hwctx->display, VAR_8->va_context,
                          VAR_7->param_buffers, VAR_7->nb_param_buffers);
    if (VAR_9 != VAR_5) {
        FUNC_2(VAR_6, VAR_1, "Failed to upload decode "
               "parameters: %d (%s).\n", VAR_9, FUNC_6(VAR_9));
        VAR_10 = FUNC_0(VAR_4);
        goto fail_with_picture;
    }

    VAR_9 = FUNC_7(VAR_8->hwctx->display, VAR_8->va_context,
                          VAR_7->slice_buffers, 2 * VAR_7->nb_slices);
    if (VAR_9 != VAR_5) {
        FUNC_2(VAR_6, VAR_1, "Failed to upload slices: "
               "%d (%s).\n", VAR_9, FUNC_6(VAR_9));
        VAR_10 = FUNC_0(VAR_4);
        goto fail_with_picture;
    }

    VAR_9 = FUNC_5(VAR_8->hwctx->display, VAR_8->va_context);
    if (VAR_9 != VAR_5) {
        FUNC_2(VAR_6, VAR_1, "Failed to end picture decode "
               "issue: %d (%s).\n", VAR_9, FUNC_6(VAR_9));
        VAR_10 = FUNC_0(VAR_4);
        if (VAR_3 || VAR_8->hwctx->driver_quirks &
            VAR_2)
            goto fail;
        else
            goto fail_at_end;
    }

    if (VAR_3 || VAR_8->hwctx->driver_quirks &
        VAR_2)
        FUNC_3(VAR_6, VAR_7);

    VAR_10 = 0;
    goto exit;

fail_with_picture:
    VAR_9 = FUNC_5(VAR_8->hwctx->display, VAR_8->va_context);
    if (VAR_9 != VAR_5) {
        FUNC_2(VAR_6, VAR_1, "Failed to end picture decode "
               "after error: %d (%s).\n", VAR_9, FUNC_6(VAR_9));
    }
fail:
    FUNC_3(VAR_6, VAR_7);
fail_at_end:
exit:
    VAR_7->nb_param_buffers = 0;
    VAR_7->nb_slices = 0;
    VAR_7->slices_allocated = 0;
    FUNC_1(&VAR_7->slice_buffers);

    return VAR_10;
}
