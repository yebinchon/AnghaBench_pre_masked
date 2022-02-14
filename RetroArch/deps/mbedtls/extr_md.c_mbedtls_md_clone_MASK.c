
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int md_ctx; TYPE_1__* md_info; } ;
typedef TYPE_2__ mbedtls_md_context_t ;
struct TYPE_5__ {int (* clone_func ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1( mbedtls_md_context_t *VAR_1,
                      const mbedtls_md_context_t *VAR_2 )
{
    if( VAR_1 == ((void*)0) || VAR_1->md_info == ((void*)0) ||
        VAR_2 == ((void*)0) || VAR_2->md_info == ((void*)0) ||
        VAR_1->md_info != VAR_2->md_info )
    {
        return( VAR_0 );
    }

    VAR_1->md_info->clone_func( VAR_1->md_ctx, VAR_2->md_ctx );

    return( 0 );
}
