
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int md_ctx; TYPE_1__* md_info; } ;
typedef TYPE_2__ mbedtls_md_context_t ;
struct TYPE_4__ {int (* finish_func ) (int ,unsigned char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*) ;

int FUNC_1( mbedtls_md_context_t *VAR_1, unsigned char *VAR_2 )
{
    if( VAR_1 == ((void*)0) || VAR_1->md_info == ((void*)0) )
        return( VAR_0 );

    VAR_1->md_info->finish_func( VAR_1->md_ctx, VAR_2 );

    return( 0 );
}
