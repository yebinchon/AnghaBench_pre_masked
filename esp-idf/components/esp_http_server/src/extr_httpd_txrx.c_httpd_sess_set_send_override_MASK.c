
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_db {int send_fn; } ;
typedef int httpd_send_func_t ;
typedef int httpd_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock_db* FUNC_0 (int ,int) ;

esp_err_t FUNC_1(httpd_handle_t VAR_2, int VAR_3, httpd_send_func_t VAR_4)
{
    struct sock_db *VAR_5 = FUNC_0(VAR_2, VAR_3);
    if (!VAR_5) {
        return VAR_0;
    }
    VAR_5->send_fn = VAR_4;
    return VAR_1;
}
