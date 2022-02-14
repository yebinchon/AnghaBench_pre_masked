
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_sleep_wakeup_cause_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_7(void)
{
    esp_sleep_wakeup_cause_t VAR_6 = FUNC_3();
    if (VAR_6 != VAR_0) {
        FUNC_5("Not ULP wakeup\n");
        FUNC_4();
    } else {
        FUNC_5("Deep sleep wakeup\n");
        FUNC_5("ULP did %d measurements since last reset\n", VAR_5 & VAR_1);
        FUNC_5("Thresholds:  low=%d  high=%d\n", VAR_4, VAR_2);
        VAR_3 &= VAR_1;
        FUNC_5("Value=%d was %s threshold\n", VAR_3,
                VAR_3 < VAR_4 ? "below" : "above");
    }
    FUNC_5("Entering deep sleep\n\n");
    FUNC_6();
    FUNC_0( FUNC_2() );
    FUNC_1();
}
