
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* cert_pem; int event_handle; } ;
typedef TYPE_1__ esp_mqtt_client_config_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__ const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
    VAR_3 = FUNC_3();
    const esp_mqtt_client_config_t VAR_5 = {
        .event_handle = VAR_4,
        .cert_pem = (const char *)VAR_2,
    };

    FUNC_0(VAR_0, "[APP] Free memory: %d bytes", FUNC_1());
    VAR_1 = FUNC_2(&VAR_5);
}
