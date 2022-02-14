
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int rtc_xtal_freq_t ;
typedef scalar_t__ rtc_pll_t ;


 int FUNC_0 (int ,int ) ;
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ VAR_15 ;



 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_16 ;

void FUNC_6(rtc_xtal_freq_t VAR_17, rtc_pll_t VAR_18)
{
    uint8_t VAR_19;
    uint8_t VAR_20;
    uint8_t VAR_21;
    uint8_t VAR_22;
    uint8_t VAR_23;
    uint8_t VAR_24;

    if (VAR_18 == VAR_15) {




        FUNC_4(VAR_0, VAR_1);

        switch (VAR_17) {
            case 128:
                VAR_19 = 0;
                VAR_20 = 8;
                VAR_21 = 0;
                VAR_22 = 0;
                VAR_23 = 5;
                VAR_24 = 4;
                break;
            case 129:
                VAR_19 = 12;
                VAR_20 = 156;
                VAR_21 = 3;
                VAR_22 = 3;
                VAR_23 = 4;
                VAR_24 = 1;
                break;
            case 130:
                VAR_19 = 11;
                VAR_20 = 156;
                VAR_21 = 3;
                VAR_22 = 3;
                VAR_23 = 4;
                VAR_24 = 1;
                break;
            default:
                VAR_19 = 0;
                VAR_20 = 8;
                VAR_21 = 0;
                VAR_22 = 0;
                VAR_23 = 5;
                VAR_24 = 4;
                break;
        }
        FUNC_3(VAR_2, VAR_5, 0x6B);
    } else {



        FUNC_0(VAR_0, VAR_1);

        switch (VAR_17) {
            case 128:
                VAR_19 = 0;
                VAR_20 = 4;
                VAR_21 = 0;
                VAR_22 = 0;
                VAR_23 = 5;
                VAR_24 = 5;
                break;
            case 129:
                VAR_19 = 12;
                VAR_20 = 236;
                VAR_21 = 3;
                VAR_22 = 3;
                VAR_23 = 0;
                VAR_24 = 2;
                break;
            case 130:
                VAR_19 = 11;
                VAR_20 = 236;
                VAR_21 = 3;
                VAR_22 = 3;
                VAR_23 = 0;
                VAR_24 = 2;
                break;
            default:
                VAR_19 = 0;
                VAR_20 = 4;
                VAR_21 = 0;
                VAR_22 = 0;
                VAR_23 = 5;
                VAR_24 = 5;
                break;
        }
        FUNC_3(VAR_2, VAR_5, 0x69);
    }
    uint8_t VAR_25 = (VAR_23 << VAR_6) | (VAR_19);
    uint8_t VAR_26 = VAR_20;
    uint8_t VAR_27 = (2 << VAR_10 ) | (1 << VAR_8) | VAR_24;
    FUNC_3(VAR_2, VAR_13, VAR_25);
    FUNC_3(VAR_2, VAR_9, VAR_26);
    FUNC_2(VAR_2, VAR_11, VAR_21);
    FUNC_2(VAR_2, VAR_12, VAR_22);
    FUNC_3(VAR_2, VAR_7, VAR_27);


    FUNC_2(VAR_2, VAR_3, 1);
    for (int VAR_28 = 0; VAR_28 < 16; VAR_28++) {
        uint8_t VAR_29;
        FUNC_2(VAR_2, VAR_4, VAR_28);
        VAR_29 = FUNC_1(VAR_2, VAR_14);
        if (VAR_29 == 0) {
            break;
        }
        if(VAR_28 == 15) {
            FUNC_5(VAR_16, "BBPLL SOFTWARE CAL FAIL");
        }
    }
}
