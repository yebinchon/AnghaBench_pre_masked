
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_sleep_wakeup_cause_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
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
 scalar_t__ FUNC_1 (int ) ;
 int VAR_19 ;

esp_sleep_wakeup_cause_t FUNC_2(void)
{
    if (FUNC_1(0) != VAR_0 && !VAR_19) {
        return VAR_8;
    }

    uint32_t VAR_20 = FUNC_0(VAR_10, VAR_9);
    if (VAR_20 & VAR_11) {
        return VAR_1;
    } else if (VAR_20 & VAR_12) {
        return VAR_2;
    } else if (VAR_20 & VAR_14) {
        return VAR_4;
    } else if (VAR_20 & VAR_15) {
        return VAR_5;
    } else if (VAR_20 & VAR_18) {
        return VAR_7;
    } else if (VAR_20 & VAR_13) {
        return VAR_3;
    } else if (VAR_20 & (VAR_16 | VAR_17)) {
        return VAR_6;
    } else {
        return VAR_8;
    }
}
