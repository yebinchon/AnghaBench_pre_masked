
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iteration ;
typedef scalar_t__ esp_event_loop_handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int ,int ,int*,int,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void* VAR_8)
{
    for(int VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++) {
        esp_event_loop_handle_t VAR_10;

        if (VAR_9 % 2 == 0) {

            VAR_10 = VAR_5;
        } else {

            VAR_10 = VAR_6;
        }

        FUNC_1(VAR_0, "posting %s:%s to %s, iteration %d out of %d", VAR_1, "TASK_ITERATION_EVENT",
                VAR_10 == VAR_5 ? "loop_with_task" : "loop_without_task",
                VAR_9, VAR_2);

        FUNC_0(FUNC_2(VAR_10, VAR_1, VAR_3, &VAR_9, sizeof(VAR_9), VAR_7));

        FUNC_4(FUNC_3(VAR_4));
    }

    FUNC_4(FUNC_3(VAR_4));

    FUNC_1(VAR_0, "deleting task event source");

    FUNC_5(((void*)0));
}
