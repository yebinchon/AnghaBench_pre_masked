
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int md_ctx; TYPE_1__* md_info; int * hmac_ctx; } ;
typedef TYPE_2__ mbedtls_md_context_t ;
struct TYPE_4__ {int (* finish_func ) (int ,unsigned char*) ;int size; int (* update_func ) (int ,unsigned char*,int ) ;int block_size; int (* starts_func ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,int ) ;
 int FUNC_3 (int ,unsigned char*,int ) ;
 int FUNC_4 (int ,unsigned char*) ;

int FUNC_5( mbedtls_md_context_t *VAR_2, unsigned char *VAR_3 )
{
    unsigned char VAR_4[VAR_1];
    unsigned char *VAR_5;

    if( VAR_2 == ((void*)0) || VAR_2->md_info == ((void*)0) || VAR_2->hmac_ctx == ((void*)0) )
        return( VAR_0 );

    VAR_5 = (unsigned char *) VAR_2->hmac_ctx + VAR_2->md_info->block_size;

    VAR_2->md_info->finish_func( VAR_2->md_ctx, VAR_4 );
    VAR_2->md_info->starts_func( VAR_2->md_ctx );
    VAR_2->md_info->update_func( VAR_2->md_ctx, VAR_5, VAR_2->md_info->block_size );
    VAR_2->md_info->update_func( VAR_2->md_ctx, VAR_4, VAR_2->md_info->size );
    VAR_2->md_info->finish_func( VAR_2->md_ctx, VAR_3 );

    return( 0 );
}
