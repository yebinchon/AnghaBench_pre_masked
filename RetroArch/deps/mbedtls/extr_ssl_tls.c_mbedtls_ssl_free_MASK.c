
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* cli_id; struct TYPE_10__* hostname; struct TYPE_10__* session; struct TYPE_10__* session_negotiate; struct TYPE_10__* transform_negotiate; struct TYPE_10__* handshake; struct TYPE_10__* transform; struct TYPE_10__* compress_buf; struct TYPE_10__* in_buf; struct TYPE_10__* out_buf; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8( mbedtls_ssl_context *VAR_1 )
{
    if( VAR_1 == ((void*)0) )
        return;

    FUNC_0( 2, ( "=> free" ) );

    if( VAR_1->out_buf != ((void*)0) )
    {
        FUNC_6( VAR_1->out_buf, VAR_0 );
        FUNC_1( VAR_1->out_buf );
    }

    if( VAR_1->in_buf != ((void*)0) )
    {
        FUNC_6( VAR_1->in_buf, VAR_0 );
        FUNC_1( VAR_1->in_buf );
    }
    if( VAR_1->transform )
    {
        FUNC_5( VAR_1->transform );
        FUNC_1( VAR_1->transform );
    }

    if( VAR_1->handshake )
    {
        FUNC_2( VAR_1->handshake );
        FUNC_5( VAR_1->transform_negotiate );
        FUNC_4( VAR_1->session_negotiate );

        FUNC_1( VAR_1->handshake );
        FUNC_1( VAR_1->transform_negotiate );
        FUNC_1( VAR_1->session_negotiate );
    }

    if( VAR_1->session )
    {
        FUNC_4( VAR_1->session );
        FUNC_1( VAR_1->session );
    }
    FUNC_0( 2, ( "<= free" ) );


    FUNC_6( VAR_1, sizeof( mbedtls_ssl_context ) );
}
