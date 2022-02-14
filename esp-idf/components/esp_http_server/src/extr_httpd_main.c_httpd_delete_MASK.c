
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpd_req_aux {struct httpd_data* resp_hdrs; } ;
struct httpd_data {struct httpd_data* hd_calls; struct httpd_data* hd_sd; struct httpd_data* err_handler_fns; struct httpd_req_aux hd_req_aux; } ;


 int FUNC_0 (struct httpd_data*) ;
 int FUNC_1 (struct httpd_data*) ;

__attribute__((used)) static void FUNC_2(struct httpd_data *VAR_0)
{
    struct httpd_req_aux *VAR_1 = &VAR_0->hd_req_aux;

    FUNC_0(VAR_0->err_handler_fns);
    FUNC_0(VAR_1->resp_hdrs);
    FUNC_0(VAR_0->hd_sd);


    FUNC_1(VAR_0);
    FUNC_0(VAR_0->hd_calls);
    FUNC_0(VAR_0);
}
