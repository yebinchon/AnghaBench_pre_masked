
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ in_msgtype; int in_msglen; int* in_msg; scalar_t__ in_epoch; scalar_t__ minor_ver; int* in_iv; int state; TYPE_2__* transform_negotiate; int in_ctr; TYPE_1__* conf; int session_negotiate; int session_in; TYPE_2__* transform_in; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_10__ {int ivlen; int* fixed_ivlen; } ;
struct TYPE_9__ {scalar_t__ transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_3__*) ;

int FUNC_7( mbedtls_ssl_context *VAR_12 )
{
    int VAR_13;

    FUNC_0( 2, ( "=> parse change cipher spec" ) );

    if( ( VAR_13 = FUNC_3( VAR_12 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_read_record", VAR_13 );
        return( VAR_13 );
    }

    if( VAR_12->in_msgtype != VAR_10 )
    {
        FUNC_0( 1, ( "bad change cipher spec message" ) );
        FUNC_4( VAR_12, VAR_4,
                                        VAR_7 );
        return( VAR_3 );
    }

    if( VAR_12->in_msglen != 1 || VAR_12->in_msg[0] != 1 )
    {
        FUNC_0( 1, ( "bad change cipher spec message" ) );
        FUNC_4( VAR_12, VAR_4,
                                        VAR_5 );
        return( VAR_0 );
    }





    FUNC_0( 3, ( "switching to new transform spec for inbound data" ) );
    VAR_12->transform_in = VAR_12->transform_negotiate;
    VAR_12->session_in = VAR_12->session_negotiate;
    FUNC_5( VAR_12->in_ctr, 0, 8 );




    if( VAR_12->minor_ver >= VAR_9 )
    {
        VAR_12->in_msg = VAR_12->in_iv + VAR_12->transform_negotiate->ivlen -
                      VAR_12->transform_negotiate->fixed_ivlen;
    }
    else
        VAR_12->in_msg = VAR_12->in_iv;
    VAR_12->state++;

    FUNC_0( 2, ( "<= parse change cipher spec" ) );

    return( 0 );
}
