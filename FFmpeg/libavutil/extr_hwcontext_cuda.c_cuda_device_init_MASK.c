
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int cuda_dl; } ;
struct TYPE_9__ {TYPE_6__* internal; } ;
struct TYPE_8__ {TYPE_2__* hwctx; } ;
typedef TYPE_1__ AVHWDeviceContext ;
typedef TYPE_2__ AVCUDADeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 TYPE_6__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(AVHWDeviceContext *VAR_2)
{
    AVCUDADeviceContext *VAR_3 = VAR_2->hwctx;
    int VAR_4;

    if (!VAR_3->internal) {
        VAR_3->internal = FUNC_2(sizeof(*VAR_3->internal));
        if (!VAR_3->internal)
            return FUNC_0(VAR_1);
    }

    if (!VAR_3->internal->cuda_dl) {
        VAR_4 = FUNC_4(&VAR_3->internal->cuda_dl, VAR_2);
        if (VAR_4 < 0) {
            FUNC_1(VAR_2, VAR_0, "Could not dynamically load CUDA\n");
            goto error;
        }
    }

    return 0;

error:
    FUNC_3(VAR_2);
    return VAR_4;
}
