
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sync ;
typedef int out_frame ;
struct TYPE_9__ {int frame; struct TYPE_9__* next; } ;
typedef TYPE_2__ mfxSyncPoint ;
struct TYPE_8__ {int mids_buf; int hw_frames_ctx; } ;
struct TYPE_10__ {int pool; TYPE_1__ frames_ctx; int internal_qs; int * async_fifo; TYPE_2__* work_frames; scalar_t__ session; } ;
typedef TYPE_2__ QSVFrame ;
typedef TYPE_4__ QSVContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__**,int,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__**) ;
 int FUNC_8 (int *) ;

int FUNC_9(QSVContext *VAR_0)
{
    QSVFrame *VAR_1 = VAR_0->work_frames;

    if (VAR_0->session)
        FUNC_0(VAR_0->session);

    while (VAR_0->async_fifo && FUNC_5(VAR_0->async_fifo)) {
        QSVFrame *VAR_2;
        mfxSyncPoint *VAR_3;

        FUNC_4(VAR_0->async_fifo, &VAR_2, sizeof(VAR_2), ((void*)0));
        FUNC_4(VAR_0->async_fifo, &VAR_3, sizeof(VAR_3), ((void*)0));

        FUNC_7(&VAR_3);
    }

    while (VAR_1) {
        VAR_0->work_frames = VAR_1->next;
        FUNC_6(&VAR_1->frame);
        FUNC_7(&VAR_1);
        VAR_1 = VAR_0->work_frames;
    }

    FUNC_3(VAR_0->async_fifo);
    VAR_0->async_fifo = ((void*)0);

    FUNC_8(&VAR_0->internal_qs);

    FUNC_2(&VAR_0->frames_ctx.hw_frames_ctx);
    FUNC_2(&VAR_0->frames_ctx.mids_buf);
    FUNC_1(&VAR_0->pool);

    return 0;
}
