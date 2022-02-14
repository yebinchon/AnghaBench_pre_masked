
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ecdsa; int rsa; } ;
typedef TYPE_1__ mbedtls_ssl_sig_hash_set_t ;
typedef int mbedtls_pk_type_t ;
typedef int mbedtls_md_type_t ;


 int VAR_0 ;



mbedtls_md_type_t FUNC_0( mbedtls_ssl_sig_hash_set_t *VAR_1,
                                                 mbedtls_pk_type_t VAR_2 )
{
    switch( VAR_2 )
    {
        case 128:
            return( VAR_1->rsa );
        case 129:
            return( VAR_1->ecdsa );
        default:
            return( VAR_0 );
    }
}
