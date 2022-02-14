
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* url; char* cert_pem; int skip_cert_common_name_check; int event_handler; } ;
typedef TYPE_1__ esp_http_client_config_t ;
typedef scalar_t__ esp_err_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;

void FUNC_10(void *VAR_8)
{
    FUNC_1(VAR_3, "Starting OTA example");

    esp_http_client_config_t VAR_9 = {
        .url = VAR_0,
        .cert_pem = (char *)VAR_6,
        .event_handler = VAR_4,
    };
    esp_err_t VAR_10 = FUNC_3(&VAR_9);
    if (VAR_10 == VAR_1) {
        FUNC_4();
    } else {
        FUNC_0(VAR_3, "Firmware upgrade failed");
    }
    while (1) {
        FUNC_9(1000 / VAR_5);
    }
}
