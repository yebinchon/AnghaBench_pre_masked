
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cipher_ctx; } ;
typedef TYPE_1__ mbedtls_gcm_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2( mbedtls_gcm_context *VAR_0 )
{
    FUNC_0( &VAR_0->cipher_ctx );
    FUNC_1( VAR_0, sizeof( mbedtls_gcm_context ) );
}
