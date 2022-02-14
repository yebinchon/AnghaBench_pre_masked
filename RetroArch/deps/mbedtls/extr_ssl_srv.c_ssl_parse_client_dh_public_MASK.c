
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_7__ {int GY; } ;
struct TYPE_5__ {TYPE_4__ dhm_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (TYPE_4__*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_3, unsigned char **VAR_4,
                                       const unsigned char *VAR_5 )
{
    int VAR_6 = VAR_2;
    size_t VAR_7;




    if( *VAR_4 + 2 > VAR_5 )
    {
        FUNC_1( 1, ( "bad client key exchange message" ) );
        return( VAR_0 );
    }

    VAR_7 = ( (*VAR_4)[0] << 8 ) | (*VAR_4)[1];
    *VAR_4 += 2;

    if( *VAR_4 + VAR_7 > VAR_5 )
    {
        FUNC_1( 1, ( "bad client key exchange message" ) );
        return( VAR_0 );
    }

    if( ( VAR_6 = FUNC_3( &VAR_3->handshake->dhm_ctx, *VAR_4, VAR_7 ) ) != 0 )
    {
        FUNC_2( 1, "mbedtls_dhm_read_public", VAR_6 );
        return( VAR_1 );
    }

    *VAR_4 += VAR_7;

    FUNC_0( 3, "DHM: GY", &VAR_3->handshake->dhm_ctx.GY );

    return( VAR_6 );
}
