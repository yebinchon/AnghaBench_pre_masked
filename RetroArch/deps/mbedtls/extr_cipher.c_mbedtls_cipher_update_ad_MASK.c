
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_gcm_context ;
struct TYPE_5__ {int iv_size; int iv; int operation; scalar_t__ cipher_ctx; TYPE_1__* cipher_info; } ;
typedef TYPE_2__ mbedtls_cipher_context_t ;
struct TYPE_4__ {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,unsigned char const*,size_t) ;

int FUNC_1( mbedtls_cipher_context_t *VAR_2,
                      const unsigned char *VAR_3, size_t VAR_4 )
{
    if( ((void*)0) == VAR_2 || ((void*)0) == VAR_2->cipher_info )
        return( VAR_0 );

    if( VAR_1 == VAR_2->cipher_info->mode )
    {
        return FUNC_0( (mbedtls_gcm_context *) VAR_2->cipher_ctx, VAR_2->operation,
                           VAR_2->iv, VAR_2->iv_size, VAR_3, VAR_4 );
    }

    return( 0 );
}
