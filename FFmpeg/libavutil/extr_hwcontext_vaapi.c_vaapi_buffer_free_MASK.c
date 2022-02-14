
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ VASurfaceID ;
typedef scalar_t__ VAStatus ;
struct TYPE_7__ {TYPE_1__* device_ctx; } ;
struct TYPE_6__ {int display; } ;
struct TYPE_5__ {TYPE_2__* hwctx; } ;
typedef TYPE_2__ AVVAAPIDeviceContext ;
typedef TYPE_3__ AVHWFramesContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, uint8_t *VAR_3)
{
    AVHWFramesContext *VAR_4 = VAR_2;
    AVVAAPIDeviceContext *VAR_5 = VAR_4->device_ctx->hwctx;
    VASurfaceID VAR_6;
    VAStatus VAR_7;

    VAR_6 = (VASurfaceID)(uintptr_t)VAR_3;

    VAR_7 = FUNC_1(VAR_5->display, &VAR_6, 1);
    if (VAR_7 != VAR_1) {
        FUNC_0(VAR_4, VAR_0, "Failed to destroy surface %#x: "
               "%d (%s).\n", VAR_6, VAR_7, FUNC_2(VAR_7));
    }
}
