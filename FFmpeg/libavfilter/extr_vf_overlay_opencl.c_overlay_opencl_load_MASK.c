
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


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int cl_int ;
struct TYPE_16__ {TYPE_4__* priv; } ;
struct TYPE_15__ {int nb_components; int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_13__ {int program; TYPE_2__* hwctx; } ;
struct TYPE_14__ {int nb_planes; int x_subsample; int y_subsample; int x_position; int y_position; int alpha_separate; int initialised; int kernel; scalar_t__ command_queue; TYPE_3__ ocf; } ;
struct TYPE_12__ {int device_id; int context; } ;
struct TYPE_11__ {scalar_t__ plane; } ;
typedef TYPE_4__ OverlayOpenCLContext ;
typedef TYPE_5__ AVPixFmtDescriptor ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (TYPE_6__*,int ,char*,...) ;
 TYPE_5__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_6__*,char const**,int) ;
 char* VAR_3 ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_4,
                               enum AVPixelFormat VAR_5,
                               enum AVPixelFormat VAR_6)
{
    OverlayOpenCLContext *VAR_7 = VAR_4->priv;
    cl_int VAR_8;
    const char *VAR_9 = VAR_3;
    const char *VAR_10;
    const AVPixFmtDescriptor *VAR_11, *VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;

    VAR_11 = FUNC_4(VAR_5);
    VAR_12 = FUNC_4(VAR_6);

    VAR_15 = VAR_16 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_11->nb_components; VAR_14++)
        VAR_15 = FUNC_2(VAR_15,
                            VAR_11->comp[VAR_14].plane + 1);
    for (VAR_14 = 0; VAR_14 < VAR_12->nb_components; VAR_14++)
        VAR_16 = FUNC_2(VAR_16,
                               VAR_12->comp[VAR_14].plane + 1);

    VAR_7->nb_planes = VAR_15;
    VAR_7->x_subsample = 1 << VAR_11->log2_chroma_w;
    VAR_7->y_subsample = 1 << VAR_11->log2_chroma_h;

    if (VAR_7->x_position % VAR_7->x_subsample ||
        VAR_7->y_position % VAR_7->y_subsample) {
        FUNC_3(VAR_4, VAR_1, "Warning: overlay position (%d, %d) "
               "does not match subsampling (%d, %d).\n",
               VAR_7->x_position, VAR_7->y_position,
               VAR_7->x_subsample, VAR_7->y_subsample);
    }

    if (VAR_15 == VAR_16) {
        if (VAR_11->nb_components == VAR_12->nb_components)
            VAR_10 = "overlay_no_alpha";
        else
            VAR_10 = "overlay_internal_alpha";
        VAR_7->alpha_separate = 0;
    } else {
        VAR_10 = "overlay_external_alpha";
        VAR_7->alpha_separate = 1;
    }

    FUNC_3(VAR_4, VAR_0, "Using kernel %s.\n", VAR_10);

    VAR_13 = FUNC_9(VAR_4, &VAR_9, 1);
    if (VAR_13 < 0)
        goto fail;

    VAR_7->command_queue = FUNC_5(VAR_7->ocf.hwctx->context,
                                              VAR_7->ocf.hwctx->device_id,
                                              0, &VAR_8);
    FUNC_1(FUNC_0(VAR_2), "Failed to create OpenCL "
                     "command queue %d.\n", VAR_8);

    VAR_7->kernel = FUNC_6(VAR_7->ocf.program, VAR_10, &VAR_8);
    FUNC_1(FUNC_0(VAR_2), "Failed to create kernel %d.\n", VAR_8);

    VAR_7->initialised = 1;
    return 0;

fail:
    if (VAR_7->command_queue)
        FUNC_7(VAR_7->command_queue);
    if (VAR_7->kernel)
        FUNC_8(VAR_7->kernel);
    return VAR_13;
}
