
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wifi_config_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int wifi_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* VAR_6 ;

esp_err_t FUNC_5(wifi_config_t *VAR_7)
{

    if (FUNC_3(VAR_4) != VAR_2) {
        FUNC_0(VAR_3, "Failed to set WiFi mode");
        return VAR_0;
    }


    if (FUNC_2(VAR_1, VAR_7) != VAR_2) {
        FUNC_0(VAR_3, "Failed to set WiFi configuration");
        return VAR_0;
    }

    if (FUNC_4() != VAR_2) {
        FUNC_0(VAR_3, "Failed to set WiFi configuration");
        return VAR_0;
    }

    if (FUNC_1() != VAR_2) {
        FUNC_0(VAR_3, "Failed to connect WiFi");
        return VAR_0;
    }

    if (VAR_6) {

        VAR_6->wifi_state = VAR_5;
    }
    return VAR_2;
}
