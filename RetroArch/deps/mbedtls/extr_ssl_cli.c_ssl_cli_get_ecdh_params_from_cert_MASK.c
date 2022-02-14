
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* handshake; TYPE_3__* session_negotiate; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
typedef int mbedtls_ecp_keypair ;
struct TYPE_9__ {TYPE_2__* peer_cert; } ;
struct TYPE_8__ {int pk; } ;
struct TYPE_7__ {int ecdh_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *,int const*,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_context *VAR_5 )
{
    int VAR_6;
    const mbedtls_ecp_keypair *VAR_7;

    if( VAR_5->session_negotiate->peer_cert == ((void*)0) )
    {
        FUNC_0( 2, ( "certificate required" ) );
        return( VAR_3 );
    }

    if( ! FUNC_3( &VAR_5->session_negotiate->peer_cert->pk,
                     VAR_4 ) )
    {
        FUNC_0( 1, ( "server key not ECDH capable" ) );
        return( VAR_2 );
    }

    VAR_7 = FUNC_4( VAR_5->session_negotiate->peer_cert->pk );

    if( ( VAR_6 = FUNC_2( &VAR_5->handshake->ecdh_ctx, VAR_7,
                                 VAR_0 ) ) != 0 )
    {
        FUNC_1( 1, ( "mbedtls_ecdh_get_params" ), VAR_6 );
        return( VAR_6 );
    }

    if( FUNC_5( VAR_5 ) != 0 )
    {
        FUNC_0( 1, ( "bad server certificate (ECDH curve)" ) );
        return( VAR_1 );
    }

    return( VAR_6 );
}
