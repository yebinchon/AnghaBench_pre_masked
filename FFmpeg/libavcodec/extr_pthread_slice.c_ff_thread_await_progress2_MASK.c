
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_6__ {int* entries; int thread_count; int * progress_mutex; int * progress_cond; } ;
struct TYPE_5__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ SliceThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(AVCodecContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    SliceThreadContext *VAR_4 = VAR_0->internal->thread_ctx;
    int *VAR_5 = VAR_4->entries;

    if (!VAR_5 || !VAR_1) return;

    VAR_2 = VAR_2 ? VAR_2 - 1 : VAR_4->thread_count - 1;

    FUNC_1(&VAR_4->progress_mutex[VAR_2]);
    while ((VAR_5[VAR_1 - 1] - VAR_5[VAR_1]) < VAR_3){
        FUNC_0(&VAR_4->progress_cond[VAR_2], &VAR_4->progress_mutex[VAR_2]);
    }
    FUNC_2(&VAR_4->progress_mutex[VAR_2]);
}
