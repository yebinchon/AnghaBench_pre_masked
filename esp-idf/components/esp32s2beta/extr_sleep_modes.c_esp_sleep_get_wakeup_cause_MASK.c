
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
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;

esp_sleep_wakeup_cause_t FUNC_2(void)
{
    if (FUNC_1(0) != VAR_0) {
        return VAR_6;
    }

    uint32_t VAR_14 = FUNC_0(VAR_8, VAR_7);
    if (VAR_14 & VAR_9) {
        return VAR_1;
    } else if (VAR_14 & VAR_10) {
        return VAR_2;
    } else if (VAR_14 & VAR_11) {
        return VAR_3;
    } else if (VAR_14 & VAR_12) {
        return VAR_4;
    } else if (VAR_14 & VAR_13) {
        return VAR_5;
    } else {
        return VAR_6;
    }
}
