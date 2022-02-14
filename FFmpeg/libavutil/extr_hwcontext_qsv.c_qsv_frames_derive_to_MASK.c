
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int mfxMemId ;
struct TYPE_19__ {TYPE_5__* hwctx; TYPE_2__* device_ctx; TYPE_1__* internal; } ;
struct TYPE_18__ {int nb_surfaces; TYPE_10__* surfaces; void* frame_type; int surface_type; int surface_ids; } ;
struct TYPE_17__ {TYPE_10__* surfaces_internal; } ;
struct TYPE_16__ {int MemId; } ;
struct TYPE_15__ {int type; } ;
struct TYPE_14__ {TYPE_4__* priv; } ;
struct TYPE_13__ {TYPE_3__ Data; } ;
typedef TYPE_4__ QSVFramesContext ;
typedef TYPE_5__ AVVAAPIFramesContext ;
typedef TYPE_5__ AVQSVFramesContext ;
typedef TYPE_7__ AVHWFramesContext ;
typedef TYPE_5__ AVDXVA2FramesContext ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_7__*,TYPE_10__*) ;

__attribute__((used)) static int FUNC_3(AVHWFramesContext *VAR_5,
                                AVHWFramesContext *VAR_6, int VAR_7)
{
    QSVFramesContext *VAR_8 = VAR_5->internal->priv;
    AVQSVFramesContext *VAR_9 = VAR_5->hwctx;
    int VAR_10;

    switch (VAR_6->device_ctx->type) {
    default:
        return FUNC_0(VAR_2);
    }

    VAR_9->surfaces = VAR_8->surfaces_internal;

    return 0;
}
