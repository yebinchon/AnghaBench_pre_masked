
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_state_t ;
struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_4__ {int state_lock; TYPE_2__ state; } ;
typedef TYPE_1__ hb_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;

void FUNC_3( hb_handle_t * VAR_3, hb_state_t * VAR_4 )
{
    FUNC_0( VAR_3->state_lock );

    FUNC_2( VAR_4, &VAR_3->state, sizeof( hb_state_t ) );
    if ( VAR_3->state.state == VAR_1 || VAR_3->state.state == VAR_2 )
        VAR_3->state.state = VAR_0;

    FUNC_1( VAR_3->state_lock );
}
