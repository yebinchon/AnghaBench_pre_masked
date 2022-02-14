
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_sleep_wakeup_cause_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
    esp_sleep_wakeup_cause_t VAR_1 = FUNC_3();
    if (VAR_1 != VAR_0) {
        FUNC_5("Not ULP wakeup, initializing ULP\n");
        FUNC_4();
    } else {
        FUNC_5("ULP wakeup, saving pulse count\n");
        FUNC_6();
    }

    FUNC_5("Entering deep sleep\n\n");
    FUNC_0( FUNC_2() );
    FUNC_1();
}
