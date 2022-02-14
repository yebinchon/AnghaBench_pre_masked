
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * param; scalar_t__ fn; } ;
typedef TYPE_1__ wifi_wpa2_param_t ;
typedef scalar_t__ wifi_wpa2_fn_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;

esp_err_t FUNC_6(void)
{
    wifi_wpa2_param_t VAR_5;
    esp_err_t VAR_6;

    FUNC_1();

    if (FUNC_3()) {
        FUNC_5(VAR_2, "WPA2: already enabled");
        FUNC_2();
        return VAR_0;
    }

    VAR_5.fn = (wifi_wpa2_fn_t)VAR_4;
    VAR_5.param = ((void*)0);

    VAR_6 = FUNC_0(&VAR_5);

    if (VAR_0 == VAR_6) {
        FUNC_4(VAR_3);
    } else {
        FUNC_5(VAR_1, "failed to enable wpa2 ret=%d", VAR_6);
    }

    FUNC_2();

    return VAR_6;
}
