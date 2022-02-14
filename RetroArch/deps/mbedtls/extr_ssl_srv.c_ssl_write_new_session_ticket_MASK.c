
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ tlen ;
struct TYPE_8__ {int* out_msg; int out_msglen; TYPE_2__* handshake; int session_negotiate; TYPE_1__* conf; int out_msgtype; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
typedef int lifetime ;
struct TYPE_7__ {scalar_t__ new_session_ticket; } ;
struct TYPE_6__ {int (* f_ticket_write ) (int ,int ,int*,int*,size_t*,int*) ;int p_ticket; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int*,int*,size_t*,int*) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_3 )
{
    int VAR_4;
    size_t VAR_5;
    uint32_t VAR_6;

    FUNC_0( 2, ( "=> write new session ticket" ) );

    VAR_3->out_msgtype = VAR_2;
    VAR_3->out_msg[0] = VAR_0;
    if( ( VAR_4 = VAR_3->conf->f_ticket_write( VAR_3->conf->p_ticket,
                                VAR_3->session_negotiate,
                                VAR_3->out_msg + 10,
                                VAR_3->out_msg + VAR_1,
                                &VAR_5, &VAR_6 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_ticket_write", VAR_4 );
        VAR_5 = 0;
    }

    VAR_3->out_msg[4] = ( VAR_6 >> 24 ) & 0xFF;
    VAR_3->out_msg[5] = ( VAR_6 >> 16 ) & 0xFF;
    VAR_3->out_msg[6] = ( VAR_6 >> 8 ) & 0xFF;
    VAR_3->out_msg[7] = ( VAR_6 ) & 0xFF;

    VAR_3->out_msg[8] = (unsigned char)( ( VAR_5 >> 8 ) & 0xFF );
    VAR_3->out_msg[9] = (unsigned char)( ( VAR_5 ) & 0xFF );

    VAR_3->out_msglen = 10 + VAR_5;





    VAR_3->handshake->new_session_ticket = 0;

    if( ( VAR_4 = FUNC_2( VAR_3 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_write_record", VAR_4 );
        return( VAR_4 );
    }

    FUNC_0( 2, ( "<= write new session ticket" ) );

    return( 0 );
}
