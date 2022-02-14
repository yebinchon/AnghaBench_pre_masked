
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int key_len_func; int sign_func; int decrypt_func; void* key; } ;
typedef TYPE_1__ mbedtls_rsa_alt_context ;
typedef int mbedtls_pk_rsa_alt_sign_func ;
typedef int mbedtls_pk_rsa_alt_key_len_func ;
typedef int mbedtls_pk_rsa_alt_decrypt_func ;
struct TYPE_7__ {int * (* ctx_alloc_func ) () ;} ;
typedef TYPE_2__ mbedtls_pk_info_t ;
struct TYPE_8__ {int * pk_ctx; TYPE_2__ const* pk_info; } ;
typedef TYPE_3__ mbedtls_pk_context ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int * FUNC_0 () ;

int FUNC_1( mbedtls_pk_context *VAR_3, void * VAR_4,
                         mbedtls_pk_rsa_alt_decrypt_func VAR_5,
                         mbedtls_pk_rsa_alt_sign_func VAR_6,
                         mbedtls_pk_rsa_alt_key_len_func VAR_7 )
{
    mbedtls_rsa_alt_context *VAR_8;
    const mbedtls_pk_info_t *VAR_9 = &VAR_2;

    if( VAR_3 == ((void*)0) || VAR_3->pk_info != ((void*)0) )
        return( VAR_1 );

    if( ( VAR_3->pk_ctx = VAR_9->ctx_alloc_func() ) == ((void*)0) )
        return( VAR_0 );

    VAR_3->pk_info = VAR_9;

    VAR_8 = (mbedtls_rsa_alt_context *) VAR_3->pk_ctx;

    VAR_8->key = VAR_4;
    VAR_8->decrypt_func = VAR_5;
    VAR_8->sign_func = VAR_6;
    VAR_8->key_len_func = VAR_7;

    return( 0 );
}
