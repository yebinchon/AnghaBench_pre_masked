
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VdpVideoSurface ;
struct TYPE_7__ {int (* surf_destroy ) (int ) ;} ;
typedef TYPE_3__ VDPAUDeviceContext ;
struct TYPE_8__ {TYPE_2__* device_ctx; } ;
struct TYPE_6__ {TYPE_1__* internal; } ;
struct TYPE_5__ {TYPE_3__* priv; } ;
typedef TYPE_4__ AVHWFramesContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, uint8_t *VAR_1)
{
    AVHWFramesContext *VAR_2 = VAR_0;
    VDPAUDeviceContext *VAR_3 = VAR_2->device_ctx->internal->priv;
    VdpVideoSurface VAR_4 = (VdpVideoSurface)(uintptr_t)VAR_1;

    VAR_3->surf_destroy(VAR_4);
}
