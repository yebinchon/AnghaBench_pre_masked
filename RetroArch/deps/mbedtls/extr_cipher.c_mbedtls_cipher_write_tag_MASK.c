
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_gcm_context ;
struct TYPE_5__ {scalar_t__ operation; scalar_t__ cipher_ctx; TYPE_1__* cipher_info; } ;
typedef TYPE_2__ mbedtls_cipher_context_t ;
struct TYPE_4__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned char*,size_t) ;

int FUNC_1( mbedtls_cipher_context_t *VAR_3,
                      unsigned char *VAR_4, size_t VAR_5 )
{
    if( ((void*)0) == VAR_3 || ((void*)0) == VAR_3->cipher_info || ((void*)0) == VAR_4 )
        return( VAR_1 );

    if( VAR_0 != VAR_3->operation )
        return( VAR_1 );

    if( VAR_2 == VAR_3->cipher_info->mode )
        return FUNC_0( (mbedtls_gcm_context *) VAR_3->cipher_ctx, VAR_4, VAR_5 );

    return( 0 );
}
