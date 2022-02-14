
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int lock; int * first; } ;
typedef TYPE_1__ hb_fifo_t ;
typedef int hb_buffer_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

hb_buffer_t * FUNC_2( hb_fifo_t * VAR_0 )
{
    hb_buffer_t * VAR_1;

    FUNC_0( VAR_0->lock );
    if( VAR_0->size < 1 )
    {
        FUNC_1( VAR_0->lock );
        return ((void*)0);
    }
    VAR_1 = VAR_0->first;
    FUNC_1( VAR_0->lock );

    return VAR_1;
}
