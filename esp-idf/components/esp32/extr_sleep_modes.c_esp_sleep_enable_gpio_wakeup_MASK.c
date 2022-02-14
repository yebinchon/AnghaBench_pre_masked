
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_2__ {int wakeup_triggers; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

esp_err_t FUNC_1(void)
{
    if (VAR_6.wakeup_triggers & (VAR_3 | VAR_4)) {
        FUNC_0(VAR_5, "Conflicting wake-up triggers: touch / ULP");
        return VAR_0;
    }
    VAR_6.wakeup_triggers |= VAR_2;
    return VAR_1;
}
