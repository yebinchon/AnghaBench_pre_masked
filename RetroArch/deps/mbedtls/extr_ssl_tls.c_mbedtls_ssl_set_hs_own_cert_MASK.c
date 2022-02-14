
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_x509_crt ;
struct TYPE_5__ {TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef int mbedtls_pk_context ;
struct TYPE_4__ {int sni_key_cert; } ;


 int FUNC_0 (int *,int *,int *) ;

int FUNC_1( mbedtls_ssl_context *VAR_0,
                                 mbedtls_x509_crt *VAR_1,
                                 mbedtls_pk_context *VAR_2 )
{
    return( FUNC_0( &VAR_0->handshake->sni_key_cert,
                                 VAR_1, VAR_2 ) );
}
