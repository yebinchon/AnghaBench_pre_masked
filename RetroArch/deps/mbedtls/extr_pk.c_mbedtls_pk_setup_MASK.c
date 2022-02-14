
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * (* ctx_alloc_func ) () ;} ;
typedef TYPE_1__ mbedtls_pk_info_t ;
struct TYPE_6__ {TYPE_1__ const* pk_info; int * pk_ctx; } ;
typedef TYPE_2__ mbedtls_pk_context ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;

int FUNC_1( mbedtls_pk_context *VAR_2, const mbedtls_pk_info_t *VAR_3 )
{
    if( VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2->pk_info != ((void*)0) )
        return( VAR_1 );

    if( ( VAR_2->pk_ctx = VAR_3->ctx_alloc_func() ) == ((void*)0) )
        return( VAR_0 );

    VAR_2->pk_info = VAR_3;

    return( 0 );
}
