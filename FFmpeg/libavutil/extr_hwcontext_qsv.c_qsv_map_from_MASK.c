
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_24__ {int * MemId; } ;
struct TYPE_25__ {TYPE_3__ Data; } ;
typedef TYPE_4__ mfxFrameSurface1 ;
typedef int VASurfaceID ;
struct TYPE_29__ {scalar_t__ format; int ** data; int height; int width; void* hw_frames_ctx; TYPE_12__** buf; } ;
struct TYPE_28__ {scalar_t__ format; TYPE_2__* device_ctx; TYPE_1__* internal; } ;
struct TYPE_27__ {int flags; } ;
struct TYPE_26__ {TYPE_12__* child_frames_ref; } ;
struct TYPE_23__ {int type; } ;
struct TYPE_22__ {TYPE_5__* priv; } ;
struct TYPE_21__ {scalar_t__ data; } ;
typedef TYPE_5__ QSVFramesContext ;
typedef TYPE_6__ AVPixFmtDescriptor ;
typedef TYPE_7__ AVHWFramesContext ;
typedef TYPE_8__ AVFrame ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (TYPE_12__*) ;
 TYPE_8__* FUNC_2 () ;
 int FUNC_3 (TYPE_8__**) ;
 int FUNC_4 (TYPE_8__*,TYPE_8__*,int) ;
 TYPE_6__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_12__*,TYPE_8__*,TYPE_8__ const*,int *,int *) ;

__attribute__((used)) static int FUNC_7(AVHWFramesContext *VAR_3,
                        AVFrame *VAR_4, const AVFrame *VAR_5, int VAR_6)
{
    QSVFramesContext *VAR_7 = VAR_3->internal->priv;
    mfxFrameSurface1 *VAR_8 = (mfxFrameSurface1*)VAR_5->data[3];
    AVHWFramesContext *VAR_9;
    const AVPixFmtDescriptor *VAR_10;
    uint8_t *VAR_11;
    AVFrame *VAR_12;
    int VAR_13 = 0;

    if (!VAR_7->child_frames_ref)
        return FUNC_0(VAR_2);
    VAR_9 = (AVHWFramesContext*)VAR_7->child_frames_ref->data;

    switch (VAR_9->device_ctx->type) {
    default:
        return FUNC_0(VAR_2);
    }

    if (VAR_4->format == VAR_9->format) {
        VAR_13 = FUNC_6(VAR_7->child_frames_ref,
                                    VAR_4, VAR_5, ((void*)0), ((void*)0));
        if (VAR_13 < 0)
            return VAR_13;

        VAR_4->width = VAR_5->width;
        VAR_4->height = VAR_5->height;
        VAR_4->data[3] = VAR_11;

        return 0;
    }

    VAR_10 = FUNC_5(VAR_4->format);
    if (VAR_10 && VAR_10->flags & VAR_0) {

        return FUNC_0(VAR_2);
    }

    VAR_12 = FUNC_2();
    if (!VAR_12)
        return FUNC_0(VAR_1);

    VAR_12->buf[0] = FUNC_1(VAR_5->buf[0]);
    VAR_12->hw_frames_ctx = FUNC_1(VAR_7->child_frames_ref);
    if (!VAR_12->buf[0] || !VAR_12->hw_frames_ctx)
        goto fail;

    VAR_12->format = VAR_9->format;
    VAR_12->width = VAR_5->width;
    VAR_12->height = VAR_5->height;
    VAR_12->data[3] = VAR_11;

    VAR_13 = FUNC_4(VAR_4, VAR_12, VAR_6);

fail:
    FUNC_3(&VAR_12);

    return VAR_13;
}
