
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock_db {void* ctx; } ;
struct TYPE_4__ {void* sess_ctx; } ;
struct TYPE_3__ {struct sock_db* sd; } ;
struct httpd_data {TYPE_2__ hd_req; TYPE_1__ hd_req_aux; } ;
typedef scalar_t__ httpd_handle_t ;


 struct sock_db* FUNC_0 (scalar_t__,int) ;

void *FUNC_1(httpd_handle_t VAR_0, int VAR_1)
{
    struct sock_db *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }




    struct httpd_data *VAR_3 = (struct httpd_data *) VAR_0;
    if (VAR_3->hd_req_aux.sd == VAR_2) {
        return VAR_3->hd_req.sess_ctx;
    }

    return VAR_2->ctx;
}
