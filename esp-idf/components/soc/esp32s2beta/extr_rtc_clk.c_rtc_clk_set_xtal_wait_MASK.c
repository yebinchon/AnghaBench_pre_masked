
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ rtc_slow_freq_t ;
typedef int rtc_cal_sel_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(void)
{




    rtc_slow_freq_t VAR_8 = FUNC_2();
    rtc_slow_freq_t VAR_9 = VAR_6;
    rtc_slow_freq_t VAR_10 = VAR_7;
    rtc_cal_sel_t VAR_11 = VAR_2;
    if (VAR_8 == (VAR_9)) {
        VAR_11 = VAR_0;
    } else if (VAR_8 == VAR_10) {
        VAR_11 = VAR_1;
    }
    uint32_t VAR_12 = FUNC_1(VAR_11, 2000);
    uint32_t VAR_13 = 100;
    if (VAR_12) {
        VAR_13 = (1000 << VAR_3) / VAR_12;
    }
    FUNC_0(VAR_4, VAR_5, VAR_13);
}
