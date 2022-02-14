
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_sleep_pd_option_t ;
typedef size_t esp_sleep_pd_domain_t ;
typedef int esp_err_t ;
struct TYPE_2__ {scalar_t__* pd_options; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

esp_err_t FUNC_0(esp_sleep_pd_domain_t VAR_5,
                                   esp_sleep_pd_option_t VAR_6)
{
    if (VAR_5 >= VAR_2 || VAR_6 > VAR_3) {
        return VAR_0;
    }
    VAR_4.pd_options[VAR_5] = VAR_6;
    return VAR_1;
}
