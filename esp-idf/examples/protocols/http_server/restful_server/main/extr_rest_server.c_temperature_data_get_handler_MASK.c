
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_req_t ;
typedef int esp_err_t ;
typedef int cJSON ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static esp_err_t FUNC_8(httpd_req_t *VAR_1)
{
    FUNC_7(VAR_1, "application/json");
    cJSON *VAR_2 = FUNC_1();
    FUNC_0(VAR_2, "raw", FUNC_4() % 20);
    const char *VAR_3 = FUNC_3(VAR_2);
    FUNC_6(VAR_1, VAR_3);
    FUNC_5((void *)VAR_3);
    FUNC_2(VAR_2);
    return VAR_0;
}
