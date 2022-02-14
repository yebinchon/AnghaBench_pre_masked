
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pk_ctx; TYPE_1__* pk_info; } ;
typedef TYPE_2__ mbedtls_pk_context ;
struct TYPE_5__ {int (* ctx_free_func ) (int ) ;} ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2( mbedtls_pk_context *VAR_0 )
{
    if( VAR_0 == ((void*)0) || VAR_0->pk_info == ((void*)0) )
        return;

    VAR_0->pk_info->ctx_free_func( VAR_0->pk_ctx );

    FUNC_0( VAR_0, sizeof( mbedtls_pk_context ) );
}
