
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_http_client_handle_t ;
struct TYPE_3__ {char* url; int is_async; int timeout_ms; int event_handler; } ;
typedef TYPE_1__ esp_http_client_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char const*,int ) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static void FUNC_11(void)
{
    esp_http_client_config_t VAR_5 = {
        .url = "https://postman-echo.com/post",
        .event_handler = VAR_4,
        .is_async = 1,
        .timeout_ms = 5000,
    };
    esp_http_client_handle_t VAR_6 = FUNC_6(&VAR_5);
    esp_err_t VAR_7;
    const char *VAR_8 = "Using a Palantír requires a person with great strength of will and wisdom. The Palantíri were meant to "
                            "be used by the Dúnedain to communicate throughout the Realms in Exile. During the War of the Ring, "
                            "the Palantíri were used by many individuals. Sauron used the Ithil-stone to take advantage of the users "
                            "of the other two stones, the Orthanc-stone and Anor-stone, but was also susceptible to deception himself.";
    FUNC_8(VAR_6, VAR_2);
    FUNC_9(VAR_6, VAR_8, FUNC_10(VAR_8));
    while (1) {
        VAR_7 = FUNC_7(VAR_6);
        if (VAR_7 != VAR_0) {
            break;
        }
    }
    if (VAR_7 == VAR_1) {
        FUNC_1(VAR_3, "HTTPS Status = %d, content_length = %d",
                FUNC_5(VAR_6),
                FUNC_4(VAR_6));
    } else {
        FUNC_0(VAR_3, "Error perform http request %s", FUNC_2(VAR_7));
    }
    FUNC_3(VAR_6);
}
