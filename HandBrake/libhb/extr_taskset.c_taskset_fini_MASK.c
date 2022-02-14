
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int thread_count; int * task_stop_bitmap; int * task_complete_bitmap; int * task_begin_bitmap; int * task_threads_args; int * task_threads; int task_complete; int task_begin; int task_cond_lock; } ;
typedef TYPE_1__ taskset_t ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

void
FUNC_9( taskset_t *VAR_0 )
{
    int VAR_1;

    FUNC_5( VAR_0->task_cond_lock );



    FUNC_0( VAR_0->task_stop_bitmap, 0, VAR_0->thread_count - 1 );
    FUNC_0( VAR_0->task_begin_bitmap, 0, VAR_0->thread_count - 1 );
    FUNC_2( VAR_0->task_begin );




    FUNC_4( VAR_0->task_complete, VAR_0->task_cond_lock );
    FUNC_8( VAR_0->task_cond_lock );




    for( VAR_1 = 0; VAR_1 < VAR_0->thread_count; VAR_1++)
    {
        FUNC_7( &VAR_0->task_threads[VAR_1] );
    }
    FUNC_6( &VAR_0->task_cond_lock );
    FUNC_3( &VAR_0->task_begin );
    FUNC_3( &VAR_0->task_complete );
    FUNC_1( VAR_0->task_threads );
    if( VAR_0->task_threads_args != ((void*)0) )
        FUNC_1( VAR_0->task_threads_args );
    FUNC_1( VAR_0->task_begin_bitmap );
    FUNC_1( VAR_0->task_complete_bitmap );
    FUNC_1( VAR_0->task_stop_bitmap );
}
