
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; scalar_t__* p; struct TYPE_9__* next; int len; } ;
typedef TYPE_2__ mbedtls_ssl_flight_item ;
struct TYPE_10__ {scalar_t__ out_msgtype; scalar_t__ state; TYPE_1__* handshake; int out_msg; int out_msglen; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_8__ {scalar_t__ retransmit_state; int retransmit_timeout; TYPE_2__* cur_msg; TYPE_2__* flight; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;

int FUNC_7( mbedtls_ssl_context *VAR_6 )
{
    FUNC_1( 2, ( "=> mbedtls_ssl_resend" ) );

    if( VAR_6->handshake->retransmit_state != VAR_4 )
    {
        FUNC_1( 2, ( "initialise resending" ) );

        VAR_6->handshake->cur_msg = VAR_6->handshake->flight;
        FUNC_6( VAR_6 );

        VAR_6->handshake->retransmit_state = VAR_4;
    }

    while( VAR_6->handshake->cur_msg != ((void*)0) )
    {
        int VAR_7;
        mbedtls_ssl_flight_item *VAR_8 = VAR_6->handshake->cur_msg;




        if( VAR_8->type == VAR_2 &&
            VAR_8->p[0] == VAR_1 )
        {
            FUNC_6( VAR_6 );
        }

        FUNC_4( VAR_6->out_msg, VAR_8->p, VAR_8->len );
        VAR_6->out_msglen = VAR_8->len;
        VAR_6->out_msgtype = VAR_8->type;

        VAR_6->handshake->cur_msg = VAR_8->next;

        FUNC_0( 3, "resent handshake message header", VAR_6->out_msg, 12 );

        if( ( VAR_7 = FUNC_3( VAR_6 ) ) != 0 )
        {
            FUNC_2( 1, "mbedtls_ssl_write_record", VAR_7 );
            return( VAR_7 );
        }
    }

    if( VAR_6->state == VAR_0 )
        VAR_6->handshake->retransmit_state = VAR_3;
    else
    {
        VAR_6->handshake->retransmit_state = VAR_5;
        FUNC_5( VAR_6, VAR_6->handshake->retransmit_timeout );
    }

    FUNC_1( 2, ( "<= mbedtls_ssl_resend" ) );

    return( 0 );
}
