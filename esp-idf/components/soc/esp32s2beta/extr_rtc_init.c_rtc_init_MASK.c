
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtc_sleep_pd_config_t ;
struct TYPE_3__ {int xtal_fpu; int bbpll_fpu; scalar_t__ cpu_waiti_clk_gate; scalar_t__ rtc_dboost_fpd; scalar_t__ pwrctl_init; scalar_t__ clkctl_init; int ck8m_wait; int pll_wait; } ;
typedef TYPE_1__ rtc_config_t ;


 int FUNC_0 (int ,int) ;
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
 int FUNC_1 (int ,int ,int ) ;
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
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int FUNC_2 (int ) ;
 int VAR_75 ;
 int FUNC_3 (int ,int) ;
 int VAR_76 ;
 int FUNC_4 (int) ;
 int VAR_77 ;
 int VAR_78 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

void FUNC_7(rtc_config_t VAR_79)
{
    FUNC_0(VAR_16, VAR_55);
    FUNC_5();
    FUNC_1(VAR_62, VAR_53, VAR_79.pll_wait);
    FUNC_1(VAR_62, VAR_24, VAR_79.ck8m_wait);



    FUNC_1(VAR_65, VAR_45, VAR_46);







    FUNC_1(VAR_63, VAR_69, VAR_77);
    FUNC_1(VAR_63, VAR_70, VAR_78);

    FUNC_1(VAR_64, VAR_54, VAR_74);
    FUNC_1(VAR_64, VAR_66, VAR_75);

    FUNC_1(VAR_64, VAR_37, VAR_0);
    FUNC_1(VAR_64, VAR_38, VAR_1);

    FUNC_1(VAR_65, VAR_60, VAR_72);
    FUNC_1(VAR_65, VAR_61, VAR_73);

    FUNC_3(VAR_20,
            VAR_31 | VAR_42);


    FUNC_1(VAR_58, VAR_28, VAR_26);
    FUNC_1(VAR_58, VAR_27, VAR_26);

    if (VAR_79.clkctl_init) {

        FUNC_0(VAR_7, VAR_6);

        FUNC_1(VAR_12, VAR_13, 0);

        FUNC_1(VAR_14, VAR_15, 0);

        FUNC_0(VAR_9, VAR_8);
        FUNC_0(VAR_11, VAR_10);

        FUNC_0(FUNC_4(0), VAR_76);
        FUNC_0(FUNC_4(1), VAR_76);
    }
    if (VAR_79.pwrctl_init) {
        FUNC_0(VAR_25, VAR_23);


        if (!(VAR_79.xtal_fpu | VAR_79.bbpll_fpu)) {
            FUNC_0(VAR_47, VAR_71);
        } else {
            FUNC_3(VAR_47, VAR_71);
        }



        FUNC_0(VAR_47, VAR_21);



        FUNC_3(VAR_47, VAR_22);

        FUNC_0(VAR_16, VAR_52);
        FUNC_3(VAR_16, VAR_51);


        if (!VAR_79.bbpll_fpu) {
            FUNC_0(VAR_47, VAR_17);
            FUNC_0(VAR_47, VAR_18);
            FUNC_0(VAR_47, VAR_19);
        } else {
            FUNC_3(VAR_47, VAR_17);
            FUNC_3(VAR_47, VAR_18);
            FUNC_3(VAR_47, VAR_19);
        }

        FUNC_0(VAR_57, VAR_56);
        FUNC_0(VAR_58, VAR_59);
        FUNC_0(VAR_58, VAR_30);


        FUNC_0(VAR_57, VAR_44);
        FUNC_0(VAR_57, VAR_43);

        if (VAR_79.rtc_dboost_fpd) {
            FUNC_3(VAR_58, VAR_29);
        } else {
            FUNC_0(VAR_58, VAR_29);
        }

        FUNC_0(VAR_57, VAR_44);



        FUNC_0(VAR_5, VAR_4);


        rtc_sleep_pd_config_t VAR_80 = FUNC_2(0);
        FUNC_6(VAR_80);

        FUNC_0(VAR_40, VAR_36);
        FUNC_0(VAR_40, VAR_68);


        FUNC_0(VAR_39, VAR_35);
        FUNC_0(VAR_39, VAR_67);

        FUNC_0(VAR_57, VAR_41);

        if (VAR_79.cpu_waiti_clk_gate){
            FUNC_0(VAR_2, VAR_3);
        }
        else{
            FUNC_3(VAR_2, VAR_3);
        }






        FUNC_0(VAR_39, VAR_34);
        FUNC_0(VAR_39, VAR_33);




    }
}
