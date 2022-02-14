
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock_db {int dummy; } ;
struct resp_hdr {int dummy; } ;
struct httpd_req_aux {struct httpd_data* resp_hdrs; } ;
struct TYPE_3__ {int max_uri_handlers; int max_open_sockets; int max_resp_headers; } ;
struct httpd_data {TYPE_1__ config; struct httpd_data* hd_calls; struct httpd_data* hd_sd; void* err_handler_fns; struct httpd_req_aux hd_req_aux; } ;
typedef int httpd_uri_t ;
typedef int httpd_err_handler_func_t ;
typedef TYPE_1__ httpd_config_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (struct httpd_data*) ;

__attribute__((used)) static struct httpd_data *FUNC_4(const httpd_config_t *VAR_2)
{

    struct httpd_data *VAR_3 = FUNC_2(1, sizeof(struct httpd_data));
    if (!VAR_3) {
        FUNC_0(VAR_1, FUNC_1("Failed to allocate memory for HTTP server instance"));
        return ((void*)0);
    }
    VAR_3->hd_calls = FUNC_2(VAR_2->max_uri_handlers, sizeof(httpd_uri_t *));
    if (!VAR_3->hd_calls) {
        FUNC_0(VAR_1, FUNC_1("Failed to allocate memory for HTTP URI handlers"));
        FUNC_3(VAR_3);
        return ((void*)0);
    }
    VAR_3->hd_sd = FUNC_2(VAR_2->max_open_sockets, sizeof(struct sock_db));
    if (!VAR_3->hd_sd) {
        FUNC_0(VAR_1, FUNC_1("Failed to allocate memory for HTTP session data"));
        FUNC_3(VAR_3->hd_calls);
        FUNC_3(VAR_3);
        return ((void*)0);
    }
    struct httpd_req_aux *VAR_4 = &VAR_3->hd_req_aux;
    VAR_4->resp_hdrs = FUNC_2(VAR_2->max_resp_headers, sizeof(struct resp_hdr));
    if (!VAR_4->resp_hdrs) {
        FUNC_0(VAR_1, FUNC_1("Failed to allocate memory for HTTP response headers"));
        FUNC_3(VAR_3->hd_sd);
        FUNC_3(VAR_3->hd_calls);
        FUNC_3(VAR_3);
        return ((void*)0);
    }
    VAR_3->err_handler_fns = FUNC_2(VAR_0, sizeof(httpd_err_handler_func_t));
    if (!VAR_3->err_handler_fns) {
        FUNC_0(VAR_1, FUNC_1("Failed to allocate memory for HTTP error handlers"));
        FUNC_3(VAR_4->resp_hdrs);
        FUNC_3(VAR_3->hd_sd);
        FUNC_3(VAR_3->hd_calls);
        FUNC_3(VAR_3);
        return ((void*)0);
    }

    VAR_3->config = *VAR_2;
    return VAR_3;
}
