
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned char uint32_t ;
struct TYPE_10__ {scalar_t__ in_msgtype; scalar_t__* in_msg; scalar_t__ in_hslen; TYPE_2__* session_negotiate; int state; TYPE_1__* handshake; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_9__ {unsigned char* ticket; size_t ticket_len; unsigned char ticket_lifetime; scalar_t__ id_len; } ;
struct TYPE_8__ {scalar_t__ new_session_ticket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 unsigned char* FUNC_2 (int,size_t) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (unsigned char*,size_t) ;
 int FUNC_8 (unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_9( mbedtls_ssl_context *VAR_10 )
{
    int VAR_11;
    uint32_t VAR_12;
    size_t VAR_13;
    unsigned char *VAR_14;
    const unsigned char *VAR_15;

    FUNC_0( 2, ( "=> parse new session ticket" ) );

    if( ( VAR_11 = FUNC_5( VAR_10 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_read_record", VAR_11 );
        return( VAR_11 );
    }

    if( VAR_10->in_msgtype != VAR_8 )
    {
        FUNC_0( 1, ( "bad new session ticket message" ) );
        FUNC_6( VAR_10, VAR_3,
                                        VAR_6 );
        return( VAR_2 );
    }
    if( VAR_10->in_msg[0] != VAR_7 ||
        VAR_10->in_hslen < 6 + FUNC_4( VAR_10 ) )
    {
        FUNC_0( 1, ( "bad new session ticket message" ) );
        FUNC_6( VAR_10, VAR_3,
                                        VAR_4 );
        return( VAR_1 );
    }

    VAR_15 = VAR_10->in_msg + FUNC_4( VAR_10 );

    VAR_12 = ( VAR_15[0] << 24 ) | ( VAR_15[1] << 16 ) |
               ( VAR_15[2] << 8 ) | ( VAR_15[3] );

    VAR_13 = ( VAR_15[4] << 8 ) | ( VAR_15[5] );

    if( VAR_13 + 6 + FUNC_4( VAR_10 ) != VAR_10->in_hslen )
    {
        FUNC_0( 1, ( "bad new session ticket message" ) );
        FUNC_6( VAR_10, VAR_3,
                                        VAR_4 );
        return( VAR_1 );
    }

    FUNC_0( 3, ( "ticket length: %d", VAR_13 ) );


    VAR_10->handshake->new_session_ticket = 0;
    VAR_10->state = VAR_9;





    if( VAR_13 == 0 )
        return( 0 );

    FUNC_7( VAR_10->session_negotiate->ticket,
                      VAR_10->session_negotiate->ticket_len );
    FUNC_3( VAR_10->session_negotiate->ticket );
    VAR_10->session_negotiate->ticket = ((void*)0);
    VAR_10->session_negotiate->ticket_len = 0;

    if( ( VAR_14 = FUNC_2( 1, VAR_13 ) ) == ((void*)0) )
    {
        FUNC_0( 1, ( "ticket alloc failed" ) );
        FUNC_6( VAR_10, VAR_3,
                                        VAR_5 );
        return( VAR_0 );
    }

    FUNC_8( VAR_14, VAR_15 + 6, VAR_13 );

    VAR_10->session_negotiate->ticket = VAR_14;
    VAR_10->session_negotiate->ticket_len = VAR_13;
    VAR_10->session_negotiate->ticket_lifetime = VAR_12;






    FUNC_0( 3, ( "ticket in use, discarding session id" ) );
    VAR_10->session_negotiate->id_len = 0;

    FUNC_0( 2, ( "<= parse new session ticket" ) );

    return( 0 );
}
