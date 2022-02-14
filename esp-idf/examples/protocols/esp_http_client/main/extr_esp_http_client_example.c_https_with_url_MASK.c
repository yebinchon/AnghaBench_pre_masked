
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_http_client_handle_t ;
struct TYPE_3__ {char* url; int cert_pem; int event_handler; } ;
typedef TYPE_1__ esp_http_client_config_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(void)
{
    esp_http_client_config_t VAR_4 = {
        .url = "https://www.howsmyssl.com",
        .event_handler = VAR_2,
        .cert_pem = VAR_3,
    };
    esp_http_client_handle_t VAR_5 = FUNC_6(&VAR_4);
    esp_err_t VAR_6 = FUNC_7(VAR_5);

    if (VAR_6 == VAR_0) {
        FUNC_1(VAR_1, "HTTPS Status = %d, content_length = %d",
                FUNC_5(VAR_5),
                FUNC_4(VAR_5));
    } else {
        FUNC_0(VAR_1, "Error perform http request %s", FUNC_2(VAR_6));
    }
    FUNC_3(VAR_5);
}
