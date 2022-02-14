
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_mqtt_client_handle_t ;
struct TYPE_3__ {int uri; } ;
typedef TYPE_1__ esp_mqtt_client_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
    const esp_mqtt_client_config_t VAR_3 = {
        .uri = VAR_0,
    };

    esp_mqtt_client_handle_t VAR_4 = FUNC_0(&VAR_3);
    FUNC_1(VAR_4, VAR_1, VAR_2, VAR_4);
    FUNC_2(VAR_4);
}
