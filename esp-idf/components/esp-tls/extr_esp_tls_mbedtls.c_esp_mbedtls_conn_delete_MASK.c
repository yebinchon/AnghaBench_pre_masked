
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int server_fd; scalar_t__ is_tls; } ;
typedef TYPE_1__ esp_tls_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(esp_tls_t *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        FUNC_0(VAR_0);
        if (VAR_0->is_tls) {
            FUNC_1(&VAR_0->server_fd);
        }
    }
}
