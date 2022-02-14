
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int httpd_req_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int cores; } ;
typedef TYPE_1__ esp_chip_info_t ;
typedef int cJSON ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char*) ;

__attribute__((used)) static esp_err_t FUNC_9(httpd_req_t *VAR_2)
{
    FUNC_8(VAR_2, "application/json");
    cJSON *VAR_3 = FUNC_2();
    esp_chip_info_t VAR_4;
    FUNC_5(&VAR_4);
    FUNC_1(VAR_3, "version", VAR_1);
    FUNC_0(VAR_3, "cores", VAR_4.cores);
    const char *VAR_5 = FUNC_4(VAR_3);
    FUNC_7(VAR_2, VAR_5);
    FUNC_6((void *)VAR_5);
    FUNC_3(VAR_3);
    return VAR_0;
}
