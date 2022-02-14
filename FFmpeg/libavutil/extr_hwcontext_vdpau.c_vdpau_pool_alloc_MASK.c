
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int surf ;
typedef scalar_t__ VdpVideoSurface ;
typedef scalar_t__ VdpStatus ;
struct TYPE_13__ {int chroma_type; } ;
typedef TYPE_4__ VDPAUFramesContext ;
struct TYPE_14__ {scalar_t__ (* surf_create ) (int ,int ,int ,int ,scalar_t__*) ;int (* surf_destroy ) (scalar_t__) ;} ;
typedef TYPE_5__ VDPAUDeviceContext ;
struct TYPE_16__ {int height; int width; TYPE_3__* device_ctx; TYPE_1__* internal; } ;
struct TYPE_15__ {int device; } ;
struct TYPE_12__ {TYPE_2__* internal; TYPE_6__* hwctx; } ;
struct TYPE_11__ {TYPE_5__* priv; } ;
struct TYPE_10__ {TYPE_4__* priv; } ;
typedef TYPE_6__ AVVDPAUDeviceContext ;
typedef TYPE_7__ AVHWFramesContext ;
typedef int AVBufferRef ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *,int,int ,TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_7__*,int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static AVBufferRef *FUNC_4(void *VAR_4, int VAR_5)
{
    AVHWFramesContext *VAR_6 = VAR_4;
    VDPAUFramesContext *VAR_7 = VAR_6->internal->priv;
    AVVDPAUDeviceContext *VAR_8 = VAR_6->device_ctx->hwctx;
    VDPAUDeviceContext *VAR_9 = VAR_6->device_ctx->internal->priv;

    AVBufferRef *VAR_10;
    VdpVideoSurface VAR_11;
    VdpStatus VAR_12;

    VAR_12 = VAR_9->surf_create(VAR_8->device, VAR_7->chroma_type,
                                   VAR_6->width, VAR_6->height, &VAR_11);
    if (VAR_12 != VAR_2) {
        FUNC_1(VAR_6, VAR_1, "Error allocating a VDPAU video surface\n");
        return ((void*)0);
    }

    VAR_10 = FUNC_0((uint8_t*)(uintptr_t)VAR_11, sizeof(VAR_11),
                           VAR_3, VAR_6, VAR_0);
    if (!VAR_10) {
        VAR_9->surf_destroy(VAR_11);
        return ((void*)0);
    }

    return VAR_10;
}
