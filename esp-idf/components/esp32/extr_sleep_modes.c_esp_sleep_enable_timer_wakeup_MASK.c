
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int sleep_duration; int wakeup_triggers; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

esp_err_t FUNC_0(uint64_t VAR_3)
{
    VAR_2.wakeup_triggers |= VAR_1;
    VAR_2.sleep_duration = VAR_3;
    return VAR_0;
}
