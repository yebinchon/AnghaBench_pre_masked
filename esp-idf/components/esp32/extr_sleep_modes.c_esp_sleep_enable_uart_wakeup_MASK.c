
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_2__ {int wakeup_triggers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

esp_err_t FUNC_0(int VAR_7)
{
    if (VAR_7 == VAR_4) {
        VAR_6.wakeup_triggers |= VAR_2;
    } else if (VAR_7 == VAR_5) {
        VAR_6.wakeup_triggers |= VAR_3;
    } else {
        return VAR_0;
    }

    return VAR_1;
}
