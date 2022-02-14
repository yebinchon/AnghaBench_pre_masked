
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int esp_timer_handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void* VAR_1)
{
    int64_t VAR_2 = FUNC_2();
    FUNC_1(VAR_0, "One-shot timer called, time since boot: %lld us", VAR_2);
    esp_timer_handle_t VAR_3 = (esp_timer_handle_t) VAR_1;

    FUNC_0(FUNC_4(VAR_3));
    FUNC_0(FUNC_3(VAR_3, 1000000));
    VAR_2 = FUNC_2();
    FUNC_1(VAR_0, "Restarted periodic timer with 1s period, time since boot: %lld us",
            VAR_2);
}
