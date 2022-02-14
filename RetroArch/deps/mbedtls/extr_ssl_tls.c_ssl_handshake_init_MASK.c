
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int retransmit_state; int alt_transform_out; } ;
typedef TYPE_2__ mbedtls_ssl_transform ;
typedef TYPE_2__ mbedtls_ssl_session ;
typedef TYPE_2__ mbedtls_ssl_handshake_params ;
struct TYPE_17__ {TYPE_2__* handshake; TYPE_1__* conf; int transform_out; TYPE_2__* transform_negotiate; TYPE_2__* session_negotiate; } ;
typedef TYPE_5__ mbedtls_ssl_context ;
struct TYPE_15__ {scalar_t__ transport; scalar_t__ endpoint; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10( mbedtls_ssl_context *VAR_5 )
{

    if( VAR_5->transform_negotiate )
        FUNC_6( VAR_5->transform_negotiate );
    if( VAR_5->session_negotiate )
        FUNC_4( VAR_5->session_negotiate );
    if( VAR_5->handshake )
        FUNC_3( VAR_5->handshake );





    if( VAR_5->transform_negotiate == ((void*)0) )
    {
        VAR_5->transform_negotiate = (mbedtls_ssl_transform*)FUNC_1( 1, sizeof(mbedtls_ssl_transform) );
    }

    if( VAR_5->session_negotiate == ((void*)0) )
    {
        VAR_5->session_negotiate = (mbedtls_ssl_session*)FUNC_1( 1, sizeof(mbedtls_ssl_session) );
    }

    if( VAR_5->handshake == ((void*)0) )
    {
        VAR_5->handshake = (mbedtls_ssl_handshake_params*)FUNC_1( 1, sizeof(mbedtls_ssl_handshake_params) );
    }


    if( VAR_5->handshake == ((void*)0) ||
        VAR_5->transform_negotiate == ((void*)0) ||
        VAR_5->session_negotiate == ((void*)0) )
    {
        FUNC_0( 1, ( "alloc() of ssl sub-contexts failed" ) );

        FUNC_2( VAR_5->handshake );
        FUNC_2( VAR_5->transform_negotiate );
        FUNC_2( VAR_5->session_negotiate );

        VAR_5->handshake = ((void*)0);
        VAR_5->transform_negotiate = ((void*)0);
        VAR_5->session_negotiate = ((void*)0);

        return( VAR_0 );
    }


    FUNC_5( VAR_5->session_negotiate );
    FUNC_9( VAR_5->transform_negotiate );
    FUNC_7( VAR_5->handshake );
    return( 0 );
}
