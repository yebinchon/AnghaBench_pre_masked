
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {void* data; } ;
struct TYPE_8__ {int (* cuvidDestroyDecoder ) (scalar_t__) ;} ;
struct TYPE_7__ {TYPE_3__* cvdl; TYPE_5__* hw_device_ref; TYPE_1__* cudl; scalar_t__ decoder; int cuda_ctx; } ;
struct TYPE_6__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
typedef TYPE_2__ NVDECDecoder ;
typedef int CUcontext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__**) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_0, uint8_t *VAR_1)
{
    NVDECDecoder *VAR_2 = (NVDECDecoder*)VAR_1;

    if (VAR_2->decoder) {
        void *VAR_3 = VAR_2->hw_device_ref->data;
        CUcontext VAR_4;
        FUNC_0(VAR_2->cudl->cuCtxPushCurrent(VAR_2->cuda_ctx));
        FUNC_0(VAR_2->cvdl->cuvidDestroyDecoder(VAR_2->decoder));
        FUNC_0(VAR_2->cudl->cuCtxPopCurrent(&VAR_4));
    }

    FUNC_1(&VAR_2->hw_device_ref);

    FUNC_3(&VAR_2->cvdl);

    FUNC_2(&VAR_2);
}
