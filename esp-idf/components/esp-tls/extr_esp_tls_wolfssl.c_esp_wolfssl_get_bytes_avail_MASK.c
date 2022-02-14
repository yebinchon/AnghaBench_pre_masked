
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ priv_ssl; } ;
typedef TYPE_1__ esp_tls_t ;
typedef int WOLFSSL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

ssize_t FUNC_2(esp_tls_t *VAR_2)
{
    if (!VAR_2) {
        FUNC_0(VAR_1, "empty arg passed to esp_tls_get_bytes_avail()");
        return VAR_0;
    }
    return FUNC_1( (WOLFSSL *)VAR_2->priv_ssl);
}
