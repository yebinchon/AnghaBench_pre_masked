
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int rtc_xtal_freq_t ;
struct TYPE_7__ {int freq_mhz; } ;
typedef TYPE_1__ rtc_cpu_freq_config_t ;
struct TYPE_8__ {int xtal_freq; int cpu_freq_mhz; scalar_t__ slow_freq; scalar_t__ fast_freq; int clk_8m_div; int clk_8m_dfreq; int slow_clk_dcap; } ;
typedef TYPE_2__ rtc_clk_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_22 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int,TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int) ;
 int FUNC_24 (int ) ;

void FUNC_25(rtc_clk_config_t VAR_23)
{
    rtc_cpu_freq_config_t VAR_24, VAR_25;
    if (FUNC_2(VAR_11, VAR_14) == VAR_15) {




        FUNC_18(40, 1);
    }
    FUNC_3(VAR_12, VAR_13, VAR_23.slow_clk_dcap);
    FUNC_3(VAR_11, VAR_9, VAR_23.clk_8m_dfreq);


    FUNC_3(VAR_11, VAR_10, VAR_23.clk_8m_div);


    FUNC_5(VAR_1, VAR_0, VAR_0, VAR_2);
    FUNC_0(VAR_1, VAR_6 | VAR_7);


    rtc_xtal_freq_t VAR_26 = VAR_23.xtal_freq;
    if (VAR_26 == VAR_20) {
        if (FUNC_11(FUNC_1(VAR_21))) {

            VAR_26 = FUNC_22();
        } else {

            VAR_26 = FUNC_21();
            if (VAR_26 == VAR_20) {
                FUNC_7(VAR_22, "Can't estimate XTAL frequency, assuming 26MHz");
                VAR_26 = VAR_19;
            }
        }
    } else if (!FUNC_11(FUNC_1(VAR_21))) {





        rtc_xtal_freq_t VAR_27 = FUNC_21();
        if (VAR_27 != VAR_26) {
            FUNC_7(VAR_22, "Possibly invalid CONFIG_ESP32_XTAL_FREQ setting (%dMHz). Detected %d MHz.",
                    VAR_26, VAR_27);
        }
    }
    FUNC_24(0);
    FUNC_23(VAR_26);
    FUNC_14(VAR_26 * VAR_8);



    FUNC_15(&VAR_24);
    uint32_t VAR_28 = VAR_24.freq_mhz;

    bool VAR_29 = FUNC_16(VAR_23.cpu_freq_mhz, &VAR_25);
    if (!VAR_29) {
        FUNC_6(VAR_22, "invalid CPU frequency value");
        FUNC_10();
    }
    FUNC_17(&VAR_25);


    FUNC_4(VAR_5, VAR_26 - 1);
    FUNC_4(VAR_4, VAR_3 / VAR_8 - 1);


    FUNC_9( (uint64_t)FUNC_8() * VAR_23.cpu_freq_mhz / VAR_28 );


    if (VAR_23.slow_freq == VAR_17) {
        FUNC_12(1);
    }
    if (VAR_23.fast_freq == VAR_16) {
        bool VAR_30 = VAR_23.slow_freq == VAR_18;
        FUNC_13(1, VAR_30);
    }
    FUNC_19(VAR_23.fast_freq);
    FUNC_20(VAR_23.slow_freq);
}
