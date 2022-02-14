
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ cl_mem ;
typedef int cl_int ;
typedef int cl_image_format ;
struct TYPE_13__ {scalar_t__ image_row_pitch; } ;
typedef TYPE_2__ cl_image_desc ;
struct TYPE_16__ {int height; int width; int sw_format; TYPE_1__* device_ctx; } ;
struct TYPE_15__ {int context; } ;
struct TYPE_14__ {int nb_planes; scalar_t__* planes; } ;
struct TYPE_12__ {TYPE_4__* hwctx; } ;
typedef TYPE_3__ AVOpenCLFrameDescriptor ;
typedef TYPE_4__ AVOpenCLDeviceContext ;
typedef TYPE_5__ AVHWFramesContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int,int *,TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*,int ,char*,int,int ) ;
 TYPE_3__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ,int *,TYPE_2__*,int *,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int,int ,int ,int *,TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static AVBufferRef *FUNC_8(void *VAR_4, int VAR_5)
{
    AVHWFramesContext *VAR_6 = VAR_4;
    AVOpenCLDeviceContext *VAR_7 = VAR_6->device_ctx->hwctx;
    AVOpenCLFrameDescriptor *VAR_8;
    cl_int VAR_9;
    cl_mem VAR_10;
    cl_image_format VAR_11;
    cl_image_desc VAR_12;
    int VAR_13, VAR_14;
    AVBufferRef *VAR_15;

    VAR_8 = FUNC_4(sizeof(*VAR_8));
    if (!VAR_8)
        return ((void*)0);

    for (VAR_14 = 0;; VAR_14++) {
        VAR_13 = FUNC_7(VAR_6->sw_format, VAR_14,
                                      VAR_6->width, VAR_6->height,
                                      &VAR_11, &VAR_12);
        if (VAR_13 == FUNC_0(VAR_2))
            break;
        if (VAR_13 < 0)
            goto fail;



        VAR_12.image_row_pitch = 0;

        VAR_10 = FUNC_5(VAR_7->context, VAR_1,
                              &VAR_11, &VAR_12, ((void*)0), &VAR_9);
        if (!VAR_10) {
            FUNC_3(VAR_6, VAR_0, "Failed to create image for "
                   "plane %d: %d.\n", VAR_14, VAR_9);
            goto fail;
        }

        VAR_8->planes[VAR_14] = VAR_10;
    }

    VAR_8->nb_planes = VAR_14;

    VAR_15 = FUNC_1((uint8_t*)VAR_8, sizeof(*VAR_8),
                           &VAR_3, VAR_6, 0);
    if (!VAR_15)
        goto fail;

    return VAR_15;

fail:
    for (VAR_14 = 0; VAR_8->planes[VAR_14]; VAR_14++)
        FUNC_6(VAR_8->planes[VAR_14]);
    FUNC_2(VAR_8);
    return ((void*)0);
}
