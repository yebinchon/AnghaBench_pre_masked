
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtc_sleep_pd_config_t ;
struct TYPE_3__ {int dig_dbias_slp; int dig_dbias_wak; int rtc_dbias_wak; int rtc_dbias_slp; int vddsdio_pd_en; int xtal_fpu; scalar_t__ deep_slp; scalar_t__ rom_mem_pd_en; scalar_t__ wifi_pd_en; scalar_t__ rtc_peri_pd_en; scalar_t__ rtc_slowmem_pd_en; scalar_t__ rtc_fastmem_pd_en; scalar_t__ rtc_mem_inf_follow_cpu; scalar_t__ rtc_mem_inf_fpu; int lslp_meminf_pd; int lslp_mem_inf_fpu; } ;
typedef TYPE_1__ rtc_sleep_config_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_70 ;
 int VAR_71 ;
 int FUNC_6 (int ,int) ;
 int VAR_72 ;
 int VAR_73 ;
 int FUNC_7 (int ) ;

void FUNC_8(rtc_sleep_config_t VAR_74)
{

    FUNC_4(VAR_55, VAR_38, VAR_39);
    FUNC_4(VAR_55, VAR_64, VAR_65);
    FUNC_4(VAR_55, VAR_9, VAR_10);


    FUNC_4(VAR_58, VAR_34, VAR_35);


    FUNC_4(VAR_56, VAR_45, VAR_2);
    FUNC_4(VAR_56, VAR_46, VAR_3);

    FUNC_4(VAR_56, VAR_62, VAR_72);
    FUNC_4(VAR_56, VAR_63, VAR_73);

    FUNC_4(VAR_57, VAR_41, VAR_69);
    FUNC_4(VAR_57, VAR_60, VAR_71);

    FUNC_4(VAR_57, VAR_22, VAR_0);
    FUNC_4(VAR_57, VAR_23, VAR_1);

    FUNC_4(VAR_58, VAR_47, VAR_67);
    FUNC_4(VAR_58, VAR_48, VAR_68);

    FUNC_4(VAR_27, VAR_31, VAR_74.lslp_mem_inf_fpu);

    rtc_sleep_pd_config_t VAR_75 = FUNC_5(VAR_74.lslp_meminf_pd);
    FUNC_7(VAR_75);

    if (VAR_74.rtc_mem_inf_fpu) {
        FUNC_6(VAR_42, VAR_33);
    } else {
        FUNC_0(VAR_42, VAR_33);
    }

    if (VAR_74.rtc_mem_inf_follow_cpu) {
        FUNC_6(VAR_42, VAR_32);
    } else {
        FUNC_0(VAR_42, VAR_32);
    }

    if (VAR_74.rtc_fastmem_pd_en) {
        FUNC_6(VAR_42, VAR_30);
        FUNC_0(VAR_42, VAR_29);
        FUNC_0(VAR_42, VAR_28);
    } else {
        FUNC_0(VAR_42, VAR_30);
        FUNC_6(VAR_42, VAR_29);
        FUNC_6(VAR_42, VAR_28);
    }

    if (VAR_74.rtc_slowmem_pd_en) {
        FUNC_6(VAR_42, VAR_54);
        FUNC_0(VAR_42, VAR_53);
        FUNC_0(VAR_42, VAR_52);
    } else {
        FUNC_0(VAR_42, VAR_54);
        FUNC_6(VAR_42, VAR_53);
        FUNC_6(VAR_42, VAR_52);
    }

    if (VAR_74.rtc_peri_pd_en) {
        FUNC_6(VAR_42, VAR_37);
    } else {
        FUNC_0(VAR_42, VAR_37);
    }

    if (VAR_74.wifi_pd_en) {
        FUNC_6(VAR_27, VAR_61);
    } else {
        FUNC_0(VAR_27, VAR_61);
    }

    if (VAR_74.rom_mem_pd_en) {
        FUNC_6(VAR_27, VAR_13);
    } else {
        FUNC_0(VAR_27, VAR_13);
    }

    if (VAR_74.deep_slp) {
        FUNC_0(VAR_26,
                VAR_17 | VAR_18);
        FUNC_6(VAR_27, VAR_21);
        FUNC_0(VAR_27,
                VAR_20 | VAR_19);
        FUNC_0(VAR_36, VAR_7);


        FUNC_0(VAR_5,
                VAR_11 | VAR_40 |
                VAR_44 | VAR_59);
    } else {
        FUNC_0(VAR_27, VAR_21);
        FUNC_4(VAR_6, VAR_14, 0);
    }

    FUNC_4(VAR_36, VAR_66, VAR_74.xtal_fpu);

    if (FUNC_2(VAR_12, VAR_4) == VAR_70) {
        FUNC_3(VAR_12, VAR_8);
    } else {
        FUNC_1(VAR_12, VAR_8);
    }


    FUNC_1(VAR_49, VAR_50);
    FUNC_4(VAR_49, VAR_51, VAR_74.vddsdio_pd_en);

    FUNC_4(VAR_43, VAR_15, VAR_74.rtc_dbias_slp);
    FUNC_4(VAR_43, VAR_16, VAR_74.rtc_dbias_wak);
    FUNC_4(VAR_43, VAR_25, VAR_74.dig_dbias_wak);
    FUNC_4(VAR_43, VAR_24, VAR_74.dig_dbias_slp);
}
