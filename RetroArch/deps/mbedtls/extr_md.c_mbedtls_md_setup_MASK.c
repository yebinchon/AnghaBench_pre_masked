
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* ctx_free_func ) (int *) ;int block_size; int * (* ctx_alloc_func ) () ;} ;
typedef TYPE_1__ mbedtls_md_info_t ;
struct TYPE_6__ {TYPE_1__ const* md_info; int * md_ctx; int * hmac_ctx; } ;
typedef TYPE_2__ mbedtls_md_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;

int FUNC_3( mbedtls_md_context_t *VAR_2, const mbedtls_md_info_t *VAR_3, int VAR_4 )
{
    if( VAR_3 == ((void*)0) || VAR_2 == ((void*)0) )
        return( VAR_1 );

    if( ( VAR_2->md_ctx = VAR_3->ctx_alloc_func() ) == ((void*)0) )
        return( VAR_0 );

    if( VAR_4 != 0 )
    {
        VAR_2->hmac_ctx = FUNC_0( 2, VAR_3->block_size );
        if( VAR_2->hmac_ctx == ((void*)0) )
        {
            VAR_3->ctx_free_func( VAR_2->md_ctx );
            return( VAR_0 );
        }
    }

    VAR_2->md_info = VAR_3;

    return( 0 );
}
