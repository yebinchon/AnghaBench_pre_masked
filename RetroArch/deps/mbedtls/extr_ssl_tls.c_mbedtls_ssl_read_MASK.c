
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ state; scalar_t__* in_offt; int (* f_get_timer ) (int ) ;size_t in_msglen; scalar_t__ in_msgtype; scalar_t__* in_msg; scalar_t__ in_hslen; scalar_t__ secure_renegotiation; scalar_t__ minor_ver; scalar_t__ renego_status; scalar_t__ renego_records_seen; scalar_t__ keep_current_message; TYPE_2__* conf; int p_timer; TYPE_1__* handshake; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_16__ {scalar_t__ transport; scalar_t__ endpoint; scalar_t__ disable_renegotiation; scalar_t__ allow_legacy_renegotiation; scalar_t__ renego_max_records; int read_timeout; } ;
struct TYPE_15__ {scalar_t__ retransmit_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (unsigned char*,scalar_t__*,size_t) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ) ;

int FUNC_14( mbedtls_ssl_context *VAR_26, unsigned char *VAR_27, size_t VAR_28 )
{
    int VAR_29;
    size_t VAR_30;

    if( VAR_26 == ((void*)0) || VAR_26->conf == ((void*)0) )
        return( VAR_0 );

    FUNC_0( 2, ( "=> read" ) );
    if( VAR_26->state != VAR_10 )
    {
        VAR_29 = FUNC_3( VAR_26 );
        if( VAR_29 != VAR_4 &&
            VAR_29 != 0 )
        {
            FUNC_1( 1, "mbedtls_ssl_handshake", VAR_29 );
            return( VAR_29 );
        }
    }
    if( VAR_26->in_offt == ((void*)0) )
    {

        if( VAR_26->f_get_timer != ((void*)0) &&
            VAR_26->f_get_timer( VAR_26->p_timer ) == -1 )
        {
            FUNC_11( VAR_26, VAR_26->conf->read_timeout );
        }

        if( ( VAR_29 = FUNC_5( VAR_26 ) ) != 0 )
        {
            if( VAR_29 == VAR_1 )
                return( 0 );

            FUNC_1( 1, "mbedtls_ssl_read_record", VAR_29 );
            return( VAR_29 );
        }

        if( VAR_26->in_msglen == 0 &&
            VAR_26->in_msgtype == VAR_20 )
        {



            if( ( VAR_29 = FUNC_5( VAR_26 ) ) != 0 )
            {
                if( VAR_29 == VAR_1 )
                    return( 0 );

                FUNC_1( 1, "mbedtls_ssl_read_record", VAR_29 );
                return( VAR_29 );
            }
        }
        if( VAR_26->in_msgtype == VAR_19 )
        {
            FUNC_0( 2, ( "ignoring non-fatal non-closure alert" ) );
            return( VAR_5 );
        }

        if( VAR_26->in_msgtype != VAR_20 )
        {
            FUNC_0( 1, ( "bad application data message" ) );
            return( VAR_3 );
        }

        VAR_26->in_offt = VAR_26->in_msg;



        if( VAR_26->state == VAR_10 )
            FUNC_11( VAR_26, 0 );
    }

    VAR_30 = ( VAR_28 < VAR_26->in_msglen )
        ? VAR_28 : VAR_26->in_msglen;

    FUNC_8( VAR_27, VAR_26->in_offt, VAR_30 );
    VAR_26->in_msglen -= VAR_30;

    if( VAR_26->in_msglen == 0 )
    {

        VAR_26->in_offt = ((void*)0);
        VAR_26->keep_current_message = 0;
    }
    else
    {

        VAR_26->in_offt += VAR_30;
    }

    FUNC_0( 2, ( "<= read" ) );

    return( (int) VAR_30 );
}
