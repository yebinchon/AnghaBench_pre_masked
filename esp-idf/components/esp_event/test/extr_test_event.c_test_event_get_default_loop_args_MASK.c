
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* task_name; int task_stack_size; int task_core_id; int task_priority; int queue_size; } ;
typedef TYPE_1__ esp_event_loop_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static esp_event_loop_args_t FUNC_1(void)
{
    esp_event_loop_args_t VAR_2 = {
        .queue_size = VAR_0,
        .task_name = "loop",
        .task_priority = VAR_1,
        .task_stack_size = 2048,
        .task_core_id = FUNC_0()
    };

    return VAR_2;
}
