
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sockfd; struct TYPE_5__* error_handle; } ;
typedef TYPE_1__ esp_tls_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(esp_tls_t *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        FUNC_0(VAR_0);
        if (VAR_0->sockfd >= 0) {
            FUNC_1(VAR_0->sockfd);
        }
    FUNC_2(VAR_0->error_handle);
    FUNC_2(VAR_0);
    }
}
