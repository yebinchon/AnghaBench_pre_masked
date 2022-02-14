
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hb_state_t ;
struct TYPE_7__ {scalar_t__ state; int sequence_id; } ;
struct TYPE_6__ {int pause_lock; int state_lock; TYPE_1__* current_job; TYPE_3__ state; } ;
typedef TYPE_2__ hb_handle_t ;
struct TYPE_5__ {int sequence_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;

void FUNC_3( hb_handle_t * VAR_2, hb_state_t * VAR_3 )
{
    FUNC_0( VAR_2->pause_lock );
    FUNC_0( VAR_2->state_lock );
    FUNC_2( &VAR_2->state, VAR_3, sizeof( hb_state_t ) );
    if( VAR_2->state.state == VAR_1 ||
        VAR_2->state.state == VAR_0 )
    {

        if (VAR_2->current_job)
            VAR_2->state.sequence_id = VAR_2->current_job->sequence_id;
    }
    FUNC_1( VAR_2->state_lock );
    FUNC_1( VAR_2->pause_lock );
}
