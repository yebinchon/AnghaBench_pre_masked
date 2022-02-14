
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ mfxStatus ;
typedef int mfxSession ;
struct TYPE_10__ {int Free; int GetHDL; int Unlock; int Lock; int Alloc; TYPE_2__* pthis; } ;
typedef TYPE_1__ mfxFrameAllocator ;
struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_13__ {int device_ref; TYPE_3__* hwctx; } ;
struct TYPE_12__ {int nb_surfaces; } ;
struct TYPE_11__ {int nb_mids; TYPE_5__* mids_buf; int * mids; TYPE_6__* hw_frames_ctx; int * logctx; } ;
typedef int QSVMid ;
typedef TYPE_2__ QSVFramesContext ;
typedef TYPE_3__ AVQSVFramesContext ;
typedef TYPE_4__ AVHWFramesContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_5__**) ;
 int FUNC_3 (int *,int *,int ,char const*,int) ;
 int FUNC_4 (int *,scalar_t__,char*) ;
 TYPE_5__* FUNC_5 (TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_6(AVCodecContext *VAR_7, mfxSession *VAR_8,
                               QSVFramesContext *VAR_9,
                               const char *VAR_10, int VAR_11, int VAR_12)
{
    mfxFrameAllocator VAR_13 = {
        .pthis = VAR_9,
        .Alloc = VAR_2,
        .Lock = VAR_5,
        .Unlock = VAR_6,
        .GetHDL = VAR_4,
        .Free = VAR_3,
    };

    AVHWFramesContext *VAR_14 = (AVHWFramesContext*)VAR_9->hw_frames_ctx->data;
    AVQSVFramesContext *VAR_15 = VAR_14->hwctx;

    mfxSession VAR_16;
    mfxStatus VAR_17;

    int VAR_18;

    VAR_18 = FUNC_3(VAR_7, &VAR_16,
                                     VAR_14->device_ref, VAR_10, VAR_12);
    if (VAR_18 < 0)
        return VAR_18;

    if (!VAR_11) {
        VAR_9->logctx = VAR_7;


        FUNC_2(&VAR_9->mids_buf);
        VAR_9->mids_buf = FUNC_5(VAR_9->hw_frames_ctx);
        if (!VAR_9->mids_buf)
            return FUNC_0(VAR_0);
        VAR_9->mids = (QSVMid*)VAR_9->mids_buf->data;
        VAR_9->nb_mids = VAR_15->nb_surfaces;

        VAR_17 = FUNC_1(VAR_16, &VAR_13);
        if (VAR_17 != VAR_1)
            return FUNC_4(VAR_7, VAR_17,
                                      "Error setting a frame allocator");
    }

    *VAR_8 = VAR_16;
    return 0;
}
