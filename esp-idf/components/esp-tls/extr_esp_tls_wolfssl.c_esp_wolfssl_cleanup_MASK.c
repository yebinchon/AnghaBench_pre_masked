
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ priv_ctx; scalar_t__ priv_ssl; } ;
typedef TYPE_1__ esp_tls_t ;
typedef int WOLFSSL_CTX ;
typedef int WOLFSSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(esp_tls_t *VAR_0)
{
    if (!VAR_0) {
        return;
    }
    FUNC_3( (WOLFSSL *)VAR_0->priv_ssl);
    FUNC_2( (WOLFSSL *)VAR_0->priv_ssl);
    FUNC_0( (WOLFSSL_CTX *)VAR_0->priv_ctx);
    FUNC_1();
}
