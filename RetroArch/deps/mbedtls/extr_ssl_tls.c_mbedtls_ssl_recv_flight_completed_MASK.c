
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ in_msgtype; scalar_t__* in_msg; TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_5__ {int retransmit_state; int in_msg_seq; int in_flight_start_seq; int * cur_msg; int * flight; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;

void FUNC_2( mbedtls_ssl_context *VAR_4 )
{

    FUNC_0( VAR_4->handshake->flight );
    VAR_4->handshake->flight = ((void*)0);
    VAR_4->handshake->cur_msg = ((void*)0);


    VAR_4->handshake->in_flight_start_seq = VAR_4->handshake->in_msg_seq;


    FUNC_1( VAR_4, 0 );

    if( VAR_4->in_msgtype == VAR_1 &&
        VAR_4->in_msg[0] == VAR_0 )
    {
        VAR_4->handshake->retransmit_state = VAR_2;
    }
    else
        VAR_4->handshake->retransmit_state = VAR_3;
}
