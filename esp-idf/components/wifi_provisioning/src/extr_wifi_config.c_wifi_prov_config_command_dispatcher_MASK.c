
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_7__ {int msg; } ;
typedef TYPE_1__ WiFiConfigPayload ;
struct TYPE_8__ {scalar_t__ (* command_handler ) (TYPE_1__*,TYPE_1__*,void*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*,void*) ;

__attribute__((used)) static esp_err_t FUNC_4(WiFiConfigPayload *VAR_4,
                                                     WiFiConfigPayload *VAR_5, void *VAR_6)
{
    esp_err_t VAR_7;

    FUNC_0(VAR_2, "In wifi_prov_config_command_dispatcher Cmd=%d", VAR_4->msg);

    int VAR_8 = FUNC_2(VAR_4->msg);
    if (VAR_8 < 0) {
        FUNC_1(VAR_2, "Invalid command handler lookup");
        return VAR_0;
    }

    VAR_7 = VAR_3[VAR_8].command_handler(VAR_4, VAR_5, VAR_6);
    if (VAR_7 != VAR_1) {
        FUNC_1(VAR_2, "Error executing command handler");
        return VAR_0;
    }

    return VAR_1;
}
