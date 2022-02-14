
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
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_context *VAR_3 )
{
    int VAR_4;

    if( ! FUNC_3( FUNC_5( VAR_3 ), VAR_2 ) )
    {
        FUNC_0( 1, ( "server key not ECDH capable" ) );
        return( VAR_1 );
    }

    if( ( VAR_4 = FUNC_2( &VAR_3->handshake->ecdh_ctx,
                                 FUNC_4( *FUNC_5( VAR_3 ) ),
                                 VAR_0 ) ) != 0 )
    {
        FUNC_1( 1, ( "mbedtls_ecdh_get_params" ), VAR_4 );
        return( VAR_4 );
    }

    return( 0 );
}
