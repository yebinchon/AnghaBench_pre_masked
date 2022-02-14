
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ThreadContext ;
struct TYPE_5__ {int nb_threads; TYPE_1__* internal; scalar_t__ thread_type; } ;
struct TYPE_4__ {int thread_execute; int thread; } ;
typedef TYPE_2__ AVFilterGraph ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;

int FUNC_4(AVFilterGraph *VAR_2)
{
    int VAR_3;

    if (VAR_2->nb_threads == 1) {
        VAR_2->thread_type = 0;
        return 0;
    }

    VAR_2->internal->thread = FUNC_2(sizeof(ThreadContext));
    if (!VAR_2->internal->thread)
        return FUNC_0(VAR_0);

    VAR_3 = FUNC_3(VAR_2->internal->thread, VAR_2->nb_threads);
    if (VAR_3 <= 1) {
        FUNC_1(&VAR_2->internal->thread);
        VAR_2->thread_type = 0;
        VAR_2->nb_threads = 1;
        return (VAR_3 < 0) ? VAR_3 : 0;
    }
    VAR_2->nb_threads = VAR_3;

    VAR_2->internal->thread_execute = VAR_1;

    return 0;
}
