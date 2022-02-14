
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef scalar_t__ esp_event_base_t ;


 scalar_t__ VAR_0 ;




__attribute__((used)) static char* FUNC_0(esp_event_base_t VAR_1, int32_t VAR_2) {
    char* VAR_3 = "";
    if (VAR_1 == VAR_0) {
        switch(VAR_2) {
            case 129:
            VAR_3 = "TIMER_EVENT_STARTED";
            break;
            case 130:
            VAR_3 = "TIMER_EVENT_EXPIRY";
            break;
            case 128:
            VAR_3 = "TIMER_EVENT_STOPPED";
            break;
        }
    } else {
        VAR_3 = "TASK_ITERATION_EVENT";
    }
    return VAR_3;
}
