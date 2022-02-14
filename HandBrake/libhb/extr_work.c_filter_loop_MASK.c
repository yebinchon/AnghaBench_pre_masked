
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ status; int frame_go; int frame_completed_lock; int frame_completed; } ;
struct TYPE_16__ {TYPE_2__ post; } ;
typedef TYPE_4__ hb_filter_private_t_qsv ;
struct TYPE_17__ {scalar_t__ status; scalar_t__ chapter_time; scalar_t__ (* work ) (TYPE_5__*,TYPE_6__**,TYPE_6__**) ;int fifo_in; scalar_t__* done; int * fifo_out; scalar_t__ chapter_val; } ;
typedef TYPE_5__ hb_filter_object_t ;
struct TYPE_15__ {scalar_t__ start; scalar_t__ new_chap; } ;
struct TYPE_13__ {TYPE_4__* filter_details; } ;
struct TYPE_18__ {TYPE_3__ s; TYPE_1__ qsv_details; } ;
typedef TYPE_6__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_6__* FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_6__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_6__**,TYPE_6__**) ;

__attribute__((used)) static void FUNC_8( void * VAR_2 )
{
    hb_filter_object_t * VAR_3 = VAR_2;
    hb_buffer_t * VAR_4, * VAR_5 = ((void*)0);

    while( !*VAR_3->done && VAR_3->status != VAR_1 )
    {
        VAR_4 = FUNC_3( VAR_3->fifo_in );
        if ( VAR_4 == ((void*)0) )
            continue;



        if ( VAR_4->s.new_chap )
        {
            VAR_3->chapter_time = VAR_4->s.start;
            VAR_3->chapter_val = VAR_4->s.new_chap;

            VAR_4->s.new_chap = 0;
        }
        if ( *VAR_3->done )
        {
            if( VAR_4 )
            {
                FUNC_0( &VAR_4 );
            }
            break;
        }

        VAR_5 = ((void*)0);





        VAR_3->status = VAR_3->work( VAR_3, &VAR_4, &VAR_5 );
        if ( VAR_5 && VAR_3->chapter_val && VAR_3->chapter_time <= VAR_5->s.start )
        {
            VAR_5->s.new_chap = VAR_3->chapter_val;
            VAR_3->chapter_val = 0;
        }

        if( VAR_4 )
        {
            FUNC_0( &VAR_4 );
        }
        if ( VAR_5 && VAR_3->fifo_out == ((void*)0) )
        {
            FUNC_0( &VAR_5 );
        }
        if( VAR_5 )
        {
            while ( !*VAR_3->done )
            {
                if ( FUNC_2( VAR_3->fifo_out ) )
                {
                    FUNC_4( VAR_3->fifo_out, VAR_5 );
                    VAR_5 = ((void*)0);
                    break;
                }
            }
        }
    }
    if ( VAR_5 )
    {
        FUNC_0( &VAR_5 );
    }



    while( !*VAR_3->done )
    {
        VAR_4 = FUNC_3( VAR_3->fifo_in );
        if ( VAR_4 != ((void*)0) )
            FUNC_0( &VAR_4 );
    }
}
