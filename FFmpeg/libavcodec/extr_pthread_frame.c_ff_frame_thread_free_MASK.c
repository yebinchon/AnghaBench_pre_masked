
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ priv_class; int (* close ) (TYPE_2__*) ;} ;
struct TYPE_16__ {TYPE_5__* codec; scalar_t__ priv_data; TYPE_1__* internal; } ;
struct TYPE_15__ {int is_copy; int die; int async_cond; int async_mutex; int hwaccel_mutex; int buffer_mutex; struct TYPE_15__* threads; struct TYPE_15__* avctx; int hw_frames_ctx; struct TYPE_15__* internal; struct TYPE_15__* slice_offset; struct TYPE_15__* priv_data; struct TYPE_15__* released_buffers; int avpkt; int output_cond; int progress_cond; int input_cond; int progress_mutex; int mutex; int frame; scalar_t__ thread_init; int thread; struct TYPE_15__* prev_thread; } ;
struct TYPE_14__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ PerThreadContext ;
typedef TYPE_2__ FrameThreadContext ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AVCodec ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*,TYPE_2__*,int ) ;

void FUNC_16(AVCodecContext *VAR_1, int VAR_2)
{
    FrameThreadContext *VAR_3 = VAR_1->internal->thread_ctx;
    const AVCodec *VAR_4 = VAR_1->codec;
    int VAR_5;

    FUNC_6(VAR_3, VAR_2);

    if (VAR_3->prev_thread && VAR_3->prev_thread != VAR_3->threads)
        if (FUNC_15(VAR_3->threads->avctx, VAR_3->prev_thread->avctx, 0) < 0) {
            FUNC_3(VAR_1, VAR_0, "Final thread update failed\n");
            VAR_3->prev_thread->avctx->internal->is_copy = VAR_3->threads->avctx->internal->is_copy;
            VAR_3->threads->avctx->internal->is_copy = 1;
        }

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        PerThreadContext *VAR_6 = &VAR_3->threads[VAR_5];

        FUNC_11(&VAR_6->mutex);
        VAR_6->die = 1;
        FUNC_8(&VAR_6->input_cond);
        FUNC_12(&VAR_6->mutex);

        if (VAR_6->thread_init)
            FUNC_9(VAR_6->thread, ((void*)0));
        VAR_6->thread_init=0;

        if (VAR_4->close && VAR_6->avctx)
            VAR_4->close(VAR_6->avctx);

        FUNC_13(VAR_6);
        FUNC_1(&VAR_6->frame);
    }

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        PerThreadContext *VAR_7 = &VAR_3->threads[VAR_5];

        FUNC_10(&VAR_7->mutex);
        FUNC_10(&VAR_7->progress_mutex);
        FUNC_7(&VAR_7->input_cond);
        FUNC_7(&VAR_7->progress_cond);
        FUNC_7(&VAR_7->output_cond);
        FUNC_5(&VAR_7->avpkt);
        FUNC_2(&VAR_7->released_buffers);

        if (VAR_5 && VAR_7->avctx) {
            FUNC_2(&VAR_7->avctx->priv_data);
            FUNC_2(&VAR_7->avctx->slice_offset);
        }

        if (VAR_7->avctx) {
            FUNC_2(&VAR_7->avctx->internal);
            FUNC_0(&VAR_7->avctx->hw_frames_ctx);
        }

        FUNC_2(&VAR_7->avctx);
    }

    FUNC_2(&VAR_3->threads);
    FUNC_10(&VAR_3->buffer_mutex);
    FUNC_10(&VAR_3->hwaccel_mutex);
    FUNC_10(&VAR_3->async_mutex);
    FUNC_7(&VAR_3->async_cond);

    FUNC_2(&VAR_1->internal->thread_ctx);

    if (VAR_1->priv_data && VAR_1->codec && VAR_1->codec->priv_class)
        FUNC_4(VAR_1->priv_data);
    VAR_1->codec = ((void*)0);
}
