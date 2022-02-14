
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ecdsa; void* rsa; } ;
typedef TYPE_1__ mbedtls_ssl_sig_hash_set_t ;
typedef void* mbedtls_md_type_t ;



void FUNC_0( mbedtls_ssl_sig_hash_set_t *VAR_0,
                                          mbedtls_md_type_t VAR_1 )
{
    VAR_0->rsa = VAR_1;
    VAR_0->ecdsa = VAR_1;
}
