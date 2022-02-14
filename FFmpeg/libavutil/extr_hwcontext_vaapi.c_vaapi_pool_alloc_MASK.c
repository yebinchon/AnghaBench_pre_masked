
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int surface_id ;
typedef scalar_t__ VASurfaceID ;
typedef scalar_t__ VAStatus ;
struct TYPE_11__ {int nb_attributes; int attributes; int rt_format; } ;
typedef TYPE_3__ VAAPIFramesContext ;
struct TYPE_14__ {scalar_t__ initial_pool_size; int height; int width; TYPE_4__* hwctx; TYPE_2__* device_ctx; TYPE_1__* internal; } ;
struct TYPE_13__ {int display; } ;
struct TYPE_12__ {scalar_t__ nb_surfaces; scalar_t__* surface_ids; } ;
struct TYPE_10__ {TYPE_5__* hwctx; } ;
struct TYPE_9__ {TYPE_3__* priv; } ;
typedef TYPE_4__ AVVAAPIFramesContext ;
typedef TYPE_5__ AVVAAPIDeviceContext ;
typedef TYPE_6__ AVHWFramesContext ;
typedef int AVBufferRef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int,int *,TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,scalar_t__*,int,int ,int ) ;
 int FUNC_4 (int ,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static AVBufferRef *FUNC_6(void *VAR_5, int VAR_6)
{
    AVHWFramesContext *VAR_7 = VAR_5;
    VAAPIFramesContext *VAR_8 = VAR_7->internal->priv;
    AVVAAPIDeviceContext *VAR_9 = VAR_7->device_ctx->hwctx;
    AVVAAPIFramesContext *VAR_10 = VAR_7->hwctx;
    VASurfaceID VAR_11;
    VAStatus VAR_12;
    AVBufferRef *VAR_13;

    if (VAR_7->initial_pool_size > 0 &&
        VAR_10->nb_surfaces >= VAR_7->initial_pool_size)
        return ((void*)0);

    VAR_12 = FUNC_3(VAR_9->display, VAR_8->rt_format,
                           VAR_7->width, VAR_7->height,
                           &VAR_11, 1,
                           VAR_8->attributes, VAR_8->nb_attributes);
    if (VAR_12 != VAR_3) {
        FUNC_2(VAR_7, VAR_2, "Failed to create surface: "
               "%d (%s).\n", VAR_12, FUNC_5(VAR_12));
        return ((void*)0);
    }
    FUNC_2(VAR_7, VAR_1, "Created surface %#x.\n", VAR_11);

    VAR_13 = FUNC_1((uint8_t*)(uintptr_t)VAR_11,
                           sizeof(VAR_11), &VAR_4,
                           VAR_7, VAR_0);
    if (!VAR_13) {
        FUNC_4(VAR_9->display, &VAR_11, 1);
        return ((void*)0);
    }

    if (VAR_7->initial_pool_size > 0) {


        FUNC_0(VAR_10->nb_surfaces < VAR_7->initial_pool_size);
        VAR_10->surface_ids[VAR_10->nb_surfaces] = VAR_11;
        ++VAR_10->nb_surfaces;
    }

    return VAR_13;
}
