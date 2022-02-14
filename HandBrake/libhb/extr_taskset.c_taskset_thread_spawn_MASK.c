
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_func_t ;
struct TYPE_4__ {int ** task_threads; } ;
typedef TYPE_1__ taskset_t ;


 int * FUNC_0 (char const*,int *,int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

int
FUNC_2( taskset_t *VAR_0, int VAR_1, const char *VAR_2,
                      thread_func_t *VAR_3, int VAR_4 )
{
    VAR_0->task_threads[VAR_1] = FUNC_0( VAR_2, VAR_3,
                                                FUNC_1( VAR_0, VAR_1 ),
                                                VAR_4);
    return( VAR_0->task_threads[VAR_1] != ((void*)0) );
}
