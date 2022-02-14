
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef scalar_t__ mbedtls_md_type_t ;
struct TYPE_4__ {int* sig_hashes; } ;


 int const VAR_0 ;

int FUNC_0( const mbedtls_ssl_context *VAR_1,
                                mbedtls_md_type_t VAR_2 )
{
    const int *VAR_3;

    if( VAR_1->conf->sig_hashes == ((void*)0) )
        return( -1 );

    for( VAR_3 = VAR_1->conf->sig_hashes; *VAR_3 != VAR_0; VAR_3++ )
        if( *VAR_3 == (int) VAR_2 )
            return( 0 );

    return( -1 );
}
