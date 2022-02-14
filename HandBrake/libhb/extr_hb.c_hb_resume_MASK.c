
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int paused; } ;
struct TYPE_8__ {TYPE_1__ working; } ;
struct TYPE_9__ {TYPE_2__ param; } ;
struct TYPE_11__ {int pause_date; scalar_t__ paused; int pause_lock; int pause_duration; TYPE_3__ state; TYPE_4__* current_job; } ;
typedef TYPE_5__ hb_handle_t ;
struct TYPE_10__ {int st_paused; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

void FUNC_2( hb_handle_t * VAR_0 )
{
    if( VAR_0->paused )
    {
        if (VAR_0->pause_date != -1)
        {

            VAR_0->pause_duration += FUNC_0() - VAR_0->pause_date;



            VAR_0->current_job->st_paused += FUNC_0() - VAR_0->pause_date;
            VAR_0->pause_date = -1;
            VAR_0->state.param.working.paused = VAR_0->pause_duration;
        }

        FUNC_1( VAR_0->pause_lock );
        VAR_0->paused = 0;
    }
}
