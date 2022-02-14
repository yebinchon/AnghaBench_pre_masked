
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; scalar_t__ (* work ) (TYPE_1__*,int **,int **) ;int * fifo_in; scalar_t__* done; int * die; int name; int * fifo_out; } ;
typedef TYPE_1__ hb_work_object_t ;
typedef int hb_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int,char*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*,int **,int **) ;

void FUNC_8( void * VAR_1 )
{
    hb_work_object_t * VAR_2 = VAR_1;
    hb_buffer_t * VAR_3 = ((void*)0), * VAR_4 = ((void*)0);

    while ((VAR_2->die == ((void*)0) || !*VAR_2->die) && !*VAR_2->done &&
           VAR_2->status != VAR_0)
    {

        if (VAR_2->fifo_in != ((void*)0))
        {
            VAR_3 = FUNC_4( VAR_2->fifo_in );
            if ( VAR_3 == ((void*)0) )
                continue;
            if ( *VAR_2->done )
            {
                if( VAR_3 )
                {
                    FUNC_1( &VAR_3 );
                }
                break;
            }
        }


        VAR_4 = ((void*)0);
        VAR_2->status = VAR_2->work( VAR_2, &VAR_3, &VAR_4 );

        FUNC_0( VAR_4, VAR_3 );

        if( VAR_3 )
        {
            FUNC_1( &VAR_3 );
        }
        if ( VAR_4 && VAR_2->fifo_out == ((void*)0) )
        {
            FUNC_1( &VAR_4 );
        }
        if( VAR_4 )
        {
            while ( !*VAR_2->done )
            {
                if ( FUNC_3( VAR_2->fifo_out ) )
                {
                    FUNC_5( VAR_2->fifo_out, VAR_4 );
                    VAR_4 = ((void*)0);
                    break;
                }
            }
        }
        else if (VAR_2->fifo_in == ((void*)0))
        {



            FUNC_6();
        }
    }
    if ( VAR_4 )
    {
        FUNC_1( &VAR_4 );
    }




    FUNC_2(3, "worker %s waiting to die", VAR_2->name);
    while ((VAR_2->die == ((void*)0) || !*VAR_2->die) &&
           !*VAR_2->done && VAR_2->fifo_in != ((void*)0))
    {
        VAR_3 = FUNC_4( VAR_2->fifo_in );
        if ( VAR_3 != ((void*)0) )
            FUNC_1( &VAR_3 );
    }
}
