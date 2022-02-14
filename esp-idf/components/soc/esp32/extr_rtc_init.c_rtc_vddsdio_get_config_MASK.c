
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
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
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

rtc_vddsdio_config_t FUNC_3(void)
{
    rtc_vddsdio_config_t VAR_29;
    uint32_t VAR_30 = FUNC_2(VAR_21);
    VAR_29.drefh = (VAR_30 & VAR_15) >> VAR_16;
    VAR_29.drefm = (VAR_30 & VAR_19) >> VAR_20;
    VAR_29.drefl = (VAR_30 & VAR_17) >> VAR_18;
    if (VAR_30 & VAR_22) {

        VAR_29.force = 1;
        VAR_29.enable = (VAR_30 & VAR_25) >> VAR_26;
        VAR_29.tieh = (VAR_30 & VAR_23) >> VAR_24;
        return VAR_29;
    }
    uint32_t VAR_31 = FUNC_2(VAR_1);
    if (VAR_31 & VAR_9) {

        VAR_29.force = 0;
        VAR_29.enable = (VAR_31 & VAR_12) >> VAR_13;
        VAR_29.tieh = (VAR_31 & VAR_10) >> VAR_11;


        if(FUNC_1(VAR_0 ,VAR_2) == 0){


            VAR_29.drefh = (VAR_31 & VAR_3) >> VAR_4;
            VAR_29.drefm = (VAR_31 & VAR_7) >> VAR_8;
            VAR_29.drefl = (VAR_31 & VAR_5) >> VAR_6;
        }
        return VAR_29;
    }


    uint32_t VAR_32 = FUNC_2(VAR_14);
    VAR_29.force = 0;
    VAR_29.tieh = (VAR_32 & FUNC_0(5)) ? VAR_27 : VAR_28;
    VAR_29.enable = 1;
    return VAR_29;
}
