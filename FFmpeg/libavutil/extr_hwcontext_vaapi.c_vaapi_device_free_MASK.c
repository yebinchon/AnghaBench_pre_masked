
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ drm_fd; scalar_t__ x11_display; } ;
typedef TYPE_1__ VAAPIDevicePriv ;
struct TYPE_8__ {TYPE_1__* user_opaque; TYPE_2__* hwctx; } ;
struct TYPE_7__ {scalar_t__ display; } ;
typedef TYPE_2__ AVVAAPIDeviceContext ;
typedef TYPE_3__ AVHWDeviceContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(AVHWDeviceContext *VAR_0)
{
    AVVAAPIDeviceContext *VAR_1 = VAR_0->hwctx;
    VAAPIDevicePriv *VAR_2 = VAR_0->user_opaque;

    if (VAR_1->display)
        FUNC_3(VAR_1->display);






    if (VAR_2->drm_fd >= 0)
        FUNC_2(VAR_2->drm_fd);

    FUNC_1(&VAR_2);
}
