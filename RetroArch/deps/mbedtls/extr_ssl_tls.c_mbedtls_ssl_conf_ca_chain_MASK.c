
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_x509_crt ;
typedef int mbedtls_x509_crl ;
struct TYPE_3__ {int * ca_crl; int * ca_chain; } ;
typedef TYPE_1__ mbedtls_ssl_config ;



void FUNC_0( mbedtls_ssl_config *VAR_0,
                               mbedtls_x509_crt *VAR_1,
                               mbedtls_x509_crl *VAR_2 )
{
    VAR_0->ca_chain = VAR_1;
    VAR_0->ca_crl = VAR_2;
}
