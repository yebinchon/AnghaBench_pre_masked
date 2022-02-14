
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* apply_config_handler ) (int *) ;int ctx; } ;
typedef TYPE_1__ wifi_prov_config_handlers_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {TYPE_3__* resp_apply_config; int payload_case; } ;
typedef TYPE_2__ WiFiConfigPayload ;
struct TYPE_9__ {int status; } ;
typedef TYPE_3__ RespApplyConfig ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static esp_err_t FUNC_5(WiFiConfigPayload *VAR_7,
                                          WiFiConfigPayload *VAR_8, void *VAR_9)
{
    FUNC_0(VAR_5, "Enter cmd_apply_config_handler");
    wifi_prov_config_handlers_t *VAR_10 = (wifi_prov_config_handlers_t *) VAR_9;
    if (!VAR_10) {
        FUNC_1(VAR_5, "Command invoked without handlers");
        return VAR_0;
    }

    RespApplyConfig *VAR_11 = (RespApplyConfig *) FUNC_2(sizeof(RespApplyConfig));
    if (!VAR_11) {
        FUNC_1(VAR_5, "Error allocating memory");
        return VAR_1;
    }

    FUNC_3(VAR_11);

    if (VAR_10->apply_config_handler(&VAR_10->ctx) == VAR_2) {
        VAR_11->status = VAR_4;
    } else {
        VAR_11->status = VAR_3;
    }

    VAR_8->payload_case = VAR_6;
    VAR_8->resp_apply_config = VAR_11;
    return VAR_2;
}
