
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_db {void* transport_ctx; int free_transport_ctx; } ;
typedef int httpd_handle_t ;
typedef int httpd_free_ctx_fn_t ;


 int FUNC_0 (void*,int ) ;
 struct sock_db* FUNC_1 (int ,int) ;

void FUNC_2(httpd_handle_t VAR_0, int VAR_1, void *VAR_2, httpd_free_ctx_fn_t VAR_3)
{
    struct sock_db *VAR_4 = FUNC_1(VAR_0, VAR_1);
    if (VAR_4 == ((void*)0)) {
        return;
    }

    if (VAR_4->transport_ctx != VAR_2) {

        FUNC_0(VAR_4->transport_ctx, VAR_4->free_transport_ctx);
        VAR_4->transport_ctx = VAR_2;
    }
    VAR_4->free_transport_ctx = VAR_3;
}
