
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ecdsa; void* rsa; } ;
typedef TYPE_1__ mbedtls_ssl_sig_hash_set_t ;
typedef int mbedtls_pk_type_t ;
typedef void* mbedtls_md_type_t ;


 void* VAR_0 ;



void FUNC_0( mbedtls_ssl_sig_hash_set_t *VAR_1,
                                   mbedtls_pk_type_t VAR_2,
                                   mbedtls_md_type_t VAR_3 )
{
    switch( VAR_2 )
    {
        case 128:
            if( VAR_1->rsa == VAR_0 )
                VAR_1->rsa = VAR_3;
            break;

        case 129:
            if( VAR_1->ecdsa == VAR_0 )
                VAR_1->ecdsa = VAR_3;
            break;

        default:
            break;
    }
}
