
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ mbedtls_ssl_ciphersuite_t ;


 TYPE_1__* FUNC_0 (char const*) ;

int FUNC_1( const char *VAR_0 )
{
    const mbedtls_ssl_ciphersuite_t *VAR_1;

    VAR_1 = FUNC_0( VAR_0 );

    if( VAR_1 == ((void*)0) )
        return( 0 );

    return( VAR_1->id );
}
