
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int timer_isr_handle_t ;
struct TYPE_3__ {int timer; int group; } ;
typedef TYPE_1__ example_event_data_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,int ,TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_4)
{
    example_event_data_t *VAR_5 = (example_event_data_t *) VAR_4;
    timer_isr_handle_t VAR_6;

    FUNC_1(VAR_1, "%p: run task", FUNC_6());

    esp_err_t VAR_7 = FUNC_4(VAR_5->group, VAR_5->timer, VAR_2, VAR_5, 0, &VAR_6);
    if (VAR_7 != VAR_0) {
        FUNC_0(VAR_1, "%p: failed to register timer ISR", FUNC_6());
    } else {
        VAR_7 = FUNC_5(VAR_5->group, VAR_5->timer);
        if (VAR_7 != VAR_0) {
            FUNC_0(VAR_1, "%p: failed to start timer", FUNC_6());
        }
    }

    while (1) {
        uint32_t VAR_8;
        FUNC_3();
        FUNC_7(0, 0, &VAR_8, VAR_3);
        FUNC_2(VAR_8);
        FUNC_1(VAR_1, "Task[%p]: received event %d", FUNC_6(), VAR_8);
    }
}
