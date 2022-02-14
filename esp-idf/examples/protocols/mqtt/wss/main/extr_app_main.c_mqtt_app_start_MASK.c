
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_mqtt_client_handle_t ;
struct TYPE_3__ {char const* cert_pem; int uri; } ;
typedef TYPE_1__ esp_mqtt_client_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(void)
{
    const esp_mqtt_client_config_t VAR_5 = {
        .uri = VAR_0,
        .cert_pem = (const char *)VAR_3,
    };

    FUNC_0(VAR_2, "[APP] Free memory: %d bytes", FUNC_1());
    esp_mqtt_client_handle_t VAR_6 = FUNC_2(&VAR_5);
    FUNC_3(VAR_6, VAR_1, VAR_4, VAR_6);

    FUNC_4(VAR_6);
}
