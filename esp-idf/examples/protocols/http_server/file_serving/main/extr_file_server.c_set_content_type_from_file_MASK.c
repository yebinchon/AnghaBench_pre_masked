
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_req_t ;
typedef int esp_err_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static esp_err_t FUNC_2(httpd_req_t *VAR_0, const char *VAR_1)
{
    if (FUNC_0(VAR_1, ".pdf")) {
        return FUNC_1(VAR_0, "application/pdf");
    } else if (FUNC_0(VAR_1, ".html")) {
        return FUNC_1(VAR_0, "text/html");
    } else if (FUNC_0(VAR_1, ".jpeg")) {
        return FUNC_1(VAR_0, "image/jpeg");
    } else if (FUNC_0(VAR_1, ".ico")) {
        return FUNC_1(VAR_0, "image/x-icon");
    }


    return FUNC_1(VAR_0, "text/plain");
}
