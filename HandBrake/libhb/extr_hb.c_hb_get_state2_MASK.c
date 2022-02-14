
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_state_t ;
struct TYPE_3__ {int state_lock; int state; } ;
typedef TYPE_1__ hb_handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3( hb_handle_t * VAR_0, hb_state_t * VAR_1 )
{
    FUNC_0( VAR_0->state_lock );

    FUNC_2( VAR_1, &VAR_0->state, sizeof( hb_state_t ) );

    FUNC_1( VAR_0->state_lock );
}
