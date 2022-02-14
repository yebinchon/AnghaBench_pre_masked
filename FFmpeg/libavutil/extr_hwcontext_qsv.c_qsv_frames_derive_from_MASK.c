
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int VASurfaceID ;
struct TYPE_14__ {TYPE_4__* hwctx; TYPE_1__* device_ctx; } ;
struct TYPE_13__ {int nb_surfaces; int surface_type; int frame_type; int ** surfaces; int * surface_ids; } ;
struct TYPE_12__ {scalar_t__ MemId; } ;
struct TYPE_11__ {TYPE_3__ Data; } ;
struct TYPE_10__ {int type; } ;
typedef int IDirect3DSurface9 ;
typedef TYPE_4__ AVVAAPIFramesContext ;
typedef TYPE_4__ AVQSVFramesContext ;
typedef TYPE_6__ AVHWFramesContext ;
typedef TYPE_4__ AVDXVA2FramesContext ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(AVHWFramesContext *VAR_5,
                                  AVHWFramesContext *VAR_6, int VAR_7)
{
    AVQSVFramesContext *VAR_8 = VAR_6->hwctx;
    int VAR_9;

    switch (VAR_5->device_ctx->type) {
    default:
        return FUNC_0(VAR_3);
    }

    return 0;
}
