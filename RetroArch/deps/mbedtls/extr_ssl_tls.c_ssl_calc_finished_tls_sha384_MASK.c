
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int padbuf ;
struct TYPE_11__ {int master; } ;
typedef TYPE_2__ mbedtls_ssl_session ;
struct TYPE_12__ {TYPE_1__* handshake; TYPE_2__* session; TYPE_2__* session_negotiate; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_13__ {scalar_t__ state; } ;
typedef TYPE_4__ mbedtls_sha512_context ;
struct TYPE_10__ {int (* tls_prf ) (int ,int,char const*,unsigned char*,int,unsigned char*,int) ;int fin_sha512; } ;


 int FUNC_0 (int,char*,unsigned char*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,unsigned char*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (int ,int,char const*,unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static void FUNC_8(
                mbedtls_ssl_context *VAR_1, unsigned char *VAR_2, int VAR_3 )
{
    int VAR_4 = 12;
    const char *VAR_5;
    mbedtls_sha512_context VAR_6;
    unsigned char VAR_7[48];

    mbedtls_ssl_session *VAR_8 = VAR_1->session_negotiate;
    if( !VAR_8 )
        VAR_8 = VAR_1->session;

    FUNC_5( &VAR_6 );

    FUNC_1( 2, ( "=> calc  finished tls sha384" ) );

    FUNC_2( &VAR_6, &VAR_1->handshake->fin_sha512 );
    FUNC_0( 4, "finished sha512 state", (unsigned char *)
                   VAR_6, sizeof( VAR_6 ) );


    VAR_5 = ( VAR_3 == VAR_0 )
             ? "client finished"
             : "server finished";

    FUNC_3( &VAR_6, VAR_7 );

    VAR_1->handshake->tls_prf( VAR_8->master, 48, VAR_5,
                             VAR_7, 48, VAR_2, VAR_4 );

    FUNC_0( 3, "calc finished result", VAR_2, VAR_4 );

    FUNC_4( &VAR_6 );

    FUNC_6( VAR_7, sizeof( VAR_7 ) );

    FUNC_1( 2, ( "<= calc  finished" ) );
}
