
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int capacity; int thresh; scalar_t__ buffer_size; void* cond_empty; void* cond_full; int lock; } ;
typedef TYPE_1__ hb_fifo_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 () ;
 int FUNC_3 () ;

hb_fifo_t * FUNC_4( int VAR_0, int VAR_1 )
{
    hb_fifo_t * VAR_2;
    VAR_2 = FUNC_0( sizeof( hb_fifo_t ), 1 );
    VAR_2->lock = FUNC_3();
    VAR_2->cond_full = FUNC_2();
    VAR_2->cond_empty = FUNC_2();
    VAR_2->capacity = VAR_0;
    VAR_2->thresh = VAR_1;
    VAR_2->buffer_size = 0;





    return VAR_2;
}
