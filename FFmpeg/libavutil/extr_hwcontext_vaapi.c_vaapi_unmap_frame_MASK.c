
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ VASurfaceID ;
typedef scalar_t__ VAStatus ;
struct TYPE_14__ {int image_id; int buf; } ;
struct TYPE_15__ {int flags; TYPE_3__ image; } ;
typedef TYPE_4__ VAAPIMapping ;
struct TYPE_18__ {int height; int width; TYPE_1__* device_ctx; } ;
struct TYPE_17__ {int display; } ;
struct TYPE_16__ {TYPE_2__* source; TYPE_4__* priv; } ;
struct TYPE_13__ {scalar_t__* data; } ;
struct TYPE_12__ {TYPE_6__* hwctx; } ;
typedef TYPE_5__ HWMapDescriptor ;
typedef TYPE_6__ AVVAAPIDeviceContext ;
typedef TYPE_7__ AVHWFramesContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_7__*,int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(AVHWFramesContext *VAR_5,
                              HWMapDescriptor *VAR_6)
{
    AVVAAPIDeviceContext *VAR_7 = VAR_5->device_ctx->hwctx;
    VAAPIMapping *VAR_8 = VAR_6->priv;
    VASurfaceID VAR_9;
    VAStatus VAR_10;

    VAR_9 = (VASurfaceID)(uintptr_t)VAR_6->source->data[3];
    FUNC_1(VAR_5, VAR_2, "Unmap surface %#x.\n", VAR_9);

    VAR_10 = FUNC_5(VAR_7->display, VAR_8->image.buf);
    if (VAR_10 != VAR_4) {
        FUNC_1(VAR_5, VAR_3, "Failed to unmap image from surface "
               "%#x: %d (%s).\n", VAR_9, VAR_10, FUNC_3(VAR_10));
    }

    if ((VAR_8->flags & VAR_1) &&
        !(VAR_8->flags & VAR_0)) {
        VAR_10 = FUNC_4(VAR_7->display, VAR_9, VAR_8->image.image_id,
                         0, 0, VAR_5->width, VAR_5->height,
                         0, 0, VAR_5->width, VAR_5->height);
        if (VAR_10 != VAR_4) {
            FUNC_1(VAR_5, VAR_3, "Failed to write image to surface "
                   "%#x: %d (%s).\n", VAR_9, VAR_10, FUNC_3(VAR_10));
        }
    }

    VAR_10 = FUNC_2(VAR_7->display, VAR_8->image.image_id);
    if (VAR_10 != VAR_4) {
        FUNC_1(VAR_5, VAR_3, "Failed to destroy image from surface "
               "%#x: %d (%s).\n", VAR_9, VAR_10, FUNC_3(VAR_10));
    }

    FUNC_0(VAR_8);
}
