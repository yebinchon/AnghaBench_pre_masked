
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_9__ {int len; int GY; int G; int P; } ;
struct TYPE_7__ {TYPE_5__ dhm_ctx; } ;
struct TYPE_6__ {int dhm_min_bitlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (TYPE_5__*,unsigned char**,unsigned char*) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_2, unsigned char **VAR_3,
                                       unsigned char *VAR_4 )
{
    int VAR_5 = VAR_1;
    if( ( VAR_5 = FUNC_3( &VAR_2->handshake->dhm_ctx, VAR_3, VAR_4 ) ) != 0 )
    {
        FUNC_2( 2, ( "mbedtls_dhm_read_params" ), VAR_5 );
        return( VAR_5 );
    }

    if( VAR_2->handshake->dhm_ctx.len * 8 < VAR_2->conf->dhm_min_bitlen )
    {
        FUNC_1( 1, ( "DHM prime too short: %d < %d",
                                    VAR_2->handshake->dhm_ctx.len * 8,
                                    VAR_2->conf->dhm_min_bitlen ) );
        return( VAR_0 );
    }

    FUNC_0( 3, "DHM: P ", &VAR_2->handshake->dhm_ctx.P );
    FUNC_0( 3, "DHM: G ", &VAR_2->handshake->dhm_ctx.G );
    FUNC_0( 3, "DHM: GY", &VAR_2->handshake->dhm_ctx.GY );

    return( VAR_5 );
}
