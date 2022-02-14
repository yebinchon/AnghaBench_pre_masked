
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ in_msglen; scalar_t__ in_hslen; int* in_msg; TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_9__ {unsigned int in_msg_seq; int in_flight_start_seq; int * hs_msg; } ;
struct TYPE_8__ {scalar_t__ transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int*,char*,int) ;
 int FUNC_5 (TYPE_3__*) ;

int FUNC_6( mbedtls_ssl_context *VAR_5 )
{
    if( VAR_5->in_msglen < FUNC_2( VAR_5 ) )
    {
        FUNC_0( 1, ( "handshake message too short: %d",
                            VAR_5->in_msglen ) );
        return( VAR_1 );
    }

    VAR_5->in_hslen = FUNC_2( VAR_5 ) + (
                    ( VAR_5->in_msg[1] << 16 ) |
                    ( VAR_5->in_msg[2] << 8 ) |
                      VAR_5->in_msg[3] );

    FUNC_0( 3, ( "handshake message: msglen ="
                        " %d, type = %d, hslen = %d",
                        VAR_5->in_msglen, VAR_5->in_msg[0], VAR_5->in_hslen ) );
    if( VAR_5->in_msglen < VAR_5->in_hslen )
    {
        FUNC_0( 1, ( "TLS handshake fragmentation not supported" ) );
        return( VAR_0 );
    }

    return( 0 );
}
