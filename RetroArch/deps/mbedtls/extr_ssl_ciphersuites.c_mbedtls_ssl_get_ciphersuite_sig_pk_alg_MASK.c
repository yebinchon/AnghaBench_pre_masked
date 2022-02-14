
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
 int VAR_3 ;

mbedtls_pk_type_t FUNC_0( const mbedtls_ssl_ciphersuite_t *VAR_4 )
{
    switch( VAR_4->key_exchange )
    {
        case 129:
        case 134:
        case 132:
        case 128:
            return( VAR_3 );

        case 133:
            return( VAR_0 );

        case 130:
        case 131:
            return( VAR_1 );

        default:
            return( VAR_2 );
    }
}
