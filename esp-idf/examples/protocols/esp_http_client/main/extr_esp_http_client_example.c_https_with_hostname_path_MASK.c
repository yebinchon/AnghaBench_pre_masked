
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_http_client_handle_t ;
struct TYPE_3__ {char* host; char* path; int cert_pem; int event_handler; int transport_type; } ;
typedef TYPE_1__ esp_http_client_config_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(void)
{
    esp_http_client_config_t VAR_5 = {
        .host = "www.howsmyssl.com",
        .path = "/",
        .transport_type = VAR_1,
        .event_handler = VAR_3,
        .cert_pem = VAR_4,
    };
    esp_http_client_handle_t VAR_6 = FUNC_6(&VAR_5);
    esp_err_t VAR_7 = FUNC_7(VAR_6);

    if (VAR_7 == VAR_0) {
        FUNC_1(VAR_2, "HTTPS Status = %d, content_length = %d",
                FUNC_5(VAR_6),
                FUNC_4(VAR_6));
    } else {
        FUNC_0(VAR_2, "Error perform http request %s", FUNC_2(VAR_7));
    }
    FUNC_3(VAR_6);
}
