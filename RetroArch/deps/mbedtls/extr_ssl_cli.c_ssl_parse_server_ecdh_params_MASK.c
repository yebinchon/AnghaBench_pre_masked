
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_5__ {int ecdh_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *,unsigned char const**,unsigned char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_2,
                                         unsigned char **VAR_3,
                                         unsigned char *VAR_4 )
{
    int VAR_5 = VAR_1;
    if( ( VAR_5 = FUNC_2( &VAR_2->handshake->ecdh_ctx,
                                  (const unsigned char **) VAR_3, VAR_4 ) ) != 0 )
    {
        FUNC_1( 1, ( "mbedtls_ecdh_read_params" ), VAR_5 );
        return( VAR_5 );
    }

    if( FUNC_3( VAR_2 ) != 0 )
    {
        FUNC_0( 1, ( "bad server key exchange message (ECDHE curve)" ) );
        return( VAR_0 );
    }

    return( VAR_5 );
}
