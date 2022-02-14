
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int NumExtParam; int ** ExtParam; int * MemId; scalar_t__ UV; scalar_t__ Y; int PitchLow; } ;
struct TYPE_16__ {TYPE_1__ Data; int Info; } ;
typedef TYPE_4__ mfxFrameSurface1 ;
typedef int mfxExtBuffer ;
struct TYPE_20__ {int * mids; } ;
struct TYPE_19__ {scalar_t__ format; scalar_t__* data; int * linesize; } ;
struct TYPE_18__ {TYPE_8__ frames_ctx; int frame_info; scalar_t__ pool; } ;
struct TYPE_14__ {int BufferSz; int BufferId; } ;
struct TYPE_15__ {TYPE_2__ Header; } ;
struct TYPE_17__ {int used; TYPE_3__ dec_info; int * ext_param; TYPE_4__ surface; TYPE_7__* frame; } ;
typedef TYPE_5__ QSVFrame ;
typedef TYPE_6__ QSVContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_8__*,TYPE_5__*) ;
 int FUNC_2 (int *,TYPE_7__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_3, QSVContext *VAR_4, QSVFrame *VAR_5)
{
    int VAR_6;

    if (VAR_4->pool)
        VAR_6 = FUNC_2(VAR_3, VAR_5->frame, VAR_4->pool);
    else
        VAR_6 = FUNC_0(VAR_3, VAR_5->frame, VAR_0);

    if (VAR_6 < 0)
        return VAR_6;

    if (VAR_5->frame->format == VAR_1) {
        VAR_5->surface = *(mfxFrameSurface1*)VAR_5->frame->data[3];
    } else {
        VAR_5->surface.Info = VAR_4->frame_info;

        VAR_5->surface.Data.PitchLow = VAR_5->frame->linesize[0];
        VAR_5->surface.Data.Y = VAR_5->frame->data[0];
        VAR_5->surface.Data.UV = VAR_5->frame->data[1];
    }

    if (VAR_4->frames_ctx.mids) {
        VAR_6 = FUNC_1(&VAR_4->frames_ctx, VAR_5);
        if (VAR_6 < 0)
            return VAR_6;

        VAR_5->surface.Data.MemId = &VAR_4->frames_ctx.mids[VAR_6];
    }
    VAR_5->surface.Data.ExtParam = &VAR_5->ext_param;
    VAR_5->surface.Data.NumExtParam = 1;
    VAR_5->ext_param = (mfxExtBuffer*)&VAR_5->dec_info;
    VAR_5->dec_info.Header.BufferId = VAR_2;
    VAR_5->dec_info.Header.BufferSz = sizeof(VAR_5->dec_info);

    VAR_5->used = 1;

    return 0;
}
