
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sum ;
struct TYPE_5__ {TYPE_1__* md_info; int md_ctx; int * hmac_ctx; } ;
typedef TYPE_2__ mbedtls_md_context_t ;
struct TYPE_4__ {size_t block_size; size_t size; int (* update_func ) (int ,unsigned char*,size_t) ;int (* starts_func ) (int ) ;int (* finish_func ) (int ,unsigned char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned char const*,size_t) ;
 int FUNC_4 (int ,unsigned char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned char*,size_t) ;

int FUNC_7( mbedtls_md_context_t *VAR_2, const unsigned char *VAR_3, size_t VAR_4 )
{
    unsigned char VAR_5[VAR_1];
    unsigned char *VAR_6, *VAR_7;
    size_t VAR_8;

    if( VAR_2 == ((void*)0) || VAR_2->md_info == ((void*)0) || VAR_2->hmac_ctx == ((void*)0) )
        return( VAR_0 );

    if( VAR_4 > (size_t) VAR_2->md_info->block_size )
    {
        VAR_2->md_info->starts_func( VAR_2->md_ctx );
        VAR_2->md_info->update_func( VAR_2->md_ctx, VAR_3, VAR_4 );
        VAR_2->md_info->finish_func( VAR_2->md_ctx, VAR_5 );

        VAR_4 = VAR_2->md_info->size;
        VAR_3 = VAR_5;
    }

    VAR_6 = (unsigned char *) VAR_2->hmac_ctx;
    VAR_7 = (unsigned char *) VAR_2->hmac_ctx + VAR_2->md_info->block_size;

    FUNC_1( VAR_6, 0x36, VAR_2->md_info->block_size );
    FUNC_1( VAR_7, 0x5C, VAR_2->md_info->block_size );

    for( VAR_8 = 0; VAR_8 < VAR_4; VAR_8++ )
    {
        VAR_6[VAR_8] = (unsigned char)( VAR_6[VAR_8] ^ VAR_3[VAR_8] );
        VAR_7[VAR_8] = (unsigned char)( VAR_7[VAR_8] ^ VAR_3[VAR_8] );
    }

    FUNC_0( VAR_5, sizeof( VAR_5 ) );

    VAR_2->md_info->starts_func( VAR_2->md_ctx );
    VAR_2->md_info->update_func( VAR_2->md_ctx, VAR_6, VAR_2->md_info->block_size );

    return( 0 );
}
