
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtc_xtal_freq_t ;
typedef scalar_t__ rtc_cpu_freq_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int ,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 () ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;

void FUNC_8(rtc_cpu_freq_t VAR_30)
{
    rtc_xtal_freq_t VAR_31 = FUNC_7();

    FUNC_2(VAR_12, VAR_10, VAR_3);
    FUNC_2(VAR_27, VAR_24, VAR_26);
    FUNC_2(VAR_27, VAR_23, 0);
    FUNC_4(VAR_31);






    FUNC_1(VAR_5, VAR_4, 0);


    FUNC_3(VAR_11,
            VAR_9 | VAR_7 |
            VAR_8);
    VAR_29 = VAR_22;
    FUNC_5(VAR_31 * VAR_6);
    if (VAR_30 == VAR_19) {

    } else if (VAR_30 == VAR_17) {

        FUNC_2(VAR_27, VAR_23, (VAR_31 / 2) - 1);
        FUNC_4(2);
        FUNC_5(2 * VAR_6);

        FUNC_2(VAR_12, VAR_10, VAR_1);
    } else {

        FUNC_0(VAR_11,
                VAR_9 |
                VAR_7 | VAR_8);
        if (VAR_30 > VAR_17) {
            FUNC_6(VAR_31, VAR_20);
            VAR_29 = VAR_20;
        } else {
            FUNC_6(VAR_31, VAR_21);
            VAR_29 = VAR_21;
        }

        if ((VAR_30 == VAR_18) || (VAR_30 == VAR_14)) {
            FUNC_2(VAR_12, VAR_10, VAR_2);
            FUNC_1(VAR_5, VAR_4, 0);
            FUNC_4(80);
        } else if ((VAR_30 == VAR_15) || (VAR_30 == VAR_13)) {
            FUNC_2(VAR_12, VAR_10, VAR_2);
            FUNC_1(VAR_5, VAR_4, 1);
            FUNC_4(160);
        } else if (VAR_30 == VAR_16) {
            FUNC_2(VAR_12, VAR_10, VAR_0);
            FUNC_1(VAR_5, VAR_4, 2);
            FUNC_4(240);
        }
        FUNC_2(VAR_27, VAR_24, VAR_25);

        FUNC_5(80 * VAR_6);
    }
    VAR_28 = VAR_30;
}
