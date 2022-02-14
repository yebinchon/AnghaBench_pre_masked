
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_db {int lru_counter; } ;
struct httpd_data {int dummy; } ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct httpd_data*) ;
 scalar_t__ FUNC_3 (struct httpd_data*,struct sock_db*) ;
 struct sock_db* FUNC_4 (struct httpd_data*,int) ;
 int FUNC_5 () ;

esp_err_t FUNC_6(struct httpd_data *VAR_3, int VAR_4)
{
    struct sock_db *VAR_5 = FUNC_4(VAR_3, VAR_4);
    if (! VAR_5) {
        return VAR_0;
    }

    FUNC_0(VAR_2, FUNC_1("httpd_req_new"));
    if (FUNC_3(VAR_3, VAR_5) != VAR_1) {
        return VAR_0;
    }
    FUNC_0(VAR_2, FUNC_1("httpd_req_delete"));
    if (FUNC_2(VAR_3) != VAR_1) {
        return VAR_0;
    }
    FUNC_0(VAR_2, FUNC_1("success"));
    VAR_5->lru_counter = FUNC_5();
    return VAR_1;
}
