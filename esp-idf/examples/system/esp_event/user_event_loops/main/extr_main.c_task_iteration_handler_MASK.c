
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ,char*,int ,char*,char*,int) ;
 int VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_1(void* VAR_2, esp_event_base_t VAR_3, int32_t VAR_4, void* VAR_5)
{






    int VAR_6 = *((int*) VAR_5);

    char* VAR_7;

    if (VAR_2 == VAR_1) {
        VAR_7 = "loop_with_task";
    } else {
        VAR_7 = "loop_without_task";
    }

    FUNC_0(VAR_0, "handling %s:%s from %s, iteration %d", VAR_3, "TASK_ITERATION_EVENT", VAR_7, VAR_6);
}
