
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_mqtt_client_handle_t ;
struct TYPE_3__ {char* uri; } ;
typedef TYPE_1__ esp_mqtt_client_config_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(void)
{
    esp_mqtt_client_config_t VAR_6 = {
        .uri = VAR_0,
    };
    esp_mqtt_client_handle_t VAR_7 = FUNC_2(&VAR_6);
    FUNC_3(VAR_7, VAR_1, VAR_3, VAR_7);
    FUNC_4(VAR_7);
}
