
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_28__ {int frame_number; TYPE_2__* priv_data; } ;
struct TYPE_27__ {int duration; int pts; } ;
struct TYPE_21__ {int frames; int framesize; } ;
struct TYPE_24__ {int remaining_samples; } ;
struct TYPE_23__ {int available; } ;
struct TYPE_26__ {TYPE_10__ packet; TYPE_16__ afq; int * rc; TYPE_11__* frame; int psyctx; TYPE_13__ bufqueue; TYPE_1__* avctx; } ;
struct TYPE_25__ {int frame_size; } ;
struct TYPE_22__ {int framebits; } ;
typedef TYPE_2__ OpusEncContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int const*) ;
 int * FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,int *,TYPE_11__*,int) ;
 int FUNC_6 (TYPE_16__*,int const*) ;
 int FUNC_7 (TYPE_16__*,int,int *,int*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_4__*,TYPE_13__*,int *) ;
 int FUNC_10 (int *,TYPE_11__*,int *) ;
 scalar_t__ FUNC_11 (int *,TYPE_10__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,TYPE_3__*) ;
 int * FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_15(AVCodecContext *VAR_2, AVPacket *VAR_3,
                             const AVFrame *VAR_4, int *VAR_5)
{
    OpusEncContext *VAR_6 = VAR_2->priv_data;
    int VAR_7, VAR_8, VAR_9 = 0;

    if (VAR_4) {
        if ((VAR_7 = FUNC_6(&VAR_6->afq, VAR_4)) < 0)
            return VAR_7;
        FUNC_9(VAR_2, &VAR_6->bufqueue, FUNC_3(VAR_4));
    } else {
        FUNC_12(&VAR_6->psyctx);
        if (!VAR_6->afq.remaining_samples || !VAR_2->frame_number)
            return 0;
    }


    if (FUNC_11(&VAR_6->psyctx, &VAR_6->packet))
        return 0;

    VAR_8 = FUNC_2(VAR_6->packet.framesize);

    if (!VAR_4) {

        int VAR_10 = VAR_6->packet.frames*(VAR_8/VAR_6->avctx->frame_size) - VAR_6->bufqueue.available + 1;




        for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            AVFrame *VAR_12 = FUNC_14(VAR_6);
            if (!VAR_12)
                return FUNC_0(VAR_1);
            FUNC_9(VAR_2, &VAR_6->bufqueue, VAR_12);
        }
    }

    for (int VAR_13 = 0; VAR_13 < VAR_6->packet.frames; VAR_13++) {
        FUNC_5(VAR_6, &VAR_6->rc[VAR_13], &VAR_6->frame[VAR_13], VAR_13);
        VAR_9 += VAR_6->frame[VAR_13].framebits >> 3;
    }


    VAR_9 += 2 + VAR_6->packet.frames*2;

    if ((VAR_7 = FUNC_8(VAR_2, VAR_3, VAR_9, 0)) < 0)
        return VAR_7;


    FUNC_13(VAR_6, VAR_3);


    FUNC_10(&VAR_6->psyctx, VAR_6->frame, VAR_6->rc);


    FUNC_7(&VAR_6->afq, VAR_6->packet.frames*VAR_8, &VAR_3->pts, &VAR_3->duration);
    if (VAR_6->packet.frames*VAR_8 > VAR_3->duration) {
        uint8_t *VAR_14 = FUNC_4(VAR_3, VAR_0, 10);
        if (!VAR_14)
            return FUNC_0(VAR_1);
        FUNC_1(&VAR_14[4], VAR_6->packet.frames*VAR_8 - VAR_3->duration + 120);
    }

    *VAR_5 = 1;

    return 0;
}
