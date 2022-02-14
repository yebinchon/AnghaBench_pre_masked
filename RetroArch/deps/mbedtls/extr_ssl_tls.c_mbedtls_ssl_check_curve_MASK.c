
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef scalar_t__ mbedtls_ecp_group_id ;
struct TYPE_4__ {scalar_t__* curve_list; } ;


 scalar_t__ const VAR_0 ;

int FUNC_0( const mbedtls_ssl_context *VAR_1, mbedtls_ecp_group_id VAR_2 )
{
    const mbedtls_ecp_group_id *VAR_3;

    if( VAR_1->conf->curve_list == ((void*)0) )
        return( -1 );

    for( VAR_3 = VAR_1->conf->curve_list; *VAR_3 != VAR_0; VAR_3++ )
        if( *VAR_3 == VAR_2 )
            return( 0 );

    return( -1 );
}
