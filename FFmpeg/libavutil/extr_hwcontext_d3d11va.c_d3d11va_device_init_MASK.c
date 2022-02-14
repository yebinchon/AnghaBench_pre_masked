
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lock_ctx; int video_context; int device_context; int video_device; int device; int unlock; scalar_t__ lock; } ;
struct TYPE_4__ {TYPE_2__* hwctx; } ;
typedef int HRESULT ;
typedef TYPE_1__ AVHWDeviceContext ;
typedef TYPE_2__ AVD3D11VADeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,void**) ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *,int ,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(AVHWDeviceContext *VAR_8)
{
    AVD3D11VADeviceContext *VAR_9 = VAR_8->hwctx;
    HRESULT VAR_10;

    if (!VAR_9->lock) {
        VAR_9->lock_ctx = FUNC_1(((void*)0), 0, ((void*)0));
        if (VAR_9->lock_ctx == VAR_5) {
            FUNC_5(((void*)0), VAR_1, "Failed to create a mutex\n");
            return FUNC_0(VAR_2);
        }
        VAR_9->lock = VAR_6;
        VAR_9->unlock = VAR_7;
    }

    if (!VAR_9->device_context) {
        FUNC_4(VAR_9->device, &VAR_9->device_context);
        if (!VAR_9->device_context)
            return VAR_0;
    }

    if (!VAR_9->video_device) {
        VAR_10 = FUNC_3(VAR_9->device, &VAR_4,
                                                (void **)&VAR_9->video_device);
        if (FUNC_2(VAR_10))
            return VAR_0;
    }

    if (!VAR_9->video_context) {
        VAR_10 = FUNC_3(VAR_9->device_context, &VAR_3,
                                                (void **)&VAR_9->video_context);
        if (FUNC_2(VAR_10))
            return VAR_0;
    }

    return 0;
}
