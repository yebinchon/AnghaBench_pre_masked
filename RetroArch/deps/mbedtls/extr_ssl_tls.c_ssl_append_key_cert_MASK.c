
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_x509_crt ;
struct TYPE_3__ {struct TYPE_3__* next; int * key; int * cert; } ;
typedef TYPE_1__ mbedtls_ssl_key_cert ;
typedef int mbedtls_pk_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1( mbedtls_ssl_key_cert **VAR_1,
                                mbedtls_x509_crt *VAR_2,
                                mbedtls_pk_context *VAR_3 )
{
    mbedtls_ssl_key_cert *VAR_4 = (mbedtls_ssl_key_cert*)
       FUNC_0( 1, sizeof( mbedtls_ssl_key_cert ) );
    if( VAR_4 == ((void*)0) )
        return( VAR_0 );

    VAR_4->cert = VAR_2;
    VAR_4->key = VAR_3;
    VAR_4->next = ((void*)0);


    if( *VAR_1 == ((void*)0) )
    {
        *VAR_1 = VAR_4;
    }
    else
    {
        mbedtls_ssl_key_cert *VAR_5 = *VAR_1;
        while( VAR_5->next != ((void*)0) )
            VAR_5 = VAR_5->next;
        VAR_5->next = VAR_4;
    }

    return( 0 );
}
