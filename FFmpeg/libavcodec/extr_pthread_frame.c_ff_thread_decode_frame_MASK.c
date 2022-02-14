
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_24__ {int thread_count; scalar_t__ codec_id; TYPE_1__* internal; } ;
struct TYPE_23__ {int pkt_dts; } ;
struct TYPE_22__ {int size; } ;
struct TYPE_21__ {int next_finished; size_t next_decoding; TYPE_3__* threads; scalar_t__ delaying; } ;
struct TYPE_19__ {int dts; } ;
struct TYPE_20__ {int got_frame; int result; int avctx; TYPE_2__ avpkt; int frame; int progress_mutex; int output_cond; int state; } ;
struct TYPE_18__ {TYPE_4__* thread_ctx; } ;
typedef TYPE_3__ PerThreadContext ;
typedef TYPE_4__ FrameThreadContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*,TYPE_7__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_7__*,int ,int) ;

int FUNC_10(AVCodecContext *VAR_3,
                           AVFrame *VAR_4, int *VAR_5,
                           AVPacket *VAR_6)
{
    FrameThreadContext *VAR_7 = VAR_3->internal->thread_ctx;
    int VAR_8 = VAR_7->next_finished;
    PerThreadContext *VAR_9;
    int VAR_10;



    FUNC_1(VAR_7);





    VAR_9 = &VAR_7->threads[VAR_7->next_decoding];
    VAR_10 = FUNC_8(VAR_9, VAR_3, VAR_6);
    if (VAR_10)
        goto finish;





    if (VAR_7->next_decoding > (VAR_3->thread_count-1-(VAR_3->codec_id == VAR_0)))
        VAR_7->delaying = 0;

    if (VAR_7->delaying) {
        *VAR_5=0;
        if (VAR_6->size) {
            VAR_10 = VAR_6->size;
            goto finish;
        }
    }
    do {
        VAR_9 = &VAR_7->threads[VAR_8++];

        if (FUNC_2(&VAR_9->state) != VAR_1) {
            FUNC_6(&VAR_9->progress_mutex);
            while (FUNC_3(&VAR_9->state, VAR_2) != VAR_1)
                FUNC_5(&VAR_9->output_cond, &VAR_9->progress_mutex);
            FUNC_7(&VAR_9->progress_mutex);
        }

        FUNC_4(VAR_4, VAR_9->frame);
        *VAR_5 = VAR_9->got_frame;
        VAR_4->pkt_dts = VAR_9->avpkt.dts;
        VAR_10 = VAR_9->result;







        VAR_9->got_frame = 0;
        VAR_9->result = 0;

        if (VAR_8 >= VAR_3->thread_count) VAR_8 = 0;
    } while (!VAR_6->size && !*VAR_5 && VAR_10 >= 0 && VAR_8 != VAR_7->next_finished);

    FUNC_9(VAR_3, VAR_9->avctx, 1);

    if (VAR_7->next_decoding >= VAR_3->thread_count) VAR_7->next_decoding = 0;

    VAR_7->next_finished = VAR_8;


    if (VAR_10 >= 0)
        VAR_10 = VAR_6->size;
finish:
    FUNC_0(VAR_7);
    return VAR_10;
}
