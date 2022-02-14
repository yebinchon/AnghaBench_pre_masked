
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* alpn_chosen; } ;
typedef TYPE_1__ mbedtls_ssl_context ;



const char *FUNC_0( const mbedtls_ssl_context *VAR_0 )
{
    return( VAR_0->alpn_chosen );
}
