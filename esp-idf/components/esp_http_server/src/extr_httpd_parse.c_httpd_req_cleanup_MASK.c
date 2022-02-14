
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct httpd_req_aux {TYPE_1__* sd; } ;
struct TYPE_5__ {int ignore_sess_ctx_changes; scalar_t__ sess_ctx; struct httpd_req_aux* aux; int * handle; int free_ctx; } ;
typedef TYPE_2__ httpd_req_t ;
struct TYPE_4__ {scalar_t__ ctx; int ignore_sess_ctx_changes; int free_ctx; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(httpd_req_t *VAR_0)
{
    struct httpd_req_aux *VAR_1 = VAR_0->aux;


    if ((VAR_0->ignore_sess_ctx_changes == 0) && (VAR_1->sd->ctx != VAR_0->sess_ctx)) {
        FUNC_0(VAR_1->sd->ctx, VAR_1->sd->free_ctx);
    }

    VAR_1->sd->ctx = VAR_0->sess_ctx;
    VAR_1->sd->free_ctx = VAR_0->free_ctx;
    VAR_1->sd->ignore_sess_ctx_changes = VAR_0->ignore_sess_ctx_changes;


    VAR_1->sd = ((void*)0);
    VAR_0->handle = ((void*)0);
    VAR_0->aux = ((void*)0);
}
