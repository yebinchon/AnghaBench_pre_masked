
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_http_client_handle_t ;
struct TYPE_3__ {char* url; int event_handler; } ;
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

__attribute__((used)) static void FUNC_8(void)
{
    esp_http_client_config_t VAR_3 = {
        .url = "http://user:passwd@httpbin.org/basic-auth/user/passwd",
        .event_handler = VAR_2,
    };
    esp_http_client_handle_t VAR_4 = FUNC_6(&VAR_3);
    esp_err_t VAR_5 = FUNC_7(VAR_4);

    if (VAR_5 == VAR_0) {
        FUNC_1(VAR_1, "HTTP Basic Auth redirect Status = %d, content_length = %d",
                FUNC_5(VAR_4),
                FUNC_4(VAR_4));
    } else {
        FUNC_0(VAR_1, "Error perform http request %s", FUNC_2(VAR_5));
    }
    FUNC_3(VAR_4);
}
