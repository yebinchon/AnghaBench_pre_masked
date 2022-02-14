
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ devmgr; } ;
struct TYPE_7__ {TYPE_1__* user_opaque; TYPE_3__* hwctx; } ;
struct TYPE_6__ {scalar_t__ device_handle; scalar_t__ dxva2lib; scalar_t__ d3dlib; scalar_t__ d3d9; scalar_t__ d3d9device; } ;
typedef TYPE_1__ DXVA2DevicePriv ;
typedef TYPE_2__ AVHWDeviceContext ;
typedef TYPE_3__ AVDXVA2DeviceContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(AVHWDeviceContext *VAR_1)
{
    AVDXVA2DeviceContext *VAR_2 = VAR_1->hwctx;
    DXVA2DevicePriv *VAR_3 = VAR_1->user_opaque;

    if (VAR_2->devmgr && VAR_3->device_handle != VAR_0)
        FUNC_2(VAR_2->devmgr, VAR_3->device_handle);

    if (VAR_2->devmgr)
        FUNC_3(VAR_2->devmgr);

    if (VAR_3->d3d9device)
        FUNC_1(VAR_3->d3d9device);

    if (VAR_3->d3d9)
        FUNC_0(VAR_3->d3d9);

    if (VAR_3->d3dlib)
        FUNC_5(VAR_3->d3dlib);

    if (VAR_3->dxva2lib)
        FUNC_5(VAR_3->dxva2lib);

    FUNC_4(&VAR_1->user_opaque);
}
