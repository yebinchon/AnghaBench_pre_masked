
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mbedtls_cmac_context_t ;
struct TYPE_9__ {scalar_t__ cipher_ctx; TYPE_2__* cipher_info; struct TYPE_9__* cmac_ctx; } ;
typedef TYPE_3__ mbedtls_cipher_context_t ;
struct TYPE_8__ {TYPE_1__* base; } ;
struct TYPE_7__ {int (* ctx_free_func ) (scalar_t__) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3( mbedtls_cipher_context_t *VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return;
    if( VAR_0->cipher_ctx )
        VAR_0->cipher_info->base->ctx_free_func( VAR_0->cipher_ctx );

    FUNC_1( VAR_0, sizeof(mbedtls_cipher_context_t) );
}
