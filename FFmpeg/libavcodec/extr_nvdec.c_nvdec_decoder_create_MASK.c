
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_22__ {scalar_t__ data; } ;
struct TYPE_21__ {int stream; TYPE_1__* internal; int cuda_ctx; } ;
struct TYPE_20__ {TYPE_5__* hwctx; } ;
struct TYPE_19__ {TYPE_2__* cudl; int decoder; TYPE_10__* cvdl; int cuda_ctx; int stream; int hw_device_ref; } ;
struct TYPE_18__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_17__ {TYPE_2__* cuda_dl; } ;
struct TYPE_16__ {int (* cuvidCreateDecoder ) (int *,int *) ;} ;
typedef TYPE_3__ NVDECDecoder ;
typedef int CUcontext ;
typedef int CUVIDDECODECREATEINFO ;
typedef TYPE_4__ AVHWDeviceContext ;
typedef TYPE_5__ AVCUDADeviceContext ;
typedef TYPE_6__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_6__* FUNC_2 (int *,int,int ,int *,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__**) ;
 int FUNC_5 (TYPE_3__**) ;
 int FUNC_6 (void*,int ,char*) ;
 TYPE_3__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_10__**,void*) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_3__*,int *,void*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(AVBufferRef **VAR_4, AVBufferRef *VAR_5,
                                CUVIDDECODECREATEINFO *VAR_6, void *VAR_7)
{
    AVHWDeviceContext *VAR_8 = (AVHWDeviceContext*)VAR_5->data;
    AVCUDADeviceContext *VAR_9 = VAR_8->hwctx;

    AVBufferRef *VAR_10;
    NVDECDecoder *VAR_11;

    CUcontext VAR_12;
    int VAR_13;

    VAR_11 = FUNC_7(sizeof(*VAR_11));
    if (!VAR_11)
        return FUNC_0(VAR_2);

    VAR_10 = FUNC_2((uint8_t*)VAR_11, sizeof(*VAR_11),
                                   VAR_3, ((void*)0), VAR_0);
    if (!VAR_10) {
        FUNC_5(&VAR_11);
        return FUNC_0(VAR_2);
    }

    VAR_11->hw_device_ref = FUNC_3(VAR_5);
    if (!VAR_11->hw_device_ref) {
        VAR_13 = FUNC_0(VAR_2);
        goto fail;
    }
    VAR_11->cuda_ctx = VAR_9->cuda_ctx;
    VAR_11->cudl = VAR_9->internal->cuda_dl;
    VAR_11->stream = VAR_9->stream;

    VAR_13 = FUNC_8(&VAR_11->cvdl, VAR_7);
    if (VAR_13 < 0) {
        FUNC_6(VAR_7, VAR_1, "Failed loading nvcuvid.\n");
        goto fail;
    }

    VAR_13 = FUNC_1(VAR_11->cudl->cuCtxPushCurrent(VAR_11->cuda_ctx));
    if (VAR_13 < 0)
        goto fail;

    VAR_13 = FUNC_9(VAR_11, VAR_6, VAR_7);
    if (VAR_13 < 0) {
        FUNC_1(VAR_11->cudl->cuCtxPopCurrent(&VAR_12));
        goto fail;
    }

    VAR_13 = FUNC_1(VAR_11->cvdl->cuvidCreateDecoder(&VAR_11->decoder, VAR_6));

    FUNC_1(VAR_11->cudl->cuCtxPopCurrent(&VAR_12));

    if (VAR_13 < 0) {
        goto fail;
    }

    *VAR_4 = VAR_10;

    return 0;
fail:
    FUNC_4(&VAR_10);
    return VAR_13;
}
