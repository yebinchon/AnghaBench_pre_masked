
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_http_client_handle_t ;
struct TYPE_3__ {char* url; int event_handler; } ;
typedef TYPE_1__ esp_http_client_config_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(void)
{
    char *VAR_4 = FUNC_13(VAR_1 + 1);
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_2, "Cannot malloc http receive buffer");
        return;
    }
    esp_http_client_config_t VAR_5 = {
        .url = "http://httpbin.org/get",
        .event_handler = VAR_3,
    };
    esp_http_client_handle_t VAR_6 = FUNC_9(&VAR_5);
    esp_err_t VAR_7;
    if ((VAR_7 = FUNC_10(VAR_6, 0)) != VAR_0) {
        FUNC_1(VAR_2, "Failed to open HTTP connection: %s", FUNC_3(VAR_7));
        FUNC_12(VAR_4);
        return;
    }
    int VAR_8 = FUNC_6(VAR_6);
    int VAR_9 = 0, VAR_10;
    if (VAR_9 < VAR_8 && VAR_8 <= VAR_1) {
        VAR_10 = FUNC_11(VAR_6, VAR_4, VAR_8);
        if (VAR_10 <= 0) {
            FUNC_1(VAR_2, "Error read data");
        }
        VAR_4[VAR_10] = 0;
        FUNC_0(VAR_2, "read_len = %d", VAR_10);
    }
    FUNC_2(VAR_2, "HTTP Stream reader Status = %d, content_length = %d",
                    FUNC_8(VAR_6),
                    FUNC_7(VAR_6));
    FUNC_5(VAR_6);
    FUNC_4(VAR_6);
    FUNC_12(VAR_4);
}
