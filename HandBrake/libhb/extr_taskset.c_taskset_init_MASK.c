
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int thread_count; size_t arg_size; int bitmap_elements; struct TYPE_6__* task_threads; struct TYPE_6__* task_threads_args; struct TYPE_6__* task_begin_bitmap; struct TYPE_6__* task_complete_bitmap; struct TYPE_6__* task_stop_bitmap; int * task_cond_lock; int * task_begin; int * task_complete; } ;
typedef TYPE_1__ taskset_t ;
typedef int hb_thread_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int **) ;
 void* FUNC_3 () ;
 int FUNC_4 (int **) ;
 int * FUNC_5 () ;
 void* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;

int
FUNC_8( taskset_t *VAR_0, int VAR_1, size_t VAR_2 )
{
    int VAR_3;

    VAR_3 = 0;
    FUNC_7( VAR_0, 0, sizeof( *VAR_0 ) );
    VAR_0->thread_count = VAR_1;
    VAR_0->arg_size = VAR_2;
    VAR_0->bitmap_elements = ( VAR_0->thread_count + 31 ) / 32;
    VAR_0->task_threads = FUNC_6( sizeof( hb_thread_t* ) * VAR_0->thread_count );
    if( VAR_0->task_threads == ((void*)0) )
        goto fail;
    VAR_3++;

    if( VAR_2 != 0 )
    {
        VAR_0->task_threads_args = FUNC_6( VAR_2 * VAR_0->thread_count );
        if( VAR_0->task_threads == ((void*)0) )
            goto fail;
    }
    VAR_3++;

    VAR_0->task_begin_bitmap = FUNC_6( sizeof( uint32_t ) * VAR_0->bitmap_elements );
    if( VAR_0->task_begin_bitmap == ((void*)0) )
        goto fail;
    VAR_3++;

    VAR_0->task_complete_bitmap = FUNC_6( sizeof( uint32_t ) * VAR_0->bitmap_elements );
    if( VAR_0->task_complete_bitmap == ((void*)0) )
        goto fail;
    VAR_3++;

    VAR_0->task_stop_bitmap = FUNC_6( sizeof( uint32_t ) * VAR_0->bitmap_elements );
    if( VAR_0->task_stop_bitmap == ((void*)0) )
        goto fail;
    VAR_3++;

    VAR_0->task_cond_lock = FUNC_5();
    if( VAR_0->task_cond_lock == ((void*)0))
        goto fail;
    VAR_3++;

    VAR_0->task_begin = FUNC_3();
    if( VAR_0->task_begin == ((void*)0))
        goto fail;
    VAR_3++;

    VAR_0->task_complete = FUNC_3();
    if( VAR_0->task_complete == ((void*)0))
        goto fail;
    VAR_3++;




    FUNC_7(VAR_0->task_threads_args, 0, VAR_0->arg_size * VAR_0->thread_count );







    FUNC_7(VAR_0->task_begin_bitmap, 0xFF, sizeof( uint32_t ) * VAR_0->bitmap_elements );
    FUNC_7(VAR_0->task_complete_bitmap, 0xFF, sizeof( uint32_t ) * VAR_0->bitmap_elements );
    FUNC_7(VAR_0->task_stop_bitmap, 0, sizeof( uint32_t ) * VAR_0->bitmap_elements );





    FUNC_0( VAR_0->task_begin_bitmap, 0, VAR_0->thread_count - 1 );
    FUNC_0( VAR_0->task_complete_bitmap, 0, VAR_0->thread_count - 1 );
    FUNC_0( VAR_0->task_stop_bitmap, 0, VAR_0->thread_count - 1 );
    return (1);

fail:
    switch (VAR_3)
    {
        default:
            FUNC_2( &VAR_0->task_complete );

        case 7:
            FUNC_2( &VAR_0->task_begin );

        case 6:
            FUNC_4( &VAR_0->task_cond_lock );

        case 5:
            FUNC_1( VAR_0->task_stop_bitmap );

        case 4:
            FUNC_1( VAR_0->task_complete_bitmap );

        case 3:
            FUNC_1( VAR_0->task_begin_bitmap );

        case 2:
            FUNC_1( VAR_0->task_threads_args );

        case 1:
            FUNC_1( VAR_0->task_threads );

        case 0:
            break;
    }
    return (0);
}
