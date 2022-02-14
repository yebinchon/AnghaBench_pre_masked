
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int md_ctx_dec; int md_ctx_enc; int cipher_ctx_dec; int cipher_ctx_enc; } ;
typedef TYPE_1__ mbedtls_ssl_transform ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3( mbedtls_ssl_transform *VAR_0 )
{
    FUNC_2( VAR_0, 0, sizeof(mbedtls_ssl_transform) );

    FUNC_0( &VAR_0->cipher_ctx_enc );
    FUNC_0( &VAR_0->cipher_ctx_dec );

    FUNC_1( &VAR_0->md_ctx_enc );
    FUNC_1( &VAR_0->md_ctx_dec );
}
