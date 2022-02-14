
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_4__ {int sni_authmode; } ;



void FUNC_0( mbedtls_ssl_context *VAR_0,
                                  int VAR_1 )
{
    VAR_0->handshake->sni_authmode = VAR_1;
}
