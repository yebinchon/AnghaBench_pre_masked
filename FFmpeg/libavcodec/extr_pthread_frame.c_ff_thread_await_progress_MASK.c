
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int atomic_int ;
struct TYPE_9__ {TYPE_6__** owner; TYPE_1__* progress; } ;
typedef TYPE_3__ ThreadFrame ;
struct TYPE_11__ {TYPE_2__* internal; } ;
struct TYPE_10__ {int progress_mutex; int progress_cond; int debug_threads; } ;
struct TYPE_8__ {TYPE_4__* thread_ctx; } ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_4__ PerThreadContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_6__*,int ,char*,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(ThreadFrame *VAR_3, int VAR_4, int VAR_5)
{
    PerThreadContext *VAR_6;
    atomic_int *VAR_7 = VAR_3->progress ? (atomic_int*)VAR_3->progress->data : ((void*)0);

    if (!VAR_7 ||
        FUNC_0(&VAR_7[VAR_5], VAR_1) >= VAR_4)
        return;

    VAR_6 = VAR_3->owner[VAR_5]->internal->thread_ctx;

    if (FUNC_0(&VAR_6->debug_threads, VAR_2))
        FUNC_1(VAR_3->owner[VAR_5], VAR_0,
               "thread awaiting %d field %d from %p\n", VAR_4, VAR_5, VAR_7);

    FUNC_3(&VAR_6->progress_mutex);
    while (FUNC_0(&VAR_7[VAR_5], VAR_2) < VAR_4)
        FUNC_2(&VAR_6->progress_cond, &VAR_6->progress_mutex);
    FUNC_4(&VAR_6->progress_mutex);
}
