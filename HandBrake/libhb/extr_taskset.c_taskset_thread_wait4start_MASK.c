
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int task_cond_lock; int task_begin_bitmap; int task_begin; } ;
typedef TYPE_1__ taskset_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5( taskset_t *VAR_0, int VAR_1 )
{
    FUNC_3( VAR_0->task_cond_lock );
    while ( FUNC_1( VAR_0->task_begin_bitmap, VAR_1 ) )
        FUNC_2( VAR_0->task_begin, VAR_0->task_cond_lock );





    FUNC_0( VAR_0->task_begin_bitmap, VAR_1 );
    FUNC_4( VAR_0->task_cond_lock );
}
