
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_md_info_t ;
struct TYPE_4__ {int V; int md_ctx; } ;
typedef TYPE_1__ mbedtls_hmac_drbg_context ;


 int FUNC_0 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int ,int,int ) ;

int FUNC_5( mbedtls_hmac_drbg_context *VAR_0,
                        const mbedtls_md_info_t * VAR_1,
                        const unsigned char *VAR_2, size_t VAR_3 )
{
    int VAR_4;

    if( ( VAR_4 = FUNC_3( &VAR_0->md_ctx, VAR_1, 1 ) ) != 0 )
        return( VAR_4 );






    FUNC_2( &VAR_0->md_ctx, VAR_0->V, FUNC_1( VAR_1 ) );
    FUNC_4( VAR_0->V, 0x01, FUNC_1( VAR_1 ) );

    FUNC_0( VAR_0, VAR_2, VAR_3 );

    return( 0 );
}
