
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int esp_event_post_instance_t ;
struct TYPE_9__ {char* name; int * profiling_mutex; int * mutex; int * queue; int * running_task; int * task; int loop_nodes; } ;
typedef TYPE_1__ esp_event_loop_instance_t ;
typedef scalar_t__ esp_event_loop_handle_t ;
struct TYPE_10__ {char* task_name; int task_core_id; int task_priority; int task_stack_size; int queue_size; } ;
typedef TYPE_2__ esp_event_loop_args_t ;
typedef int esp_err_t ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__ const*) ;
 TYPE_1__* FUNC_5 (int,int) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int) ;
 int * FUNC_12 () ;
 int * FUNC_13 () ;
 scalar_t__ FUNC_14 (int ,char*,int ,void*,int ,int **,int ) ;

esp_err_t FUNC_15(const esp_event_loop_args_t* VAR_9, esp_event_loop_handle_t* VAR_10)
{
    FUNC_4(VAR_9);

    esp_event_loop_instance_t* VAR_11;
    esp_err_t VAR_12 = VAR_0;

    VAR_11 = FUNC_5(1, sizeof(*VAR_11));
    if (VAR_11 == ((void*)0)) {
        FUNC_1(VAR_3, "alloc for event loop failed");
        return VAR_12;
    }

    VAR_11->queue = FUNC_11(VAR_9->queue_size , sizeof(esp_event_post_instance_t));
    if (VAR_11->queue == ((void*)0)) {
        FUNC_1(VAR_3, "create event loop queue failed");
        goto on_err;
    }

    VAR_11->mutex = FUNC_13();
    if (VAR_11->mutex == ((void*)0)) {
        FUNC_1(VAR_3, "create event loop mutex failed");
        goto on_err;
    }
    FUNC_2(&(VAR_11->loop_nodes));


    if (VAR_9->task_name != ((void*)0)) {
        BaseType_t VAR_13 = FUNC_14(VAR_4, VAR_9->task_name,
                    VAR_9->task_stack_size, (void*) VAR_11,
                    VAR_9->task_priority, &(VAR_11->task), VAR_9->task_core_id);

        if (VAR_13 != VAR_6) {
            FUNC_1(VAR_3, "create task for loop failed");
            VAR_12 = VAR_1;
            goto on_err;
        }

        VAR_11->name = VAR_9->task_name;

        FUNC_0(VAR_3, "created task for loop %p", VAR_11);
    } else {
        VAR_11->name = "";
        VAR_11->task = ((void*)0);
    }

    VAR_11->running_task = ((void*)0);







    *VAR_10 = (esp_event_loop_handle_t) VAR_11;

    FUNC_0(VAR_3, "created event loop %p", VAR_11);

    return VAR_2;

on_err:
    if (VAR_11->queue != ((void*)0)) {
        FUNC_9(VAR_11->queue);
    }

    if (VAR_11->mutex != ((void*)0)) {
        FUNC_10(VAR_11->mutex);
    }







    FUNC_6(VAR_11);

    return VAR_12;
}
