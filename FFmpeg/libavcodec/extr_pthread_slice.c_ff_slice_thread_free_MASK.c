
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* internal; } ;
struct TYPE_9__ {int thread_count; struct TYPE_9__* progress_cond; struct TYPE_9__* progress_mutex; struct TYPE_9__* entries; int thread; } ;
struct TYPE_8__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ SliceThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(AVCodecContext *VAR_0)
{
    SliceThreadContext *VAR_1 = VAR_0->internal->thread_ctx;
    int VAR_2;

    FUNC_1(&VAR_1->thread);

    for (VAR_2 = 0; VAR_2 < VAR_1->thread_count; VAR_2++) {
        FUNC_3(&VAR_1->progress_mutex[VAR_2]);
        FUNC_2(&VAR_1->progress_cond[VAR_2]);
    }

    FUNC_0(&VAR_1->entries);
    FUNC_0(&VAR_1->progress_mutex);
    FUNC_0(&VAR_1->progress_cond);
    FUNC_0(&VAR_0->internal->thread_ctx);
}
