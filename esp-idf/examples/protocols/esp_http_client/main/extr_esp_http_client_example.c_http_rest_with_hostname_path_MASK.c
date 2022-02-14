
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_http_client_handle_t ;
struct TYPE_3__ {char* host; char* path; int event_handler; int transport_type; } ;
typedef TYPE_1__ esp_http_client_config_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char const*,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static void FUNC_12(void)
{
    esp_http_client_config_t VAR_9 = {
        .host = "httpbin.org",
        .path = "/get",
        .transport_type = VAR_6,
        .event_handler = VAR_8,
    };
    esp_http_client_handle_t VAR_10 = FUNC_6(&VAR_9);


    esp_err_t VAR_11 = FUNC_7(VAR_10);
    if (VAR_11 == VAR_0) {
        FUNC_1(VAR_7, "HTTP GET Status = %d, content_length = %d",
                FUNC_5(VAR_10),
                FUNC_4(VAR_10));
    } else {
        FUNC_0(VAR_7, "HTTP GET request failed: %s", FUNC_2(VAR_11));
    }


    const char *VAR_12 = "field1=value1&field2=value2";
    FUNC_10(VAR_10, "/post");
    FUNC_8(VAR_10, VAR_4);
    FUNC_9(VAR_10, VAR_12, FUNC_11(VAR_12));
    VAR_11 = FUNC_7(VAR_10);
    if (VAR_11 == VAR_0) {
        FUNC_1(VAR_7, "HTTP POST Status = %d, content_length = %d",
                FUNC_5(VAR_10),
                FUNC_4(VAR_10));
    } else {
        FUNC_0(VAR_7, "HTTP POST request failed: %s", FUNC_2(VAR_11));
    }


    FUNC_10(VAR_10, "/put");
    FUNC_8(VAR_10, VAR_5);
    VAR_11 = FUNC_7(VAR_10);
    if (VAR_11 == VAR_0) {
        FUNC_1(VAR_7, "HTTP PUT Status = %d, content_length = %d",
                FUNC_5(VAR_10),
                FUNC_4(VAR_10));
    } else {
        FUNC_0(VAR_7, "HTTP PUT request failed: %s", FUNC_2(VAR_11));
    }


    FUNC_10(VAR_10, "/patch");
    FUNC_8(VAR_10, VAR_3);
    FUNC_9(VAR_10, ((void*)0), 0);
    VAR_11 = FUNC_7(VAR_10);
    if (VAR_11 == VAR_0) {
        FUNC_1(VAR_7, "HTTP PATCH Status = %d, content_length = %d",
                FUNC_5(VAR_10),
                FUNC_4(VAR_10));
    } else {
        FUNC_0(VAR_7, "HTTP PATCH request failed: %s", FUNC_2(VAR_11));
    }


    FUNC_10(VAR_10, "/delete");
    FUNC_8(VAR_10, VAR_1);
    VAR_11 = FUNC_7(VAR_10);
    if (VAR_11 == VAR_0) {
        FUNC_1(VAR_7, "HTTP DELETE Status = %d, content_length = %d",
                FUNC_5(VAR_10),
                FUNC_4(VAR_10));
    } else {
        FUNC_0(VAR_7, "HTTP DELETE request failed: %s", FUNC_2(VAR_11));
    }


    FUNC_10(VAR_10, "/get");
    FUNC_8(VAR_10, VAR_2);
    VAR_11 = FUNC_7(VAR_10);
    if (VAR_11 == VAR_0) {
        FUNC_1(VAR_7, "HTTP HEAD Status = %d, content_length = %d",
                FUNC_5(VAR_10),
                FUNC_4(VAR_10));
    } else {
        FUNC_0(VAR_7, "HTTP HEAD request failed: %s", FUNC_2(VAR_11));
    }

    FUNC_3(VAR_10);
}
