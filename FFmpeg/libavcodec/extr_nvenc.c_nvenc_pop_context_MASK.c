
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {TYPE_1__* cuda_dl; } ;
struct TYPE_8__ {scalar_t__ d3d11_device; TYPE_2__ nvenc_dload_funcs; } ;
struct TYPE_6__ {int (* cuCtxPopCurrent ) (int *) ;} ;
typedef TYPE_2__ NvencDynLoadFunctions ;
typedef TYPE_3__ NvencContext ;
typedef int CUcontext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    NvencContext *VAR_1 = VAR_0->priv_data;
    NvencDynLoadFunctions *VAR_2 = &VAR_1->nvenc_dload_funcs;
    CUcontext VAR_3;

    if (VAR_1->d3d11_device)
        return 0;

    return FUNC_0(VAR_2->cuda_dl->cuCtxPopCurrent(&VAR_3));
}
