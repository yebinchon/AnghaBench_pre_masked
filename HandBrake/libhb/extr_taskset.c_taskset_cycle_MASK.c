
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int task_cond_lock; scalar_t__ thread_count; int task_complete_bitmap; int task_complete; int bitmap_elements; int task_begin; int task_begin_bitmap; } ;
typedef TYPE_1__ taskset_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7( taskset_t *VAR_0 )
{
    FUNC_5( VAR_0->task_cond_lock );




    FUNC_2( VAR_0->task_begin_bitmap, 0, VAR_0->thread_count - 1 );
    FUNC_3( VAR_0->task_begin );






    do
    {
        FUNC_4( VAR_0->task_complete, VAR_0->task_cond_lock );
    } while ( !FUNC_0( VAR_0->task_complete_bitmap, VAR_0->bitmap_elements ) );




    FUNC_1( VAR_0->task_complete_bitmap, 0, VAR_0->thread_count - 1 );

    FUNC_6( VAR_0->task_cond_lock );
}
