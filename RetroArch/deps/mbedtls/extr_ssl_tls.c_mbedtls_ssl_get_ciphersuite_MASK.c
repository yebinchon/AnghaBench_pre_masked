
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* session; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_4__ {int ciphersuite; } ;


 char const* FUNC_0 (int ) ;

const char *FUNC_1( const mbedtls_ssl_context *VAR_0 )
{
    if( VAR_0 == ((void*)0) || VAR_0->session == ((void*)0) )
        return( ((void*)0) );

    return FUNC_0( VAR_0->session->ciphersuite );
}
