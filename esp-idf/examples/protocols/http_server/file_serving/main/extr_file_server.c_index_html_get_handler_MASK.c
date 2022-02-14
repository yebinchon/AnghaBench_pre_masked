
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_req_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static esp_err_t FUNC_3(httpd_req_t *VAR_1)
{
    FUNC_2(VAR_1, "307 Temporary Redirect");
    FUNC_1(VAR_1, "Location", "/");
    FUNC_0(VAR_1, ((void*)0), 0);
    return VAR_0;
}
