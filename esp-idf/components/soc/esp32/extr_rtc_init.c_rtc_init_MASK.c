
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rtc_dboost_fpd; scalar_t__ pwrctl_init; scalar_t__ clkctl_init; int ck8m_wait; int xtal_wait; int pll_wait; } ;
typedef TYPE_1__ rtc_config_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int ,int ) ;
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
 int FUNC_4 (int ,int) ;

void FUNC_5(rtc_config_t VAR_64)
{
    FUNC_0(VAR_16, VAR_55);

    FUNC_3(VAR_59, VAR_54, VAR_64.pll_wait);
    FUNC_3(VAR_59, VAR_62, VAR_64.xtal_wait);
    FUNC_3(VAR_59, VAR_27, VAR_64.ck8m_wait);

    FUNC_3(VAR_19, VAR_31, VAR_32);
    FUNC_4(VAR_19,
            VAR_38 | VAR_47);


    FUNC_3(VAR_58, VAR_35, VAR_33);
    FUNC_3(VAR_58, VAR_34, VAR_33);

    if (VAR_64.clkctl_init) {

        FUNC_1(VAR_4, VAR_6);
        FUNC_1(VAR_0, VAR_2);

        FUNC_2(VAR_8, VAR_9, 0, VAR_10);
        FUNC_1(VAR_8, VAR_3);
        FUNC_1(VAR_8, VAR_7);

        FUNC_1(VAR_13, VAR_11);
        FUNC_1(VAR_14, VAR_12);

        FUNC_1(VAR_15, VAR_1);
        FUNC_1(VAR_15, VAR_5);
    }

    if (VAR_64.pwrctl_init) {
        FUNC_0(VAR_28, VAR_26);

        FUNC_0(VAR_51, VAR_63);

        FUNC_0(VAR_51, VAR_21);
        FUNC_0(VAR_51, VAR_24);
        FUNC_0(VAR_51, VAR_22);

        FUNC_4(VAR_51, VAR_20);
        FUNC_4(VAR_51, VAR_23);
        FUNC_4(VAR_51, VAR_25);

        FUNC_0(VAR_16, VAR_53);
        FUNC_4(VAR_16, VAR_52);
        FUNC_0(VAR_51, VAR_17);
        FUNC_0(VAR_51, VAR_18);

        FUNC_0(VAR_58, VAR_46);
        FUNC_0(VAR_58, VAR_37);
        if (VAR_64.rtc_dboost_fpd) {
            FUNC_4(VAR_58, VAR_36);
        } else {
            FUNC_0(VAR_58, VAR_36);
        }

        FUNC_0(VAR_44, VAR_48);
        FUNC_0(VAR_44, VAR_42);
        FUNC_0(VAR_44, VAR_61);
        FUNC_0(VAR_44, VAR_30);
        FUNC_0(VAR_57, VAR_50);
        FUNC_0(VAR_57, VAR_56);
        FUNC_0(VAR_43, VAR_41);
        FUNC_0(VAR_43, VAR_60);
        FUNC_0(VAR_43, VAR_29);
        FUNC_0(VAR_57, VAR_49);
        FUNC_0(VAR_57, VAR_45);

        FUNC_0(VAR_43, VAR_40);
        FUNC_0(VAR_43, VAR_39);
    }
}
