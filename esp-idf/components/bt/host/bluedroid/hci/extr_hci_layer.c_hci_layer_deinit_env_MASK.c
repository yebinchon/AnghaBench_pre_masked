
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * command_response_timer; int commands_pending_response_lock; int commands_pending_response; } ;
typedef TYPE_1__ command_waiting_response_t ;
struct TYPE_4__ {TYPE_1__ cmd_waiting_q; scalar_t__ packet_queue; scalar_t__ command_queue; } ;


 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    command_waiting_response_t *VAR_2;

    if (VAR_0.command_queue) {
        FUNC_0(VAR_0.command_queue, VAR_1);
    }
    if (VAR_0.packet_queue) {
        FUNC_0(VAR_0.packet_queue, VAR_1);
    }

    VAR_2 = &VAR_0.cmd_waiting_q;
    FUNC_1(VAR_2->commands_pending_response);
    FUNC_3(&VAR_2->commands_pending_response_lock);
    FUNC_2(VAR_2->command_response_timer);
    VAR_2->command_response_timer = ((void*)0);
}
