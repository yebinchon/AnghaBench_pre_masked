
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hmac_ctx; } ;
typedef TYPE_1__ mbedtls_ssl_cookie_ctx ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (unsigned char*,int) ;

int FUNC_4( mbedtls_ssl_cookie_ctx *VAR_2,
                      int (*VAR_3)(void *, unsigned char *, size_t),
                      void *VAR_4 )
{
    int VAR_5;
    unsigned char VAR_6[VAR_1];

    if( ( VAR_5 = VAR_3( VAR_4, VAR_6, sizeof( VAR_6 ) ) ) != 0 )
        return( VAR_5 );

    VAR_5 = FUNC_2( &VAR_2->hmac_ctx, FUNC_1( VAR_0 ), 1 );
    if( VAR_5 != 0 )
        return( VAR_5 );

    VAR_5 = FUNC_0( &VAR_2->hmac_ctx, VAR_6, sizeof( VAR_6 ) );
    if( VAR_5 != 0 )
        return( VAR_5 );

    FUNC_3( VAR_6, sizeof( VAR_6 ) );

    return( 0 );
}
