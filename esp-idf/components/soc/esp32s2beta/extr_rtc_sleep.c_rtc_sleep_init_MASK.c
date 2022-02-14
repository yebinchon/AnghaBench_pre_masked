
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtc_sleep_pd_config_t ;
struct TYPE_3__ {int vddsdio_pd_en; int rtc_dbias_slp; int rtc_dbias_wak; int dig_dbias_wak; int dig_dbias_slp; int deep_slp_reject; int light_slp_reject; scalar_t__ deep_slp; scalar_t__ wifi_pd_en; scalar_t__ rtc_peri_pd_en; scalar_t__ rtc_slowmem_pd_en; scalar_t__ rtc_fastmem_pd_en; scalar_t__ rtc_mem_inf_follow_cpu; scalar_t__ lslp_mem_inf_fpu; } ;
typedef TYPE_1__ rtc_sleep_config_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

void FUNC_6(rtc_sleep_config_t VAR_31)
{







    if (VAR_31.lslp_mem_inf_fpu)
    {
        rtc_sleep_pd_config_t VAR_32 = FUNC_3(1);
        FUNC_5(VAR_32);
    }
    if (VAR_31.rtc_mem_inf_follow_cpu) {
        FUNC_4(VAR_19, VAR_16);
    } else {
        FUNC_0(VAR_19, VAR_16);
    }

    if (VAR_31.rtc_fastmem_pd_en) {
        FUNC_4(VAR_19, VAR_14);
        FUNC_0(VAR_19,VAR_13);
        FUNC_0(VAR_19,VAR_12);
    } else {
        FUNC_0(VAR_19, VAR_14);
        FUNC_4(VAR_19,VAR_13);
        FUNC_4(VAR_19,VAR_12);
    }

    if (VAR_31.rtc_slowmem_pd_en) {
        FUNC_4(VAR_19, VAR_27);
        FUNC_0(VAR_19,VAR_26);
        FUNC_0(VAR_19,VAR_25);
    } else {
        FUNC_0(VAR_19, VAR_27);
        FUNC_4(VAR_19,VAR_26);
        FUNC_4(VAR_19,VAR_25);
    }

    if (VAR_31.rtc_peri_pd_en) {
        FUNC_4(VAR_19, VAR_17);
    } else {
        FUNC_0(VAR_19, VAR_17);
    }

    if (VAR_31.wifi_pd_en) {
        FUNC_4(VAR_11, VAR_30);
    } else {
        FUNC_0(VAR_11, VAR_30);
    }
    if (VAR_31.deep_slp) {
        FUNC_2(VAR_1, VAR_3, VAR_4);
        FUNC_4(VAR_11, VAR_8);

        FUNC_0(VAR_0,
                VAR_2 | VAR_18 |
                VAR_21 | VAR_29);
    } else {
        FUNC_0(VAR_11, VAR_8);
        FUNC_2(VAR_1, VAR_3, 6);
    }


    FUNC_1(VAR_22, VAR_23);
    FUNC_2(VAR_22, VAR_24, VAR_31.vddsdio_pd_en);

    FUNC_2(VAR_20, VAR_5, VAR_31.rtc_dbias_slp);
    FUNC_2(VAR_20, VAR_6, VAR_31.rtc_dbias_wak);
    FUNC_2(VAR_20, VAR_10, VAR_31.dig_dbias_wak);
    FUNC_2(VAR_20, VAR_9, VAR_31.dig_dbias_slp);

    FUNC_2(VAR_28, VAR_7, VAR_31.deep_slp_reject);
    FUNC_2(VAR_28, VAR_15, VAR_31.light_slp_reject);
}
