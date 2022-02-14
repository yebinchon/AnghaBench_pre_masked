
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cond_full; int cond_empty; int lock; } ;
typedef TYPE_1__ hb_fifo_t ;
typedef int hb_buffer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,int ) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

void FUNC_8( hb_fifo_t ** VAR_0 )
{
    hb_fifo_t * VAR_1 = *VAR_0;
    hb_buffer_t * VAR_2;

    if ( VAR_1 == ((void*)0) )
        return;

    FUNC_4( 2, "fifo_close: trashing %d buffer(s)", FUNC_6( VAR_1 ) );
    while( ( VAR_2 = FUNC_5( VAR_1 ) ) )
    {
        FUNC_2( &VAR_2 );
    }

    FUNC_7( &VAR_1->lock );
    FUNC_3( &VAR_1->cond_empty );
    FUNC_3( &VAR_1->cond_full );






    FUNC_1( VAR_1 );

    *VAR_0 = ((void*)0);
}
