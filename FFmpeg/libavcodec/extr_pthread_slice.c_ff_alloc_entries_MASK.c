
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pthread_mutex_t ;
typedef int pthread_cond_t ;
struct TYPE_7__ {int active_thread_type; int thread_count; TYPE_1__* internal; } ;
struct TYPE_6__ {int thread_count; int entries_count; int * progress_cond; int * progress_mutex; int * entries; } ;
struct TYPE_5__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ SliceThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **) ;
 void* FUNC_3 (int,int) ;
 int * FUNC_4 (int,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(AVCodecContext *VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_2->active_thread_type & VAR_1) {
        SliceThreadContext *VAR_5 = VAR_2->internal->thread_ctx;

        if (VAR_5->entries) {
            FUNC_1(VAR_5->thread_count == VAR_2->thread_count);
            FUNC_2(&VAR_5->entries);
        }

        VAR_5->thread_count = VAR_2->thread_count;
        VAR_5->entries = FUNC_4(VAR_3, sizeof(int));

        if (!VAR_5->progress_mutex) {
            VAR_5->progress_mutex = FUNC_3(VAR_5->thread_count, sizeof(pthread_mutex_t));
            VAR_5->progress_cond = FUNC_3(VAR_5->thread_count, sizeof(pthread_cond_t));
        }

        if (!VAR_5->entries || !VAR_5->progress_mutex || !VAR_5->progress_cond) {
            FUNC_2(&VAR_5->entries);
            FUNC_2(&VAR_5->progress_mutex);
            FUNC_2(&VAR_5->progress_cond);
            return FUNC_0(VAR_0);
        }
        VAR_5->entries_count = VAR_3;

        for (VAR_4 = 0; VAR_4 < VAR_5->thread_count; VAR_4++) {
            FUNC_6(&VAR_5->progress_mutex[VAR_4], ((void*)0));
            FUNC_5(&VAR_5->progress_cond[VAR_4], ((void*)0));
        }
    }

    return 0;
}
