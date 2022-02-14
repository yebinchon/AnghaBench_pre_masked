
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int uint8_t ;
typedef int mfxStatus ;
typedef TYPE_4__* mfxMemId ;
typedef int mfxHDL ;
struct TYPE_21__ {int * V; int * U; int * Y; int Pitch; } ;
typedef TYPE_5__ mfxFrameData ;
struct TYPE_23__ {int height; int width; int sw_format; TYPE_7__* hwctx; } ;
struct TYPE_22__ {TYPE_1__* surfaces; } ;
struct TYPE_18__ {int MemId; } ;
struct TYPE_19__ {TYPE_2__ Data; int Info; } ;
struct TYPE_20__ {TYPE_11__* locked_frame; TYPE_11__* hw_frame; int handle; TYPE_3__ surf; TYPE_14__* hw_frames_ref; } ;
struct TYPE_17__ {int Info; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {int ** data; int * linesize; int hw_frames_ctx; int height; int width; int * buf; int format; } ;
typedef TYPE_4__ QSVMid ;
typedef TYPE_7__ AVQSVFramesContext ;
typedef TYPE_8__ AVHWFramesContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_14__*) ;
 void* FUNC_2 () ;
 int FUNC_3 (TYPE_11__**) ;
 int FUNC_4 (TYPE_11__*,TYPE_11__*,int ) ;

__attribute__((used)) static mfxStatus FUNC_5(mfxHDL VAR_5, mfxMemId VAR_6, mfxFrameData *VAR_7)
{
    QSVMid *VAR_8 = VAR_6;
    AVHWFramesContext *VAR_9 = (AVHWFramesContext*)VAR_8->hw_frames_ref->data;
    AVQSVFramesContext *VAR_10 = VAR_9->hwctx;
    int VAR_11;

    if (VAR_8->locked_frame)
        return VAR_4;


    VAR_8->locked_frame = FUNC_2();
    if (!VAR_8->locked_frame)
        return VAR_2;
    VAR_8->locked_frame->format = VAR_9->sw_format;


    VAR_8->hw_frame = FUNC_2();
    if (!VAR_8->hw_frame)
        goto fail;

    VAR_8->hw_frame->data[3] = (uint8_t*)&VAR_8->surf;
    VAR_8->hw_frame->format = VAR_1;


    VAR_8->hw_frame->buf[0] = FUNC_0(1);
    if (!VAR_8->hw_frame->buf[0])
        goto fail;

    VAR_8->hw_frame->width = VAR_9->width;
    VAR_8->hw_frame->height = VAR_9->height;

    VAR_8->hw_frame->hw_frames_ctx = FUNC_1(VAR_8->hw_frames_ref);
    if (!VAR_8->hw_frame->hw_frames_ctx)
        goto fail;

    VAR_8->surf.Info = VAR_10->surfaces[0].Info;
    VAR_8->surf.Data.MemId = VAR_8->handle;


    VAR_11 = FUNC_4(VAR_8->locked_frame, VAR_8->hw_frame,
                         VAR_0);
    if (VAR_11 < 0)
        goto fail;

    VAR_7->Pitch = VAR_8->locked_frame->linesize[0];
    VAR_7->Y = VAR_8->locked_frame->data[0];
    VAR_7->U = VAR_8->locked_frame->data[1];
    VAR_7->V = VAR_8->locked_frame->data[1] + 1;

    return VAR_3;
fail:
    FUNC_3(&VAR_8->hw_frame);
    FUNC_3(&VAR_8->locked_frame);
    return VAR_2;
}
