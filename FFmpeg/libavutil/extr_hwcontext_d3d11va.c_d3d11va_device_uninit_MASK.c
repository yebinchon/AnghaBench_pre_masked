
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * lock; int lock_ctx; int * video_context; int * video_device; int * device_context; int * device; } ;
struct TYPE_4__ {TYPE_2__* hwctx; } ;
typedef TYPE_1__ AVHWDeviceContext ;
typedef TYPE_2__ AVD3D11VADeviceContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_5(AVHWDeviceContext *VAR_2)
{
    AVD3D11VADeviceContext *VAR_3 = VAR_2->hwctx;

    if (VAR_3->device) {
        FUNC_2(VAR_3->device);
        VAR_3->device = ((void*)0);
    }

    if (VAR_3->device_context) {
        FUNC_1(VAR_3->device_context);
        VAR_3->device_context = ((void*)0);
    }

    if (VAR_3->video_device) {
        FUNC_4(VAR_3->video_device);
        VAR_3->video_device = ((void*)0);
    }

    if (VAR_3->video_context) {
        FUNC_3(VAR_3->video_context);
        VAR_3->video_context = ((void*)0);
    }

    if (VAR_3->lock == VAR_1) {
        FUNC_0(VAR_3->lock_ctx);
        VAR_3->lock_ctx = VAR_0;
        VAR_3->lock = ((void*)0);
    }
}
