
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {int sockfd; TYPE_1__ server_fd; scalar_t__ error_handle; } ;
typedef TYPE_2__ esp_tls_t ;
typedef int esp_tls_last_error_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;

esp_tls_t *FUNC_2(void)
{
    esp_tls_t *VAR_0 = (esp_tls_t *)FUNC_0(1, sizeof(esp_tls_t));
    if (!VAR_0) {
        return ((void*)0);
    }
    VAR_0->error_handle = FUNC_0(1, sizeof(esp_tls_last_error_t));
    if (!VAR_0->error_handle) {
        FUNC_1(VAR_0);
        return ((void*)0);
    }



    return VAR_0;
}
