
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int task_cond_lock; int task_complete; int bitmap_elements; int task_complete_bitmap; } ;
typedef TYPE_1__ taskset_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5( taskset_t *VAR_0, int VAR_1 )
{
    FUNC_3( VAR_0->task_cond_lock );
    FUNC_1( VAR_0->task_complete_bitmap, VAR_1 );
    if( FUNC_0( VAR_0->task_complete_bitmap, VAR_0->bitmap_elements ) )
    {
        FUNC_2( VAR_0->task_complete );
    }
    FUNC_4( VAR_0->task_cond_lock );
}
