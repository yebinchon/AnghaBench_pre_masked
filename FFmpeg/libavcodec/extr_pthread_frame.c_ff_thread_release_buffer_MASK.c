
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {TYPE_10__* f; int ** owner; int progress; } ;
typedef TYPE_2__ ThreadFrame ;
struct TYPE_18__ {int active_thread_type; int debug; TYPE_1__* internal; } ;
struct TYPE_17__ {int buffer_mutex; } ;
struct TYPE_16__ {int num_released_buffers; int * released_buffers; int released_buffers_allocated; TYPE_4__* parent; } ;
struct TYPE_14__ {TYPE_3__* thread_ctx; } ;
struct TYPE_13__ {int * buf; } ;
typedef TYPE_3__ PerThreadContext ;
typedef TYPE_4__ FrameThreadContext ;
typedef int AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,TYPE_10__*) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_5__*,int ,char*,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(AVCodecContext *VAR_4, ThreadFrame *VAR_5)
{
    PerThreadContext *VAR_6 = VAR_4->internal->thread_ctx;
    FrameThreadContext *VAR_7;
    AVFrame *VAR_8, *VAR_9;
    int VAR_10 = !(VAR_4->active_thread_type & VAR_2) ||
                          FUNC_0(VAR_4);

    if (!VAR_5->f || !VAR_5->f->buf[0])
        return;

    if (VAR_4->debug & VAR_1)
        FUNC_5(VAR_4, VAR_0, "thread_release_buffer called on pic %p\n", VAR_5);

    FUNC_1(&VAR_5->progress);
    VAR_5->owner[0] = VAR_5->owner[1] = ((void*)0);

    if (VAR_10) {
        FUNC_4(VAR_5->f);
        return;
    }

    VAR_7 = VAR_6->parent;
    FUNC_6(&VAR_7->buffer_mutex);

    if (VAR_6->num_released_buffers + 1 >= VAR_3 / sizeof(*VAR_6->released_buffers))
        goto fail;
    VAR_9 = FUNC_2(VAR_6->released_buffers, &VAR_6->released_buffers_allocated,
                          (VAR_6->num_released_buffers + 1) *
                          sizeof(*VAR_6->released_buffers));
    if (!VAR_9)
        goto fail;
    VAR_6->released_buffers = VAR_9;

    VAR_8 = &VAR_6->released_buffers[VAR_6->num_released_buffers];
    FUNC_3(VAR_8, VAR_5->f);

    VAR_6->num_released_buffers++;

fail:
    FUNC_7(&VAR_7->buffer_mutex);
}
