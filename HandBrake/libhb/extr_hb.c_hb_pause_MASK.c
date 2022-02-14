
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct TYPE_5__ {int paused; int state_lock; TYPE_1__ state; int pause_date; int pause_lock; } ;
typedef TYPE_2__ hb_handle_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3( hb_handle_t * VAR_1 )
{
    if( !VAR_1->paused )
    {
        FUNC_1( VAR_1->pause_lock );
        VAR_1->paused = 1;

        VAR_1->pause_date = FUNC_0();

        FUNC_1( VAR_1->state_lock );
        VAR_1->state.state = VAR_0;
        FUNC_2( VAR_1->state_lock );
    }
}
