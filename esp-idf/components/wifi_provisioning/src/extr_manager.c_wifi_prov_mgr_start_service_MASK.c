
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* set_config_service ) (int ,char const*,char const*) ;scalar_t__ (* prov_start ) (int *,int ) ;int (* prov_stop ) (int *) ;} ;
typedef TYPE_2__ wifi_prov_scheme_t ;
typedef int wifi_prov_scan_handlers_t ;
typedef int wifi_prov_config_handlers_t ;
typedef scalar_t__ esp_err_t ;
typedef int cJSON ;
struct TYPE_4__ {TYPE_2__ scheme; } ;
struct TYPE_6__ {int security; char* wifi_prov_handlers; char* wifi_scan_handlers; int * pc; int pop; int prov_scheme_config; TYPE_1__ mgr_config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,char const*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 void* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *,char*,int ,char*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 () ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_14 (int *,char*,int *,int *) ;
 scalar_t__ FUNC_15 (int *,char*,char*) ;
 TYPE_3__* VAR_11 ;
 scalar_t__ FUNC_16 (int ,char const*,char const*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int VAR_12 ;
 int * FUNC_26 () ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static esp_err_t FUNC_27(const char *VAR_15, const char *VAR_16)
{
    const wifi_prov_scheme_t *VAR_17 = &VAR_11->mgr_config.scheme;
    esp_err_t VAR_18;


    VAR_11->pc = FUNC_13();
    if (VAR_11->pc == ((void*)0)) {
        FUNC_1(VAR_7, "Failed to create new protocomm instance");
        return VAR_3;
    }

    VAR_18 = VAR_17->set_config_service(VAR_11->prov_scheme_config, VAR_15, VAR_16);
    if (VAR_18 != VAR_4) {
        FUNC_1(VAR_7, "Failed to configure service");
        FUNC_12(VAR_11->pc);
        return VAR_18;
    }


    VAR_18 = VAR_17->prov_start(VAR_11->pc, VAR_11->prov_scheme_config);
    if (VAR_18 != VAR_4) {
        FUNC_1(VAR_7, "Failed to start service");
        FUNC_12(VAR_11->pc);
        return VAR_18;
    }


    cJSON *VAR_19 = FUNC_26();
    char *VAR_20 = FUNC_4(VAR_19);
    VAR_18 = FUNC_15(VAR_11->pc, "proto-ver", VAR_20);
    FUNC_7(VAR_20);
    FUNC_3(VAR_19);
    if (VAR_18 != VAR_4) {
        FUNC_1(VAR_7, "Failed to set version endpoint");
        VAR_17->prov_stop(VAR_11->pc);
        FUNC_12(VAR_11->pc);
        return VAR_18;
    }


    if (VAR_11->security == 0) {
        VAR_18 = FUNC_14(VAR_11->pc, "prov-session",
                                     &VAR_9, ((void*)0));
    } else if (VAR_11->security == 1) {
        VAR_18 = FUNC_14(VAR_11->pc, "prov-session",
                                     &VAR_10, &VAR_11->pop);
    } else {
        FUNC_1(VAR_7, "Unsupported protocomm security version %d", VAR_11->security);
        VAR_18 = VAR_0;
    }
    if (VAR_18 != VAR_4) {
        FUNC_1(VAR_7, "Failed to set security endpoint");
        VAR_17->prov_stop(VAR_11->pc);
        FUNC_12(VAR_11->pc);
        return VAR_18;
    }

    VAR_11->wifi_prov_handlers = FUNC_10(sizeof(wifi_prov_config_handlers_t));
    VAR_18 = FUNC_8(VAR_11->wifi_prov_handlers);
    if (VAR_18 != VAR_4) {
        FUNC_0(VAR_7, "Failed to allocate memory for provisioning handlers");
        VAR_17->prov_stop(VAR_11->pc);
        FUNC_12(VAR_11->pc);
        return VAR_1;
    }


    VAR_18 = FUNC_11(VAR_11->pc, "prov-config",
                                 VAR_12,
                                 VAR_11->wifi_prov_handlers);
    if (VAR_18 != VAR_4) {
        FUNC_1(VAR_7, "Failed to set provisioning endpoint");
        FUNC_7(VAR_11->wifi_prov_handlers);
        VAR_17->prov_stop(VAR_11->pc);
        FUNC_12(VAR_11->pc);
        return VAR_18;
    }

    VAR_11->wifi_scan_handlers = FUNC_10(sizeof(wifi_prov_scan_handlers_t));
    VAR_18 = FUNC_9(VAR_11->wifi_scan_handlers);
    if (VAR_18 != VAR_4) {
        FUNC_0(VAR_7, "Failed to allocate memory for Wi-Fi scan handlers");
        FUNC_7(VAR_11->wifi_prov_handlers);
        VAR_17->prov_stop(VAR_11->pc);
        FUNC_12(VAR_11->pc);
        return VAR_1;
    }


    VAR_18 = FUNC_11(VAR_11->pc, "prov-scan",
                                 VAR_14,
                                 VAR_11->wifi_scan_handlers);
    if (VAR_18 != VAR_4) {
        FUNC_1(VAR_7, "Failed to set Wi-Fi scan endpoint");
        FUNC_7(VAR_11->wifi_scan_handlers);
        FUNC_7(VAR_11->wifi_prov_handlers);
        VAR_17->prov_stop(VAR_11->pc);
        FUNC_12(VAR_11->pc);
        return VAR_18;
    }


    VAR_18 = FUNC_5(VAR_8, VAR_2,
                                     VAR_13, ((void*)0));
    if (VAR_18 != VAR_4) {
        FUNC_1(VAR_7, "Failed to register WiFi event handler");
        FUNC_7(VAR_11->wifi_scan_handlers);
        FUNC_7(VAR_11->wifi_prov_handlers);
        VAR_17->prov_stop(VAR_11->pc);
        FUNC_12(VAR_11->pc);
        return VAR_18;
    }

    VAR_18 = FUNC_5(VAR_5, VAR_6,
                                     VAR_13, ((void*)0));
    if (VAR_18 != VAR_4) {
        FUNC_1(VAR_7, "Failed to register IP event handler");
        FUNC_6(VAR_8, VAR_2,
                                     VAR_13);
        FUNC_7(VAR_11->wifi_scan_handlers);
        FUNC_7(VAR_11->wifi_prov_handlers);
        VAR_17->prov_stop(VAR_11->pc);
        FUNC_12(VAR_11->pc);
        return VAR_18;
    }

    FUNC_2(VAR_7, "Provisioning started with service name : %s ",
             VAR_15 ? VAR_15 : "<NULL>");
    return VAR_4;
}
