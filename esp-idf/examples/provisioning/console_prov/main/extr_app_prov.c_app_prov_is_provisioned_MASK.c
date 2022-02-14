
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ password; scalar_t__ ssid; } ;
struct TYPE_5__ {TYPE_1__ sta; } ;
typedef TYPE_2__ wifi_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*) ;

esp_err_t FUNC_4(bool *VAR_4)
{
    *VAR_4 = 0;






    wifi_config_t VAR_5;
    if (FUNC_1(VAR_1, &VAR_5) != VAR_2) {
        return VAR_0;
    }

    if (FUNC_3((const char*) VAR_5.sta.ssid)) {
        *VAR_4 = 1;
        FUNC_0(VAR_3, "Found ssid %s", (const char*) VAR_5.sta.ssid);
        FUNC_0(VAR_3, "Found password %s", (const char*) VAR_5.sta.password);
    }
    return VAR_2;
}
