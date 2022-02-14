
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int md_ctx; TYPE_1__* md_info; int * hmac_ctx; } ;
typedef TYPE_2__ mbedtls_md_context_t ;
struct TYPE_4__ {int (* update_func ) (int ,unsigned char const*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const*,size_t) ;

int FUNC_1( mbedtls_md_context_t *VAR_1, const unsigned char *VAR_2, size_t VAR_3 )
{
    if( VAR_1 == ((void*)0) || VAR_1->md_info == ((void*)0) || VAR_1->hmac_ctx == ((void*)0) )
        return( VAR_0 );

    VAR_1->md_info->update_func( VAR_1->md_ctx, VAR_2, VAR_3 );

    return( 0 );
}
