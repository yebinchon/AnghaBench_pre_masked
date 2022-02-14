
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {unsigned char* in_msg; int in_msglen; int state; TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_10__ {unsigned char verify_cookie_len; int * verify_cookie; } ;
struct TYPE_9__ {int max_major_ver; int max_minor_ver; int transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,unsigned char const*,unsigned char) ;
 int FUNC_1 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_2 (int,unsigned char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int*,int*,int ,unsigned char const*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (int *,unsigned char const*,unsigned char) ;

__attribute__((used)) static int FUNC_10( mbedtls_ssl_context *VAR_9 )
{
    const unsigned char *VAR_10 = VAR_9->in_msg + FUNC_4( VAR_9 );
    int VAR_11, VAR_12;
    unsigned char VAR_13;

    FUNC_1( 2, ( "=> parse hello verify request" ) );







    FUNC_0( 3, "server version", VAR_10, 2 );
    FUNC_5( &VAR_11, &VAR_12, VAR_9->conf->transport, VAR_10 );
    VAR_10 += 2;





    if( VAR_11 < VAR_7 ||
        VAR_12 < VAR_8 ||
        VAR_11 > VAR_9->conf->max_major_ver ||
        VAR_12 > VAR_9->conf->max_minor_ver )
    {
        FUNC_1( 1, ( "bad server version" ) );

        FUNC_8( VAR_9, VAR_3,
                                     VAR_5 );

        return( VAR_1 );
    }

    VAR_13 = *VAR_10++;
    FUNC_0( 3, "cookie", VAR_10, VAR_13 );

    if( ( VAR_9->in_msg + VAR_9->in_msglen ) - VAR_10 < VAR_13 )
    {
        FUNC_1( 1,
            ( "cookie length does not match incoming message size" ) );
        FUNC_8( VAR_9, VAR_3,
                                    VAR_4 );
        return( VAR_2 );
    }

    FUNC_3( VAR_9->handshake->verify_cookie );

    VAR_9->handshake->verify_cookie = FUNC_2( 1, VAR_13 );
    if( VAR_9->handshake->verify_cookie == ((void*)0) )
    {
        FUNC_1( 1, ( "alloc failed (%d bytes)", VAR_13 ) );
        return( VAR_0 );
    }

    FUNC_9( VAR_9->handshake->verify_cookie, VAR_10, VAR_13 );
    VAR_9->handshake->verify_cookie_len = VAR_13;


    VAR_9->state = VAR_6;
    FUNC_7( VAR_9 );

    FUNC_6( VAR_9 );

    FUNC_1( 2, ( "<= parse hello verify request" ) );

    return( 0 );
}
