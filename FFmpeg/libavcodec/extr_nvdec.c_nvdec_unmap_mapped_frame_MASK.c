
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {TYPE_3__* cudl; int decoder; TYPE_2__* cvdl; int cuda_ctx; TYPE_1__* hw_device_ref; } ;
struct TYPE_11__ {TYPE_7__* decoder_ref; TYPE_7__* idx_ref; } ;
struct TYPE_10__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_9__ {int (* cuvidUnmapVideoFrame ) (int ,int ) ;} ;
struct TYPE_8__ {void* data; } ;
typedef TYPE_4__ NVDECFrame ;
typedef TYPE_5__ NVDECDecoder ;
typedef int CUdeviceptr ;
typedef int CUcontext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__**) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0, uint8_t *VAR_1)
{
    NVDECFrame *VAR_2 = (NVDECFrame*)VAR_1;
    NVDECDecoder *VAR_3 = (NVDECDecoder*)VAR_2->decoder_ref->data;
    void *VAR_4 = VAR_3->hw_device_ref->data;
    CUdeviceptr VAR_5 = (CUdeviceptr)VAR_0;
    int VAR_6;
    CUcontext VAR_7;

    VAR_6 = FUNC_0(VAR_3->cudl->cuCtxPushCurrent(VAR_3->cuda_ctx));
    if (VAR_6 < 0)
        goto finish;

    FUNC_0(VAR_3->cvdl->cuvidUnmapVideoFrame(VAR_3->decoder, VAR_5));

    FUNC_0(VAR_3->cudl->cuCtxPopCurrent(&VAR_7));

finish:
    FUNC_1(&VAR_2->idx_ref);
    FUNC_1(&VAR_2->decoder_ref);
    FUNC_2(VAR_2);
}
