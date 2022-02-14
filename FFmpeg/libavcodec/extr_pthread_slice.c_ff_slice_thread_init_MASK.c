
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int caps_internal; } ;
struct TYPE_11__ {int thread_count; scalar_t__ codec_id; int height; int execute2; int execute; scalar_t__ active_thread_type; TYPE_1__* internal; TYPE_8__* codec; } ;
struct TYPE_10__ {int thread; } ;
struct TYPE_9__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ SliceThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__**) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_3__*,int ,void (*) (void*),int) ;
 int FUNC_6 (int *) ;
 void FUNC_7 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_8(AVCodecContext *VAR_6)
{
    SliceThreadContext *VAR_7;
    int VAR_8 = VAR_6->thread_count;
    static void (*VAR_9)(void *);


    if (FUNC_1(VAR_6->codec) &&
        VAR_6->codec_id == VAR_0 &&
        VAR_6->height > 2800)
        VAR_8 = VAR_6->thread_count = 1;

    if (!VAR_8) {
        int VAR_10 = FUNC_2();
        if (VAR_6->height)
            VAR_10 = FUNC_0(VAR_10, (VAR_6->height+15)/16);

        if (VAR_10 > 1)
            VAR_8 = VAR_6->thread_count = FUNC_0(VAR_10 + 1, VAR_2);
        else
            VAR_8 = VAR_6->thread_count = 1;
    }

    if (VAR_8 <= 1) {
        VAR_6->active_thread_type = 0;
        return 0;
    }

    VAR_6->internal->thread_ctx = VAR_7 = FUNC_4(sizeof(*VAR_7));
    VAR_9 = VAR_6->codec->caps_internal & VAR_1 ? &FUNC_7 : ((void*)0);
    if (!VAR_7 || (VAR_8 = FUNC_5(&VAR_7->thread, VAR_6, VAR_5, VAR_9, VAR_8)) <= 1) {
        if (VAR_7)
            FUNC_6(&VAR_7->thread);
        FUNC_3(&VAR_6->internal->thread_ctx);
        VAR_6->thread_count = 1;
        VAR_6->active_thread_type = 0;
        return 0;
    }
    VAR_6->thread_count = VAR_8;

    VAR_6->execute = VAR_3;
    VAR_6->execute2 = VAR_4;
    return 0;
}
