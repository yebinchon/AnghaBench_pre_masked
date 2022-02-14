
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* task_name; int task_core_id; int task_priority; int task_stack_size; int queue_size; } ;
typedef TYPE_1__ esp_event_loop_args_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ VAR_5 ;

esp_err_t FUNC_1(void)
{
    if (VAR_5) {
        return VAR_1;
    }

    esp_event_loop_args_t VAR_6 = {
        .queue_size = VAR_0,
        .task_name = "sys_evt",
        .task_stack_size = VAR_4,
        .task_priority = VAR_3,
        .task_core_id = 0
    };

    esp_err_t VAR_7;

    VAR_7 = FUNC_0(&VAR_6, &VAR_5);
    if (VAR_7 != VAR_2) {
        return VAR_7;
    }

    return VAR_2;
}
