
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* md_info; int md_ctx; int * hmac_ctx; } ;
typedef TYPE_2__ mbedtls_md_context_t ;
struct TYPE_4__ {int block_size; int (* update_func ) (int ,unsigned char*,int ) ;int (* starts_func ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int ) ;

int FUNC_2( mbedtls_md_context_t *VAR_1 )
{
    unsigned char *VAR_2;

    if( VAR_1 == ((void*)0) || VAR_1->md_info == ((void*)0) || VAR_1->hmac_ctx == ((void*)0) )
        return( VAR_0 );

    VAR_2 = (unsigned char *) VAR_1->hmac_ctx;

    VAR_1->md_info->starts_func( VAR_1->md_ctx );
    VAR_1->md_info->update_func( VAR_1->md_ctx, VAR_2, VAR_1->md_info->block_size );

    return( 0 );
}
