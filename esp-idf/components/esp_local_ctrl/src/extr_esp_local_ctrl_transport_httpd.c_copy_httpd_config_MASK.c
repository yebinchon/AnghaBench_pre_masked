
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int httpd_ssl_config_t ;
struct TYPE_4__ {int httpd; } ;
typedef TYPE_1__ esp_local_ctrl_transport_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_3(esp_local_ctrl_transport_config_t *VAR_4, const esp_local_ctrl_transport_config_t *VAR_5)
{
    if (!VAR_4 || !VAR_5 || !VAR_5->httpd) {
        FUNC_0(VAR_3, "NULL configuration provided");
        return VAR_0;
    }

    VAR_4->httpd = FUNC_1(1, sizeof(httpd_ssl_config_t));
    if (!VAR_4->httpd) {
        FUNC_0(VAR_3, "Failed to allocate memory for HTTPD transport config");
        return VAR_1;
    }
    FUNC_2(VAR_4->httpd,
           VAR_5->httpd,
           sizeof(httpd_ssl_config_t));
    return VAR_2;
}
