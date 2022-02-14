
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* session_negotiate; TYPE_1__* session; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_6__ {int verify_result; } ;
struct TYPE_5__ {int verify_result; } ;



uint32_t FUNC_0( const mbedtls_ssl_context *VAR_0 )
{
    if( VAR_0->session != ((void*)0) )
        return( VAR_0->session->verify_result );

    if( VAR_0->session_negotiate != ((void*)0) )
        return( VAR_0->session_negotiate->verify_result );

    return( 0xFFFFFFFF );
}
