
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_mqtt_client_handle_t ;
struct TYPE_3__ {char* uri; char const* client_cert_pem; char const* client_key_pem; int event_handle; } ;
typedef TYPE_1__ esp_mqtt_client_config_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    const esp_mqtt_client_config_t VAR_4 = {
        .uri = "mqtts://test.mosquitto.org:8884",
        .event_handle = VAR_3,
        .client_cert_pem = (const char *)VAR_1,
        .client_key_pem = (const char *)VAR_2,
    };

    FUNC_0(VAR_0, "[APP] Free memory: %d bytes", FUNC_1());
    esp_mqtt_client_handle_t VAR_5 = FUNC_2(&VAR_4);
    FUNC_3(VAR_5);
}
