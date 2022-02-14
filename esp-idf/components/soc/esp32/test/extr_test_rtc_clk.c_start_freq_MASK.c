
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ rtc_slow_freq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 long long FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(rtc_slow_freq_t VAR_4, uint32_t VAR_5)
{
    int VAR_6 = 0, VAR_7 = 0;
    uint32_t VAR_8;
    uint32_t VAR_9;
    rtc_slow_freq_t VAR_10;
    FUNC_8();






    uint32_t VAR_11 = 5;
    FUNC_4("Test is started. Kconfig settings:\n Internal RC is selected,\n Oscillation cycles = %d,\n Calibration cycles = %d.\n",
            VAR_11,
            VAR_0);

    if (VAR_5 == 0 && VAR_0 < 1500){
        VAR_5 = 50;
        FUNC_4("Recommended increase Number of cycles for RTC_SLOW_CLK calibration to 3000!\n");
    }
    while(VAR_6 < VAR_2){
        VAR_8 = FUNC_9() * (1000 / VAR_3);
        VAR_6++;
        FUNC_4("attempt #%d/%d...", VAR_6, VAR_2);
        FUNC_5(VAR_11);
        FUNC_3(VAR_5 * 1000);
        FUNC_6();
        VAR_10 = FUNC_7();
        VAR_9 = FUNC_9() * (1000 / VAR_3);
        FUNC_4(" [time=%d] ", (VAR_9 - VAR_8) - VAR_5);
        if(VAR_10 != VAR_4){
            FUNC_4("FAIL. Time measurement...");
            VAR_7 = 1;
        } else {
            FUNC_4("PASS. Time measurement...");
        }
        uint64_t VAR_12;
        uint32_t VAR_13 = 0;
        for (int VAR_14 = 0; VAR_14 < 3; ++VAR_14) {
            VAR_12 = FUNC_1();
            FUNC_3(1000000);
            uint64_t VAR_15 = FUNC_1() - VAR_12;
            if (VAR_15 < 900000LL || VAR_15 > 1100000){
                FUNC_4("FAIL");
                VAR_7 = 1;
                VAR_13 = 1;
                break;
            }
        }
        if(VAR_13 == 0) {
            FUNC_4("PASS");
        }
        FUNC_4(" [calibration val = %d] \n", FUNC_2());
        FUNC_8();
        FUNC_3(500000);
    }
    FUNC_0(VAR_7 == 0, "Test failed");
    FUNC_4("Test passed successfully\n");
}
