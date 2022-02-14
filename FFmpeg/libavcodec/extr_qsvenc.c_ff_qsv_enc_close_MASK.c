
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sync ;
typedef int pkt ;
struct TYPE_13__ {int Payload; } ;
struct TYPE_14__ {TYPE_2__ enc_ctrl; int frame; struct TYPE_14__* next; } ;
typedef TYPE_3__ mfxSyncPoint ;
typedef TYPE_3__ mfxBitstream ;
typedef int bs ;
struct TYPE_12__ {int mids_buf; int hw_frames_ctx; } ;
struct TYPE_15__ {TYPE_3__* extparam; int opaque_alloc_buf; TYPE_3__* opaque_surfaces; int * async_fifo; TYPE_3__* work_frames; TYPE_1__ frames_ctx; int internal_qs; int * session; } ;
typedef TYPE_3__ QSVFrame ;
typedef TYPE_6__ QSVEncContext ;
typedef TYPE_3__* AVPacket ;
typedef int AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__**,int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__**) ;
 int FUNC_8 (TYPE_3__**) ;
 int FUNC_9 (int *) ;

int FUNC_10(AVCodecContext *VAR_0, QSVEncContext *VAR_1)
{
    QSVFrame *VAR_2;

    if (VAR_1->session)
        FUNC_0(VAR_1->session);

    VAR_1->session = ((void*)0);
    FUNC_9(&VAR_1->internal_qs);

    FUNC_1(&VAR_1->frames_ctx.hw_frames_ctx);
    FUNC_1(&VAR_1->frames_ctx.mids_buf);

    VAR_2 = VAR_1->work_frames;
    while (VAR_2) {
        VAR_1->work_frames = VAR_2->next;
        FUNC_5(&VAR_2->frame);
        FUNC_6(VAR_2->enc_ctrl.Payload);
        FUNC_7(&VAR_2);
        VAR_2 = VAR_1->work_frames;
    }

    while (VAR_1->async_fifo && FUNC_4(VAR_1->async_fifo)) {
        AVPacket VAR_3;
        mfxSyncPoint *VAR_4;
        mfxBitstream *VAR_5;

        FUNC_3(VAR_1->async_fifo, &VAR_3, sizeof(VAR_3), ((void*)0));
        FUNC_3(VAR_1->async_fifo, &VAR_4, sizeof(VAR_4), ((void*)0));
        FUNC_3(VAR_1->async_fifo, &VAR_5, sizeof(VAR_5), ((void*)0));

        FUNC_7(&VAR_4);
        FUNC_7(&VAR_5);
        FUNC_8(&VAR_3);
    }
    FUNC_2(VAR_1->async_fifo);
    VAR_1->async_fifo = ((void*)0);

    FUNC_7(&VAR_1->opaque_surfaces);
    FUNC_1(&VAR_1->opaque_alloc_buf);

    FUNC_7(&VAR_1->extparam);

    return 0;
}
