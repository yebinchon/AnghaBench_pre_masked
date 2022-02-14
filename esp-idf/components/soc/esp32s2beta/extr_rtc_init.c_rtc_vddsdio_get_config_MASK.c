
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int drefh; int drefm; int drefl; int force; int enable; int tieh; } ;
typedef TYPE_1__ rtc_vddsdio_config_t ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int ) ;
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

rtc_vddsdio_config_t FUNC_2(void)
{
    rtc_vddsdio_config_t VAR_28;
    uint32_t VAR_29 = FUNC_1(VAR_20);
    VAR_28.drefh = (VAR_29 & VAR_14) >> VAR_15;
    VAR_28.drefm = (VAR_29 & VAR_18) >> VAR_19;
    VAR_28.drefl = (VAR_29 & VAR_16) >> VAR_17;
    if (VAR_29 & VAR_21) {

        VAR_28.force = 1;
        VAR_28.enable = (VAR_29 & VAR_24) >> VAR_25;
        VAR_28.tieh = (VAR_29 & VAR_22) >> VAR_23;
        return VAR_28;
    } else {
        VAR_28.force = 0;
    }
    uint32_t VAR_30 = FUNC_1(VAR_1);
    if (VAR_30 & VAR_8) {

        VAR_28.enable = (VAR_30 & VAR_11) >> VAR_12;
        VAR_28.tieh = (VAR_30 & VAR_9) >> VAR_10;

        VAR_28.drefm = (VAR_30 & VAR_6) >> VAR_7;
        VAR_28.drefl = (VAR_30 & VAR_4) >> VAR_5;

        VAR_30 = FUNC_1(VAR_0);
        VAR_28.drefh = (VAR_30 & VAR_2) >> VAR_3;

        return VAR_28;
    }


    uint32_t VAR_31 = FUNC_1(VAR_13);
    VAR_28.tieh = (VAR_31 & FUNC_0(5)) ? VAR_26 : VAR_27;
    VAR_28.enable = 1;
    return VAR_28;
}
