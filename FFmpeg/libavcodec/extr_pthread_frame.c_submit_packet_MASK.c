
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int debug; scalar_t__ get_format; scalar_t__ get_buffer2; int thread_safe_callbacks; TYPE_4__* codec; } ;
struct TYPE_18__ {int capabilities; } ;
struct TYPE_17__ {int size; } ;
struct TYPE_16__ {int next_decoding; TYPE_1__* prev_thread; } ;
struct TYPE_15__ {int progress_mutex; int progress_cond; int state; int available_formats; TYPE_5__* avctx; int result_format; int requested_flags; int requested_frame; int result; int mutex; int input_cond; int avpkt; int debug_threads; TYPE_2__* parent; } ;
typedef TYPE_1__ PerThreadContext ;
typedef TYPE_2__ FrameThreadContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVCodecContext ;
typedef TYPE_4__ AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (TYPE_5__*,int ,char*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (TYPE_5__*,int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_5__*,TYPE_5__*,int ) ;
 int FUNC_15 (TYPE_5__*,int *) ;

__attribute__((used)) static int FUNC_16(PerThreadContext *VAR_10, AVCodecContext *VAR_11,
                         AVPacket *VAR_12)
{
    FrameThreadContext *VAR_13 = VAR_10->parent;
    PerThreadContext *VAR_14 = VAR_13->prev_thread;
    const AVCodec *VAR_15 = VAR_10->avctx->codec;
    int VAR_16;

    if (!VAR_12->size && !(VAR_15->capabilities & VAR_0))
        return 0;

    FUNC_11(&VAR_10->mutex);

    VAR_16 = FUNC_15(VAR_10->avctx, VAR_11);
    if (VAR_16) {
        FUNC_12(&VAR_10->mutex);
        return VAR_16;
    }
    FUNC_3(&VAR_10->debug_threads,
                          (VAR_10->avctx->debug & VAR_2) != 0,
                          VAR_9);

    FUNC_13(VAR_10);

    if (VAR_14) {
        int VAR_17;
        if (FUNC_0(&VAR_14->state) == VAR_4) {
            FUNC_11(&VAR_14->progress_mutex);
            while (FUNC_0(&VAR_14->state) == VAR_4)
                FUNC_10(&VAR_14->progress_cond, &VAR_14->progress_mutex);
            FUNC_12(&VAR_14->progress_mutex);
        }

        VAR_17 = FUNC_14(VAR_10->avctx, VAR_14->avctx, 0);
        if (VAR_17) {
            FUNC_12(&VAR_10->mutex);
            return VAR_17;
        }
    }

    FUNC_6(&VAR_10->avpkt);
    VAR_16 = FUNC_5(&VAR_10->avpkt, VAR_12);
    if (VAR_16 < 0) {
        FUNC_12(&VAR_10->mutex);
        FUNC_4(VAR_10->avctx, VAR_1, "av_packet_ref() failed in submit_packet()\n");
        return VAR_16;
    }

    FUNC_2(&VAR_10->state, VAR_4);
    FUNC_9(&VAR_10->input_cond);
    FUNC_12(&VAR_10->mutex);







    if (!VAR_10->avctx->thread_safe_callbacks && (
         VAR_10->avctx->get_format != VAR_7 ||
         VAR_10->avctx->get_buffer2 != VAR_6)) {
        while (FUNC_0(&VAR_10->state) != VAR_5 && FUNC_0(&VAR_10->state) != VAR_3) {
            int VAR_18 = 1;
            FUNC_11(&VAR_10->progress_mutex);
            while (FUNC_0(&VAR_10->state) == VAR_4)
                FUNC_10(&VAR_10->progress_cond, &VAR_10->progress_mutex);

            switch (FUNC_1(&VAR_10->state, VAR_8)) {
            case 129:
                VAR_10->result = FUNC_7(VAR_10->avctx, VAR_10->requested_frame, VAR_10->requested_flags);
                break;
            case 128:
                VAR_10->result_format = FUNC_8(VAR_10->avctx, VAR_10->available_formats);
                break;
            default:
                VAR_18 = 0;
                break;
            }
            if (VAR_18) {
                FUNC_2(&VAR_10->state, VAR_4);
                FUNC_9(&VAR_10->progress_cond);
            }
            FUNC_12(&VAR_10->progress_mutex);
        }
    }

    VAR_13->prev_thread = VAR_10;
    VAR_13->next_decoding++;

    return 0;
}
