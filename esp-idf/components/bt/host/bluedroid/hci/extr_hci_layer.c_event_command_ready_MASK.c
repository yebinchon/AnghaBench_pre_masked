
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ opcode; struct TYPE_11__* command; } ;
typedef TYPE_1__ waiting_command_t ;
typedef int fixed_queue_t ;
struct TYPE_12__ {int commands_pending_response_lock; int commands_pending_response; } ;
typedef TYPE_2__ command_waiting_response_t ;
struct TYPE_14__ {int command_credits; TYPE_2__ cmd_waiting_q; } ;
struct TYPE_13__ {int (* fragment_and_dispatch ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 TYPE_9__ VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 TYPE_6__* VAR_5 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(fixed_queue_t *VAR_6)
{
    waiting_command_t *VAR_7 = ((void*)0);
    command_waiting_response_t *VAR_8 = &VAR_4.cmd_waiting_q;

    VAR_7 = FUNC_0(VAR_6, VAR_0);

    if(VAR_7->opcode == VAR_1

    || VAR_7->opcode == VAR_2

    ){
        VAR_5->fragment_and_dispatch(VAR_7->command);
        FUNC_2(VAR_7->command);
        FUNC_2(VAR_7);
        return;
    }
    VAR_4.command_credits--;

    FUNC_3(&VAR_8->commands_pending_response_lock, VAR_3);
    FUNC_1(VAR_8->commands_pending_response, VAR_7);
    FUNC_4(&VAR_8->commands_pending_response_lock);


    VAR_5->fragment_and_dispatch(VAR_7->command);

    FUNC_5(VAR_8);
}
