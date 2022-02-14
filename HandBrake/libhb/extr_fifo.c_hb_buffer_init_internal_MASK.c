
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_16__ {int scr_sequence; void* renderOffset; void* stop; void* start; } ;
struct TYPE_17__ {int alloc; int size; TYPE_1__ s; struct TYPE_17__* data; } ;
typedef TYPE_2__ uint8_t ;
struct TYPE_18__ {int buffer_size; } ;
typedef TYPE_3__ hb_fifo_t ;
typedef TYPE_2__ hb_buffer_t ;
struct TYPE_15__ {int allocated; int lock; int alloc_list; } ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 TYPE_13__ VAR_2 ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 TYPE_3__* FUNC_9 (int) ;

hb_buffer_t * FUNC_10( int VAR_3 )
{
    hb_buffer_t * VAR_4;





    int VAR_5 = VAR_3 + VAR_0;
    hb_fifo_t *VAR_6 = FUNC_9( VAR_5 );

    if( VAR_6 )
    {
        VAR_4 = FUNC_4( VAR_6 );

        if( VAR_4 )
        {




            uint8_t *VAR_7 = VAR_4->data;

            FUNC_8( VAR_4, 0, sizeof(hb_buffer_t) );
            VAR_4->alloc = VAR_6->buffer_size;
            VAR_4->size = VAR_3;
            VAR_4->data = VAR_7;
            VAR_4->s.start = VAR_1;
            VAR_4->s.stop = VAR_1;
            VAR_4->s.renderOffset = VAR_1;
            VAR_4->s.scr_sequence = -1;






            return( VAR_4 );
        }
    }




    if( !( VAR_4 = FUNC_1( sizeof( hb_buffer_t ), 1 ) ) )
    {
        FUNC_3( "out of memory" );
        return ((void*)0);
    }

    VAR_4->size = VAR_3;
    VAR_4->alloc = VAR_6 ? VAR_6->buffer_size : VAR_5;

    if (VAR_3)
    {
        VAR_4->data = FUNC_0(VAR_4->alloc);
        if( !VAR_4->data )
        {
            FUNC_3( "out of memory" );
            FUNC_2( VAR_4 );
            return ((void*)0);
        }



        FUNC_6(VAR_2.lock);
        VAR_2.allocated += VAR_4->alloc;
        FUNC_7(VAR_2.lock);
    }
    VAR_4->s.start = VAR_1;
    VAR_4->s.stop = VAR_1;
    VAR_4->s.renderOffset = VAR_1;
    VAR_4->s.scr_sequence = -1;





    return VAR_4;
}
