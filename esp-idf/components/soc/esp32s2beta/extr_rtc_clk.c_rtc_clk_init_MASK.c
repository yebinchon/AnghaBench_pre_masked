
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int rtc_xtal_freq_t ;
typedef int rtc_cpu_freq_t ;
struct TYPE_3__ {int xtal_freq; scalar_t__ slow_freq; scalar_t__ fast_freq; int cpu_freq; int clk_8m_clk_div; int clk_rtc_clk_div; int clk_8m_dfreq; int slow_clk_dcap; } ;
typedef TYPE_1__ rtc_clk_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ) ;

void FUNC_23(rtc_clk_config_t VAR_21)
{
    rtc_cpu_freq_t VAR_22 = FUNC_13();
    if (FUNC_2(VAR_19, VAR_17) == VAR_18) {
        FUNC_14(VAR_10);
    }
    FUNC_3(VAR_8, VAR_9, VAR_21.slow_clk_dcap);
    FUNC_3(VAR_7, VAR_6, VAR_21.clk_8m_dfreq);


    FUNC_16(VAR_21.clk_rtc_clk_div);

    FUNC_10(VAR_21.clk_8m_clk_div);


    FUNC_4(VAR_1, VAR_0, VAR_0, VAR_2);
    FUNC_0(VAR_1, VAR_3 | VAR_4);


    rtc_xtal_freq_t VAR_23 = VAR_21.xtal_freq;
    if (VAR_23 == VAR_15) {
        if (FUNC_8(FUNC_1(VAR_16))) {

            VAR_23 = FUNC_20();
        } else {

            VAR_23 = FUNC_19();
            if (VAR_23 == VAR_15) {
                FUNC_5(VAR_20, "Can't estimate XTAL frequency, assuming 26MHz");
                VAR_23 = VAR_14;
            }
        }
    } else if (!FUNC_8(FUNC_1(VAR_16))) {




        rtc_xtal_freq_t VAR_24 = FUNC_19();
        if (VAR_24 != VAR_23) {
            FUNC_5(VAR_20, "Possibly invalid CONFIG_ESP32S2_XTAL_FREQ setting (%dMHz). Detected %d MHz.",
                    VAR_23, VAR_24);
        }
    }
    FUNC_22(0);
    FUNC_21(VAR_23);
    FUNC_12(VAR_23 * VAR_5);

    FUNC_14(VAR_21.cpu_freq);


    uint32_t VAR_25 = FUNC_15(VAR_22) / VAR_5;
    uint32_t VAR_26 = FUNC_15(VAR_21.cpu_freq) / VAR_5;
    FUNC_7( FUNC_6() * VAR_26 / VAR_25 );


    if (VAR_21.slow_freq == VAR_12) {
        FUNC_9(1);
    }
    if (VAR_21.fast_freq == VAR_11) {
        bool VAR_27 = VAR_21.slow_freq == VAR_13;
        FUNC_11(1, VAR_27);
    }
    FUNC_17(VAR_21.fast_freq);
    FUNC_18(VAR_21.slow_freq);
}
