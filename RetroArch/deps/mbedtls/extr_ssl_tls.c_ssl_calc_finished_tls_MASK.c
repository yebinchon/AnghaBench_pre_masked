
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int padbuf ;
struct TYPE_16__ {int master; } ;
typedef TYPE_2__ mbedtls_ssl_session ;
struct TYPE_17__ {TYPE_1__* handshake; TYPE_2__* session; TYPE_2__* session_negotiate; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_18__ {scalar_t__ state; } ;
typedef TYPE_4__ mbedtls_sha1_context ;
struct TYPE_19__ {scalar_t__ state; } ;
typedef TYPE_5__ mbedtls_md5_context ;
struct TYPE_15__ {int (* tls_prf ) (int ,int,char const*,unsigned char*,int,unsigned char*,int) ;int fin_sha1; int fin_md5; } ;


 int FUNC_0 (int,char*,unsigned char*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_5__*,unsigned char*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_4__*,unsigned char*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (unsigned char*,int) ;
 int FUNC_11 (int ,int,char const*,unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static void FUNC_12(
                mbedtls_ssl_context *VAR_1, unsigned char *VAR_2, int VAR_3 )
{
    int VAR_4 = 12;
    const char *VAR_5;
    mbedtls_md5_context VAR_6;
    mbedtls_sha1_context VAR_7;
    unsigned char VAR_8[36];

    mbedtls_ssl_session *VAR_9 = VAR_1->session_negotiate;
    if( !VAR_9 )
        VAR_9 = VAR_1->session;

    FUNC_1( 2, ( "=> calc  finished tls" ) );

    FUNC_5( &VAR_6 );
    FUNC_9( &VAR_7 );

    FUNC_2( &VAR_6, &VAR_1->handshake->fin_md5 );
    FUNC_6( &VAR_7, &VAR_1->handshake->fin_sha1 );
    FUNC_0( 4, "finished  md5 state", (unsigned char *)
                    VAR_6, sizeof( VAR_6 ) );



    FUNC_0( 4, "finished sha1 state", (unsigned char *)
                   VAR_7, sizeof( VAR_7 ) );


    VAR_5 = ( VAR_3 == VAR_0 )
             ? "client finished"
             : "server finished";

    FUNC_3( &VAR_6, VAR_8 );
    FUNC_7( &VAR_7, VAR_8 + 16 );

    VAR_1->handshake->tls_prf( VAR_9->master, 48, VAR_5,
                             VAR_8, 36, VAR_2, VAR_4 );

    FUNC_0( 3, "calc finished result", VAR_2, VAR_4 );

    FUNC_4( &VAR_6 );
    FUNC_8( &VAR_7 );

    FUNC_10( VAR_8, sizeof( VAR_8 ) );

    FUNC_1( 2, ( "<= calc  finished" ) );
}
