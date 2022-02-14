
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* user_opaque; TYPE_2__* hwctx; } ;
struct TYPE_7__ {scalar_t__ session; } ;
struct TYPE_6__ {int child_device_ctx; } ;
typedef TYPE_1__ QSVDevicePriv ;
typedef TYPE_2__ AVQSVDeviceContext ;
typedef TYPE_3__ AVHWDeviceContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**) ;

__attribute__((used)) static void FUNC_3(AVHWDeviceContext *VAR_0)
{
    AVQSVDeviceContext *VAR_1 = VAR_0->hwctx;
    QSVDevicePriv *VAR_2 = VAR_0->user_opaque;

    if (VAR_1->session)
        FUNC_0(VAR_1->session);

    FUNC_1(&VAR_2->child_device_ctx);
    FUNC_2(&VAR_2);
}
