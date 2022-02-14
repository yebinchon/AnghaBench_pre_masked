
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key_exchange; } ;
typedef TYPE_1__ mbedtls_ssl_ciphersuite_t ;
typedef int mbedtls_pk_type_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

mbedtls_pk_type_t FUNC_0( const mbedtls_ssl_ciphersuite_t *VAR_3 )
{
    switch( VAR_3->key_exchange )
    {
        case 128:
        case 131:
        case 129:
            return( VAR_2 );

        case 130:
            return( VAR_0 );

        default:
            return( VAR_1 );
    }
}
