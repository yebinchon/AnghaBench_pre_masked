
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_db {void* transport_ctx; } ;
typedef int httpd_handle_t ;


 struct sock_db* FUNC_0 (int ,int) ;

void *FUNC_1(httpd_handle_t VAR_0, int VAR_1)
{
    struct sock_db *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    return VAR_2->transport_ctx;
}
