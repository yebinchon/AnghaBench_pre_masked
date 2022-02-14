
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mbedtls_x509_crt ;
struct TYPE_8__ {int * cert; } ;
typedef TYPE_3__ mbedtls_ssl_key_cert ;
struct TYPE_9__ {TYPE_2__* conf; TYPE_1__* handshake; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
struct TYPE_7__ {TYPE_3__* key_cert; } ;
struct TYPE_6__ {TYPE_3__* key_cert; } ;



__attribute__((used)) static inline mbedtls_x509_crt *FUNC_0( mbedtls_ssl_context *VAR_0 )
{
    mbedtls_ssl_key_cert *VAR_1;

    if( VAR_0->handshake != ((void*)0) && VAR_0->handshake->key_cert != ((void*)0) )
        VAR_1 = VAR_0->handshake->key_cert;
    else
        VAR_1 = VAR_0->conf->key_cert;

    return( VAR_1 == ((void*)0) ? ((void*)0) : VAR_1->cert );
}
