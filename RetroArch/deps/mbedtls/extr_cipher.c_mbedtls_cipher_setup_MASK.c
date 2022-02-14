
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* base; } ;
typedef TYPE_2__ mbedtls_cipher_info_t ;
struct TYPE_10__ {TYPE_2__ const* cipher_info; int * cipher_ctx; } ;
typedef TYPE_3__ mbedtls_cipher_context_t ;
struct TYPE_8__ {int * (* ctx_alloc_func ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int * FUNC_2 () ;

int FUNC_3( mbedtls_cipher_context_t *VAR_4, const mbedtls_cipher_info_t *VAR_5 )
{
    if( ((void*)0) == VAR_5 || ((void*)0) == VAR_4 )
        return( VAR_1 );

    FUNC_1( VAR_4, 0, sizeof( mbedtls_cipher_context_t ) );

    if( ((void*)0) == ( VAR_4->cipher_ctx = VAR_5->base->ctx_alloc_func() ) )
        return( VAR_0 );

    VAR_4->cipher_info = VAR_5;
    return( 0 );
}
