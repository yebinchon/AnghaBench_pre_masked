
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_req_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static esp_err_t FUNC_2(httpd_req_t *VAR_1)
{
    FUNC_1(VAR_1, "text/html");
    FUNC_0(VAR_1, "<h1>Hello Secure World!</h1>", -1);

    return VAR_0;
}
