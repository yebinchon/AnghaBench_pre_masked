
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock_db {void* ctx; void* free_ctx; } ;
struct TYPE_4__ {void* sess_ctx; void* free_ctx; } ;
struct TYPE_3__ {struct sock_db* sd; } ;
struct httpd_data {TYPE_2__ hd_req; TYPE_1__ hd_req_aux; } ;
typedef scalar_t__ httpd_handle_t ;
typedef void* httpd_free_ctx_fn_t ;


 int FUNC_0 (void*,void*) ;
 struct sock_db* FUNC_1 (scalar_t__,int) ;

void FUNC_2(httpd_handle_t VAR_0, int VAR_1, void *VAR_2, httpd_free_ctx_fn_t VAR_3)
{
    struct sock_db *VAR_4 = FUNC_1(VAR_0, VAR_1);
    if (VAR_4 == ((void*)0)) {
        return;
    }




    struct httpd_data *VAR_5 = (struct httpd_data *) VAR_0;
    if (VAR_5->hd_req_aux.sd == VAR_4) {
        if (VAR_5->hd_req.sess_ctx != VAR_2) {


            if (VAR_4->ctx != VAR_5->hd_req.sess_ctx) {

                FUNC_0(VAR_5->hd_req.sess_ctx, VAR_5->hd_req.free_ctx);
            }
            VAR_5->hd_req.sess_ctx = VAR_2;
        }
        VAR_5->hd_req.free_ctx = VAR_3;
        return;
    }


    if (VAR_4->ctx != VAR_2) {

        FUNC_0(VAR_4->ctx, VAR_4->free_ctx);
        VAR_4->ctx = VAR_2;
    }
    VAR_4->free_ctx = VAR_3;
}
