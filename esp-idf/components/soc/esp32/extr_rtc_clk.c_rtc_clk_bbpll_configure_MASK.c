
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int rtc_xtal_freq_t ;


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
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;



 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_19 ;

void FUNC_4(rtc_xtal_freq_t VAR_20, int VAR_21)
{
    uint8_t VAR_22;
    uint8_t VAR_23;
    uint8_t VAR_24;
    uint8_t VAR_25;
    uint8_t VAR_26;
    uint8_t VAR_27;

    if (VAR_21 == VAR_17) {

        FUNC_1(VAR_16, VAR_15, VAR_8);

        switch (VAR_20) {
            case 128:
                VAR_22 = 0;
                VAR_23 = 32;
                VAR_24 = 0;
                VAR_25 = 0;
                VAR_26 = 6;
                VAR_27 = 3;
                break;
            case 129:
                VAR_22 = 12;
                VAR_23 = 224;
                VAR_24 = 4;
                VAR_25 = 1;
                VAR_26 = 0;
                VAR_27 = 1;
                break;
            case 130:
                VAR_22 = 11;
                VAR_23 = 224;
                VAR_24 = 4;
                VAR_25 = 1;
                VAR_26 = 0;
                VAR_27 = 1;
                break;
            default:
                VAR_22 = 12;
                VAR_23 = 224;
                VAR_24 = 4;
                VAR_25 = 0;
                VAR_26 = 0;
                VAR_27 = 0;
                break;
        }
        FUNC_0(VAR_9, VAR_11, VAR_2);
        FUNC_0(VAR_9, VAR_10, VAR_0);
    } else {

        FUNC_1(VAR_16, VAR_15, VAR_7);
        FUNC_2(VAR_4);

        switch (VAR_20) {
            case 128:
                VAR_22 = 0;
                VAR_23 = 28;
                VAR_24 = 0;
                VAR_25 = 0;
                VAR_26 = 6;
                VAR_27 = 3;
                break;
            case 129:
                VAR_22 = 12;
                VAR_23 = 144;
                VAR_24 = 4;
                VAR_25 = 1;
                VAR_26 = 0;
                VAR_27 = 1;
                break;
            case 130:
                VAR_22 = 11;
                VAR_23 = 144;
                VAR_24 = 4;
                VAR_25 = 1;
                VAR_26 = 0;
                VAR_27 = 1;
                break;
            default:
                VAR_22 = 12;
                VAR_23 = 224;
                VAR_24 = 4;
                VAR_25 = 0;
                VAR_26 = 0;
                VAR_27 = 0;
                break;
        }
        FUNC_0(VAR_9, VAR_11, VAR_3);
        FUNC_0(VAR_9, VAR_10, VAR_1);
    }

    uint8_t VAR_28 = (VAR_25 << 7) | (VAR_24 << 4) | (VAR_22);
    uint8_t VAR_29 = VAR_23;
    uint8_t VAR_30 = (VAR_27 << 6) | VAR_26;
    FUNC_0(VAR_9, VAR_14, VAR_28);
    FUNC_0(VAR_9, VAR_13, VAR_29);
    FUNC_0(VAR_9, VAR_12, VAR_30);
    uint32_t VAR_31 = (FUNC_3() == VAR_18) ?
            VAR_5 : VAR_6;
    FUNC_2(VAR_31);
    VAR_19 = VAR_21;
}
