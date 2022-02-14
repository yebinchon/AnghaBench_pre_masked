
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int wait_empty; int lock; int * first; int cond_empty; } ;
typedef TYPE_1__ hb_fifo_t ;
typedef int hb_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

hb_buffer_t * FUNC_3( hb_fifo_t * VAR_1 )
{
    hb_buffer_t * VAR_2;

    FUNC_1( VAR_1->lock );
    if( VAR_1->size < 1 )
    {
        VAR_1->wait_empty = 1;
        FUNC_0( VAR_1->cond_empty, VAR_1->lock, VAR_0 );
        if( VAR_1->size < 1 )
        {
            FUNC_2( VAR_1->lock );
            return ((void*)0);
        }
    }
    VAR_2 = VAR_1->first;
    FUNC_2( VAR_1->lock );

    return VAR_2;
}
