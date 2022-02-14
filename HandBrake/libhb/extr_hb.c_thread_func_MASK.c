
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int hb_title_t ;
struct TYPE_10__ {scalar_t__ paused; int error; } ;
struct TYPE_11__ {TYPE_2__ working; } ;
struct TYPE_12__ {TYPE_3__ param; int state; } ;
struct TYPE_9__ {int list_title; } ;
struct TYPE_13__ {scalar_t__ work_thread; scalar_t__ scan_thread; scalar_t__ pause_date; scalar_t__ pause_duration; TYPE_4__ state; scalar_t__ paused; int state_lock; int work_error; TYPE_1__ title_set; scalar_t__ scan_die; int die; int pid; } ;
typedef TYPE_5__ hb_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (scalar_t__*) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (int **) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18( void * VAR_2 )
{
    hb_handle_t * VAR_3 = (hb_handle_t *) VAR_2;
    char * VAR_4;

    VAR_3->pid = FUNC_1();


    VAR_4 = FUNC_3();

    FUNC_9( VAR_4 );
    FUNC_0(VAR_4);

    while( !VAR_3->die )
    {

        if( VAR_3->scan_thread &&
            FUNC_15( VAR_3->scan_thread ) )
        {
            FUNC_14( &VAR_3->scan_thread );

            if ( VAR_3->scan_die )
            {
                hb_title_t * VAR_5;

                FUNC_10( VAR_3 );
                while( ( VAR_5 = FUNC_5( VAR_3->title_set.list_title, 0 ) ) )
                {
                    FUNC_6( VAR_3->title_set.list_title, VAR_5 );
                    FUNC_16( &VAR_5 );
                }

                FUNC_8( "hb_scan: canceled" );
            }
            else
            {
                FUNC_8( "libhb: scan thread found %d valid title(s)",
                        FUNC_4( VAR_3->title_set.list_title ) );
            }
            FUNC_7( VAR_3->state_lock );
            VAR_3->state.state = VAR_0;
            FUNC_17( VAR_3->state_lock );
        }


        if( VAR_3->work_thread &&
            FUNC_15( VAR_3->work_thread ) )
        {
            FUNC_14( &VAR_3->work_thread );

            FUNC_8( "libhb: work result = %d", VAR_3->work_error );
            FUNC_7( VAR_3->state_lock );
            VAR_3->state.state = VAR_1;
            VAR_3->state.param.working.error = VAR_3->work_error;

            FUNC_17( VAR_3->state_lock );
        }

        if (VAR_3->paused)
        {
            VAR_3->state.param.working.paused = VAR_3->pause_duration +
                                            FUNC_2() - VAR_3->pause_date;
        }
        FUNC_12( 50 );
    }

    if( VAR_3->scan_thread )
    {
        FUNC_11( VAR_3 );
        FUNC_14( &VAR_3->scan_thread );
    }
    if( VAR_3->work_thread )
    {
        FUNC_13( VAR_3 );
        FUNC_14( &VAR_3->work_thread );
    }
    FUNC_10( VAR_3 );
}
