
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue_size; char* task_name; int task_stack_size; int task_core_id; int task_priority; } ;
typedef TYPE_1__ esp_event_loop_args_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int,int *,int ,int *) ;

void FUNC_6(void)
{
    FUNC_1(VAR_0, "setting up");

    esp_event_loop_args_t VAR_9 = {
        .queue_size = 5,
        .task_name = "loop_task",
        .task_priority = FUNC_4(((void*)0)),
        .task_stack_size = 2048,
        .task_core_id = VAR_8
    };

    esp_event_loop_args_t VAR_10 = {
        .queue_size = 5,
        .task_name = ((void*)0)
    };


    FUNC_0(FUNC_3(&VAR_9, &VAR_4));
    FUNC_0(FUNC_3(&VAR_10, &VAR_5));



    FUNC_0(FUNC_2(VAR_4, VAR_1, VAR_2, VAR_7, VAR_4));
    FUNC_0(FUNC_2(VAR_5, VAR_1, VAR_2, VAR_7, VAR_5));

    FUNC_1(VAR_0, "starting event source");


    FUNC_5(VAR_6, "task_event_source", 2048, ((void*)0), FUNC_4(((void*)0)), ((void*)0));

    FUNC_1(VAR_0, "starting application task");

    FUNC_5(VAR_3, "application_task", 2048, ((void*)0), FUNC_4(((void*)0)), ((void*)0));
}
