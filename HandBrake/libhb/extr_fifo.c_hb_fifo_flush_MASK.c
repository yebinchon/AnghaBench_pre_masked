
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int cond_full; int cond_empty; } ;
typedef TYPE_1__ hb_fifo_t ;
typedef int hb_buffer_t ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5( hb_fifo_t * VAR_0 )
{
    hb_buffer_t * VAR_1;

    while( ( VAR_1 = FUNC_2( VAR_0 ) ) )
    {
        FUNC_0( &VAR_1 );
    }
    FUNC_3( VAR_0->lock );
    FUNC_1( VAR_0->cond_empty );
    FUNC_1( VAR_0->cond_full );
    FUNC_4( VAR_0->lock );

}
