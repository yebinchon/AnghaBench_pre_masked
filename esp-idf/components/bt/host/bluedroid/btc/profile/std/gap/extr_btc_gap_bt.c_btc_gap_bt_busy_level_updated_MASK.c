
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int state; } ;
struct TYPE_5__ {TYPE_1__ disc_st_chg; } ;
typedef TYPE_2__ esp_bt_gap_cb_param_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_6 ;

void FUNC_1(uint8_t VAR_7)
{
    esp_bt_gap_cb_param_t VAR_8;

    if (VAR_7 == VAR_2) {
        VAR_8.disc_st_chg.state = VAR_3;
        FUNC_0(VAR_5, &VAR_8);
        VAR_6 = 1;
    } else if (VAR_7 == VAR_0 ||
               VAR_7 == VAR_1) {
        VAR_8.disc_st_chg.state = VAR_4;
        FUNC_0(VAR_5, &VAR_8);
        VAR_6 = 0;
    }
}
