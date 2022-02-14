
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_x509_crt ;
struct TYPE_3__ {int key_cert; } ;
typedef TYPE_1__ mbedtls_ssl_config ;
typedef int mbedtls_pk_context ;


 int FUNC_0 (int *,int *,int *) ;

int FUNC_1( mbedtls_ssl_config *VAR_0,
                              mbedtls_x509_crt *VAR_1,
                              mbedtls_pk_context *VAR_2 )
{
    return( FUNC_0( &VAR_0->key_cert, VAR_1, VAR_2 ) );
}
