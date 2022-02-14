
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ rtc_xtal_freq_t ;
typedef scalar_t__ rtc_slow_freq_t ;
typedef int rtc_cal_sel_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_13 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static uint32_t FUNC_11(rtc_cal_sel_t VAR_20, uint32_t VAR_21)
{
    FUNC_8(VAR_21 < 32767);

    int VAR_22 = FUNC_2(VAR_5, VAR_7);
    if (VAR_20 == VAR_1 && !VAR_22) {
        FUNC_3(VAR_5, VAR_7, 1);
    }

    if (VAR_20 == VAR_2) {
        FUNC_4(VAR_5, VAR_6);
    }

    FUNC_3(FUNC_7(0), VAR_14, VAR_20);
    FUNC_0(FUNC_7(0), VAR_18);
    FUNC_3(FUNC_7(0), VAR_15, VAR_21);

    uint32_t VAR_23;
    rtc_slow_freq_t VAR_24 = FUNC_2(VAR_5, VAR_4);
    if (VAR_20 == VAR_1 ||
        (VAR_20 == VAR_3 && VAR_24 == VAR_9)) {
        VAR_23 = 32768;
    } else if (VAR_20 == VAR_2 ||
            (VAR_20 == VAR_3 && VAR_24 == VAR_10)) {
        VAR_23 = VAR_8 / 256;
    } else {
        VAR_23 = 150000;
    }
    uint32_t VAR_25 = (uint32_t) (((uint64_t) VAR_21) * VAR_0 / VAR_23);

    rtc_xtal_freq_t VAR_26 = FUNC_10();
    if (VAR_26 == VAR_12) {

        VAR_26 = VAR_11;
    }
    const uint32_t VAR_27 = VAR_19 / (uint32_t) VAR_26;
    if (VAR_25 >= VAR_27) {
        FUNC_5(VAR_13, "slowclk_cycles value too large, possible overflow");
        return 0;
    }

    FUNC_0(FUNC_7(0), VAR_17);
    FUNC_4(FUNC_7(0), VAR_17);




    FUNC_9(VAR_25);

    int VAR_28 = VAR_25;
    while (!FUNC_1(FUNC_7(0), VAR_16) &&
            VAR_28 > 0) {
        VAR_28--;
        FUNC_9(1);
    }

    FUNC_3(VAR_5, VAR_7, VAR_22);

    if (VAR_20 == VAR_2) {
        FUNC_0(VAR_5, VAR_6);
    }
    if (VAR_28 == 0) {

        return 0;
    }

    return FUNC_2(FUNC_6(0), VAR_19);
}
