
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; scalar_t__ join_task; void* retval; scalar_t__ detached; scalar_t__ task_arg; } ;
typedef TYPE_1__ esp_pthread_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__,int ,int ) ;

void FUNC_14(void *VAR_6)
{
    bool VAR_7 = 0;


    FUNC_6();

    if (FUNC_11(VAR_5, VAR_4) != VAR_3) {
        FUNC_2(0 && "Failed to lock threads list!");
    }
    esp_pthread_t *VAR_8 = FUNC_5(FUNC_12());
    if (!VAR_8) {
        FUNC_2(0 && "Failed to find pthread for current task!");
    }
    if (VAR_8->task_arg) {
        FUNC_3(VAR_8->task_arg);
    }
    if (VAR_8->detached) {

        FUNC_4(VAR_8);
        VAR_7 = 1;
    } else {

        VAR_8->retval = VAR_6;

        if (VAR_8->join_task) {

            FUNC_13(VAR_8->join_task, 0, VAR_2);
        } else {
            VAR_8->state = VAR_0;
        }
    }
    FUNC_10(VAR_5);

    FUNC_0(VAR_1, "Task stk_wm = %d", FUNC_7(((void*)0)));

    if (VAR_7) {
        FUNC_8(((void*)0));
    } else {
        FUNC_9(((void*)0));
    }


    FUNC_1();
}
