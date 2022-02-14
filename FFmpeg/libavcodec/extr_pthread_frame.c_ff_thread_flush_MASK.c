
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int thread_count; TYPE_2__* codec; TYPE_1__* internal; } ;
struct TYPE_12__ {int delaying; TYPE_3__* threads; TYPE_3__* prev_thread; scalar_t__ next_finished; scalar_t__ next_decoding; } ;
struct TYPE_11__ {int avctx; scalar_t__ result; int frame; scalar_t__ got_frame; } ;
struct TYPE_10__ {int (* flush ) (int ) ;} ;
struct TYPE_9__ {TYPE_4__* thread_ctx; } ;
typedef TYPE_3__ PerThreadContext ;
typedef TYPE_4__ FrameThreadContext ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(AVCodecContext *VAR_0)
{
    int VAR_1;
    FrameThreadContext *VAR_2 = VAR_0->internal->thread_ctx;

    if (!VAR_2) return;

    FUNC_1(VAR_2, VAR_0->thread_count);
    if (VAR_2->prev_thread) {
        if (VAR_2->prev_thread != &VAR_2->threads[0])
            FUNC_4(VAR_2->threads[0].avctx, VAR_2->prev_thread->avctx, 0);
    }

    VAR_2->next_decoding = VAR_2->next_finished = 0;
    VAR_2->delaying = 1;
    VAR_2->prev_thread = ((void*)0);
    for (VAR_1 = 0; VAR_1 < VAR_0->thread_count; VAR_1++) {
        PerThreadContext *VAR_3 = &VAR_2->threads[VAR_1];

        VAR_3->got_frame = 0;
        FUNC_0(VAR_3->frame);
        VAR_3->result = 0;

        FUNC_2(VAR_3);

        if (VAR_0->codec->flush)
            VAR_0->codec->flush(VAR_3->avctx);
    }
}
