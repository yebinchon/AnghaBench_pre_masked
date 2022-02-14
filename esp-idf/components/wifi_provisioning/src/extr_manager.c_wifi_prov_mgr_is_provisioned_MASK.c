
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ssid; } ;
struct TYPE_4__ {TYPE_3__ sta; } ;
typedef TYPE_1__ wifi_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__,char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char const*) ;

esp_err_t FUNC_4(bool *VAR_7)
{
    if (!VAR_7) {
        return VAR_0;
    }

    *VAR_7 = 0;

    if (!VAR_6) {
        FUNC_0(VAR_5, "Provisioning manager not initialized");
        return VAR_1;
    }


    wifi_config_t VAR_8;
    if (FUNC_2(VAR_3, &VAR_8) != VAR_4) {
        return VAR_2;
    }

    if (FUNC_3((const char *) VAR_8.sta.ssid)) {
        *VAR_7 = 1;
        FUNC_1(VAR_8.sta, "Found");
    }
    return VAR_4;
}
