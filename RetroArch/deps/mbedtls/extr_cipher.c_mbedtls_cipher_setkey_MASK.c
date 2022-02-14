
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mbedtls_operation_t ;
struct TYPE_7__ {int key_bitlen; scalar_t__ operation; int cipher_ctx; TYPE_2__* cipher_info; } ;
typedef TYPE_3__ mbedtls_cipher_context_t ;
struct TYPE_6__ {int flags; scalar_t__ mode; TYPE_1__* base; scalar_t__ key_bitlen; } ;
struct TYPE_5__ {int (* setkey_enc_func ) (int ,unsigned char const*,int) ;int (* setkey_dec_func ) (int ,unsigned char const*,int) ;} ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,unsigned char const*,int) ;
 int FUNC_1 (int ,unsigned char const*,int) ;

int FUNC_2( mbedtls_cipher_context_t *VAR_6, const unsigned char *VAR_7,
        int VAR_8, const mbedtls_operation_t VAR_9 )
{
    if( ((void*)0) == VAR_6 || ((void*)0) == VAR_6->cipher_info )
        return( VAR_3 );

    if( ( VAR_6->cipher_info->flags & VAR_0 ) == 0 &&
        (int) VAR_6->cipher_info->key_bitlen != VAR_8 )
    {
        return( VAR_3 );
    }

    VAR_6->key_bitlen = VAR_8;
    VAR_6->operation = VAR_9;




    if( VAR_2 == VAR_9 ||
        VAR_4 == VAR_6->cipher_info->mode ||
        VAR_5 == VAR_6->cipher_info->mode )
    {
        return VAR_6->cipher_info->base->setkey_enc_func( VAR_6->cipher_ctx, VAR_7,
                VAR_6->key_bitlen );
    }

    if( VAR_1 == VAR_9 )
        return VAR_6->cipher_info->base->setkey_dec_func( VAR_6->cipher_ctx, VAR_7,
                VAR_6->key_bitlen );

    return( VAR_3 );
}
