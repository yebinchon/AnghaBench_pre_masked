
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ mbedtls_ssl_ciphersuite_t ;


 TYPE_1__* VAR_0 ;

const mbedtls_ssl_ciphersuite_t *FUNC_0( int VAR_1 )
{
    const mbedtls_ssl_ciphersuite_t *VAR_2 = VAR_0;

    while( VAR_2->id != 0 )
    {
        if( VAR_2->id == VAR_1 )
            return( VAR_2 );

        VAR_2++;
    }

    return( ((void*)0) );
}
