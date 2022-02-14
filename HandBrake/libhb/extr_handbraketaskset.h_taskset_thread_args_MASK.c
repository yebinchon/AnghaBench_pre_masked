
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* task_threads_args; int arg_size; } ;
typedef TYPE_1__ taskset_t ;



__attribute__((used)) static inline void *
FUNC_0( taskset_t *VAR_0, int VAR_1 )
{
    return( VAR_0->task_threads_args + ( VAR_0->arg_size * VAR_1 ) );
}
