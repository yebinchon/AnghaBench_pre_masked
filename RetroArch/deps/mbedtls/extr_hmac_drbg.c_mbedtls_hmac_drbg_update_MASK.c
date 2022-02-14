
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int md_info; } ;
struct TYPE_7__ {unsigned char const* V; TYPE_2__ md_ctx; } ;
typedef TYPE_1__ mbedtls_hmac_drbg_context ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,unsigned char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,size_t) ;
 int FUNC_4 (TYPE_2__*,unsigned char const*,size_t) ;

void FUNC_5( mbedtls_hmac_drbg_context *VAR_1,
                       const unsigned char *VAR_2, size_t VAR_3 )
{
    size_t VAR_4 = FUNC_0( VAR_1->md_ctx.md_info );
    unsigned char VAR_5 = ( VAR_2 != ((void*)0) && VAR_3 != 0 ) ? 2 : 1;
    unsigned char VAR_6[1];
    unsigned char VAR_7[VAR_0];

    for( VAR_6[0] = 0; VAR_6[0] < VAR_5; VAR_6[0]++ )
    {

        FUNC_2( &VAR_1->md_ctx );
        FUNC_4( &VAR_1->md_ctx, VAR_1->V, VAR_4 );
        FUNC_4( &VAR_1->md_ctx, VAR_6, 1 );
        if( VAR_5 == 2 )
            FUNC_4( &VAR_1->md_ctx, VAR_2, VAR_3 );
        FUNC_1( &VAR_1->md_ctx, VAR_7 );


        FUNC_3( &VAR_1->md_ctx, VAR_7, VAR_4 );
        FUNC_4( &VAR_1->md_ctx, VAR_1->V, VAR_4 );
        FUNC_1( &VAR_1->md_ctx, VAR_1->V );
    }
}
