
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_x509_crt_profile ;
struct TYPE_3__ {int const* cert_profile; } ;
typedef TYPE_1__ mbedtls_ssl_config ;



void FUNC_0( mbedtls_ssl_config *VAR_0,
                                    const mbedtls_x509_crt_profile *VAR_1 )
{
    VAR_0->cert_profile = VAR_1;
}
