
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {scalar_t__ scr_delta; scalar_t__ last_scr; scalar_t__ last_pts; int scr_changes; } ;
typedef TYPE_2__ hb_psdemux_t ;
struct TYPE_12__ {scalar_t__ pcr; scalar_t__ start; scalar_t__ type; scalar_t__ stop; scalar_t__ renderOffset; scalar_t__ discontinuity; } ;
struct TYPE_14__ {struct TYPE_14__* next; TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( hb_buffer_t *VAR_3, hb_buffer_list_t *VAR_4,
                        hb_psdemux_t *VAR_5, int VAR_6 )
{
    while ( VAR_3 )
    {
        FUNC_3( VAR_5, VAR_3 );
        if ( VAR_5 )
        {
            int VAR_7 = 0;


            if ( VAR_3->s.pcr >= 0 )
            {

                VAR_7 = FUNC_0( VAR_5, VAR_3->s.pcr, VAR_6 );
                VAR_3->s.pcr = VAR_1;


                if ( VAR_3->s.start >= 0 )
                    VAR_5->scr_delta = VAR_3->s.start - VAR_5->last_scr;
                else
                    VAR_5->scr_delta = 0;
            }
            if ( !VAR_7 && VAR_3->s.discontinuity )
            {


                ++VAR_5->scr_changes;
                VAR_5->last_scr = VAR_3->s.start;
                VAR_5->scr_delta = 0;
            }

            if ( VAR_3->s.start >= 0 )
            {
                int64_t VAR_8;
                if (VAR_3->s.type == VAR_0 || VAR_3->s.type == VAR_2)
                {
                    if ( VAR_5->last_pts >= 0 )
                    {
                        VAR_8 = VAR_3->s.start - VAR_5->last_pts;
                        if ( VAR_8 < -5 * 90000LL || VAR_8 > 5 * 90000LL )
                        {





                            ++VAR_5->scr_changes;
                            VAR_5->last_scr = VAR_3->s.start;
                            VAR_5->scr_delta = 0;
                        }
                    }
                    VAR_5->last_pts = VAR_3->s.start;
                }
                if (VAR_5->last_scr != VAR_1)
                {
                    VAR_8 = VAR_3->s.start - VAR_5->last_scr - VAR_5->scr_delta;
                    if ( VAR_8 < -300 * 90000LL || VAR_8 > 300 * 90000LL )
                    {

                        VAR_3->s.renderOffset = VAR_1;
                        VAR_3->s.start = VAR_1;
                        VAR_3->s.stop = VAR_1;
                    }
                    else
                    {





                        VAR_5->scr_delta = VAR_3->s.start - VAR_5->last_scr;
                    }
                }
            }

            if ( VAR_3->s.type == VAR_2 )
            {
                FUNC_2( VAR_5, VAR_3 );
            }
        }

        hb_buffer_t *VAR_9 = VAR_3->next;
        VAR_3->next = ((void*)0);
        FUNC_1(VAR_4, VAR_3);
        VAR_3 = VAR_9;
    }
}
