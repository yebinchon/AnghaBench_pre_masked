
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ opcode; } ;
typedef TYPE_1__ waiting_command_t ;
typedef int list_node_t ;
struct TYPE_8__ {int commands_pending_response_lock; int commands_pending_response; } ;
typedef TYPE_2__ command_waiting_response_t ;
typedef scalar_t__ command_opcode_t ;
struct TYPE_9__ {TYPE_2__ cmd_waiting_q; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int * FUNC_0 (int ) ;
 int const* FUNC_1 (int ) ;
 int * FUNC_2 (int const*) ;
 TYPE_1__* FUNC_3 (int const*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static waiting_command_t *FUNC_7(command_opcode_t VAR_2)
{
    command_waiting_response_t *VAR_3 = &VAR_1.cmd_waiting_q;
    FUNC_5(&VAR_3->commands_pending_response_lock, VAR_0);

    for (const list_node_t *VAR_4 = FUNC_0(VAR_3->commands_pending_response);
            VAR_4 != FUNC_1(VAR_3->commands_pending_response);
            VAR_4 = FUNC_2(VAR_4)) {
        waiting_command_t *VAR_5 = FUNC_3(VAR_4);
        if (!VAR_5 || VAR_5->opcode != VAR_2) {
            continue;
        }

        FUNC_4(VAR_3->commands_pending_response, VAR_5);

        FUNC_6(&VAR_3->commands_pending_response_lock);
        return VAR_5;
    }

    FUNC_6(&VAR_3->commands_pending_response_lock);
    return ((void*)0);
}
