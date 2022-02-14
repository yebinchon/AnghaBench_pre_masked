
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_mqtt_client_handle_t ;
struct TYPE_3__ {int * psk_hint_key; int event_handle; int uri; } ;
typedef TYPE_1__ esp_mqtt_client_config_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    const esp_mqtt_client_config_t VAR_4 = {
        .uri = VAR_0,
        .event_handle = VAR_2,
        .psk_hint_key = &VAR_3,
    };

    FUNC_0(VAR_1, "[APP] Free memory: %d bytes", FUNC_1());
    esp_mqtt_client_handle_t VAR_5 = FUNC_2(&VAR_4);
    FUNC_3(VAR_5);
}
