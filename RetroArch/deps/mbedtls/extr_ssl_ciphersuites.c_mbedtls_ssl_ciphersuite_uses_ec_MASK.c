
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key_exchange; } ;
typedef TYPE_1__ mbedtls_ssl_ciphersuite_t ;
int FUNC_0( const mbedtls_ssl_ciphersuite_t *VAR_0 )
{
    switch( VAR_0->key_exchange )
    {
        case 130:
        case 132:
        case 131:
        case 128:
        case 129:
            return( 1 );

        default:
            return( 0 );
    }
}
