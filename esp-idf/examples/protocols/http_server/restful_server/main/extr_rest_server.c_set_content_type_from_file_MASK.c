
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_req_t ;
typedef int esp_err_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static esp_err_t FUNC_2(httpd_req_t *VAR_0, const char *VAR_1)
{
    const char *VAR_2 = "text/plain";
    if (FUNC_0(VAR_1, ".html")) {
        VAR_2 = "text/html";
    } else if (FUNC_0(VAR_1, ".js")) {
        VAR_2 = "application/javascript";
    } else if (FUNC_0(VAR_1, ".css")) {
        VAR_2 = "text/css";
    } else if (FUNC_0(VAR_1, ".png")) {
        VAR_2 = "image/png";
    } else if (FUNC_0(VAR_1, ".ico")) {
        VAR_2 = "image/x-icon";
    } else if (FUNC_0(VAR_1, ".svg")) {
        VAR_2 = "text/xml";
    }
    return FUNC_1(VAR_0, VAR_2);
}
