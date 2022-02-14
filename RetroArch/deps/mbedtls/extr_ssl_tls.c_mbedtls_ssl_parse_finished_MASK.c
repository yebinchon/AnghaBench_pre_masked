
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ in_msgtype; scalar_t__ minor_ver; scalar_t__* in_msg; scalar_t__ in_hslen; unsigned int verify_data_len; TYPE_2__* conf; int state; TYPE_1__* handshake; int peer_verify_data; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_11__ {int endpoint; scalar_t__ transport; } ;
struct TYPE_10__ {scalar_t__ resume; int (* calc_finished ) (TYPE_3__*,unsigned char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (scalar_t__*,unsigned char*,unsigned int) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (int ,unsigned char*,unsigned int) ;
 int FUNC_8 (TYPE_3__*,unsigned char*,int) ;

int FUNC_9( mbedtls_ssl_context *VAR_14 )
{
    int VAR_15;
    unsigned int VAR_16;
    unsigned char VAR_17[VAR_13];

    FUNC_0( 2, ( "=> parse finished" ) );

    VAR_14->handshake->calc_finished( VAR_14, VAR_17, VAR_14->conf->endpoint ^ 1 );

    if( ( VAR_15 = FUNC_3( VAR_14 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_read_record", VAR_15 );
        return( VAR_15 );
    }

    if( VAR_14->in_msgtype != VAR_11 )
    {
        FUNC_0( 1, ( "bad finished message" ) );
        FUNC_6( VAR_14, VAR_2,
                                        VAR_4 );
        return( VAR_1 );
    }







        VAR_16 = 12;

    if( VAR_14->in_msg[0] != VAR_7 ||
        VAR_14->in_hslen != FUNC_2( VAR_14 ) + VAR_16 )
    {
        FUNC_0( 1, ( "bad finished message" ) );
        FUNC_6( VAR_14, VAR_2,
                                        VAR_3 );
        return( VAR_0 );
    }

    if( FUNC_5( VAR_14->in_msg + FUNC_2( VAR_14 ),
                      VAR_17, VAR_16 ) != 0 )
    {
        FUNC_0( 1, ( "bad finished message" ) );
        FUNC_6( VAR_14, VAR_2,
                                        VAR_3 );
        return( VAR_0 );
    }






    if( VAR_14->handshake->resume != 0 )
    {
    }
    else
        VAR_14->state++;






    FUNC_0( 2, ( "<= parse finished" ) );

    return( 0 );
}
