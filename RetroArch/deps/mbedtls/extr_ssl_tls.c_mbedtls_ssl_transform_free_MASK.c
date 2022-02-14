
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int md_ctx_dec; int md_ctx_enc; int cipher_ctx_dec; int cipher_ctx_enc; int ctx_inflate; int ctx_deflate; } ;
typedef TYPE_1__ mbedtls_ssl_transform ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5( mbedtls_ssl_transform *VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return;






    FUNC_2( &VAR_0->cipher_ctx_enc );
    FUNC_2( &VAR_0->cipher_ctx_dec );

    FUNC_3( &VAR_0->md_ctx_enc );
    FUNC_3( &VAR_0->md_ctx_dec );

    FUNC_4( VAR_0, sizeof( mbedtls_ssl_transform ) );
}
