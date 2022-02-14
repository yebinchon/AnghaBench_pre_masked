
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_db {int dummy; } ;
typedef int httpd_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct sock_db*) ;
 int VAR_1 ;
 struct sock_db* FUNC_1 (int ,int) ;

esp_err_t FUNC_2(httpd_handle_t VAR_2, int VAR_3)
{
    struct sock_db *VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (VAR_4) {
        return FUNC_0(VAR_2, VAR_1, VAR_4);
    }

    return VAR_0;
}
