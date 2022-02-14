
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timer_is_set; int commands_pending_response_lock; int command_response_timer; int commands_pending_response; } ;
typedef TYPE_1__ command_waiting_response_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(command_waiting_response_t *VAR_2)
{
    FUNC_3(&VAR_2->commands_pending_response_lock, VAR_1);
    if (VAR_2->timer_is_set) {
        FUNC_1(VAR_2->command_response_timer);
        VAR_2->timer_is_set = 0;
    }
    if (!FUNC_0(VAR_2->commands_pending_response)) {
        FUNC_2(VAR_2->command_response_timer, VAR_0);
        VAR_2->timer_is_set = 1;
    }
    FUNC_4(&VAR_2->commands_pending_response_lock);
}
