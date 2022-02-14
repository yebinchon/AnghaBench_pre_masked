
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* hmac_ctx; TYPE_1__* md_info; int * md_ctx; } ;
typedef TYPE_2__ mbedtls_md_context_t ;
struct TYPE_6__ {int block_size; int (* ctx_free_func ) (int *) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3( mbedtls_md_context_t *VAR_0 )
{
    if( VAR_0 == ((void*)0) || VAR_0->md_info == ((void*)0) )
        return;

    if( VAR_0->md_ctx != ((void*)0) )
        VAR_0->md_info->ctx_free_func( VAR_0->md_ctx );

    if( VAR_0->hmac_ctx != ((void*)0) )
    {
        FUNC_1( VAR_0->hmac_ctx, 2 * VAR_0->md_info->block_size );
        FUNC_0( VAR_0->hmac_ctx );
    }

    FUNC_1( VAR_0, sizeof( mbedtls_md_context_t ) );
}
