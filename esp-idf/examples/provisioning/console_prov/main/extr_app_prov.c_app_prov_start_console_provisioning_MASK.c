
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct app_prov_data {int security; int timer; int const* pop; } ;
typedef int protocomm_security_pop_t ;
struct TYPE_3__ {char* name; int dispatch_method; int * arg; int callback; } ;
typedef TYPE_1__ esp_timer_create_args_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 struct app_prov_data* VAR_11 ;

esp_err_t FUNC_6(int VAR_12, const protocomm_security_pop_t *VAR_13)
{


    if (VAR_11) {
        FUNC_1(VAR_7, "Invalid provisioning state");
        return VAR_2;
    }


    VAR_11 = (struct app_prov_data *) FUNC_3(1, sizeof(struct app_prov_data));
    if (!VAR_11) {
        FUNC_1(VAR_7, "Unable to allocate prov data");
        return VAR_0;
    }


    VAR_11->pop = VAR_13;
    VAR_11->security = VAR_12;


    esp_timer_create_args_t VAR_14 = {
        .callback = VAR_9,
        .arg = ((void*)0),
        .dispatch_method = VAR_4,
        .name = "stop_console_tm"
    };
    esp_err_t VAR_15 = FUNC_5(&VAR_14, &VAR_11->timer);
    if (VAR_15 != VAR_3) {
        FUNC_0(VAR_7, "Failed to create timer");
        return VAR_15;
    }

    VAR_15 = FUNC_4(VAR_8, VAR_1, VAR_10, ((void*)0));
    if (VAR_15 != VAR_3) {
        FUNC_0(VAR_7, "Failed to register WiFi event handler");
        return VAR_15;
    }

    VAR_15 = FUNC_4(VAR_5, VAR_6, VAR_10, ((void*)0));
    if (VAR_15 != VAR_3) {
        FUNC_0(VAR_7, "Failed to register IP event handler");
        return VAR_15;
    }


    VAR_15 = FUNC_2();
    if (VAR_15 != VAR_3) {
        FUNC_0(VAR_7, "Provisioning failed to start");
        return VAR_15;
    }

    FUNC_1(VAR_7, "Console provisioning started");
    return VAR_3;
}
