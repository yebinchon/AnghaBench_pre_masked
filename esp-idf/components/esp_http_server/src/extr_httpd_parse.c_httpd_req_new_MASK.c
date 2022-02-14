
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sock_db {int ignore_sess_ctx_changes; int free_ctx; int ctx; } ;
struct httpd_req_aux {char* status; char* content_type; int first_chunk_sent; struct sock_db* sd; } ;
struct TYPE_4__ {int ignore_sess_ctx_changes; int free_ctx; int sess_ctx; struct httpd_req_aux* aux; struct httpd_data* handle; } ;
struct httpd_data {struct httpd_req_aux hd_req_aux; int config; TYPE_1__ hd_req; } ;
typedef TYPE_1__ httpd_req_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct httpd_data*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (struct httpd_req_aux*,int *) ;

esp_err_t FUNC_4(struct httpd_data *VAR_3, struct sock_db *VAR_4)
{
    httpd_req_t *VAR_5 = &VAR_3->hd_req;
    FUNC_2(VAR_5, &VAR_3->config);
    FUNC_3(&VAR_3->hd_req_aux, &VAR_3->config);
    VAR_5->handle = VAR_3;
    VAR_5->aux = &VAR_3->hd_req_aux;

    struct httpd_req_aux *VAR_6 = VAR_5->aux;
    VAR_6->sd = VAR_4;

    VAR_6->status = (char *)VAR_1;
    VAR_6->content_type = (char *)VAR_2;
    VAR_6->first_chunk_sent = 0;

    VAR_5->sess_ctx = VAR_4->ctx;
    VAR_5->free_ctx = VAR_4->free_ctx;
    VAR_5->ignore_sess_ctx_changes = VAR_4->ignore_sess_ctx_changes;

    esp_err_t VAR_7 = FUNC_0(VAR_3);
    if (VAR_7 != VAR_0) {
        FUNC_1(VAR_5);
    }
    return VAR_7;
}
