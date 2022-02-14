
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ renego_status; int state; TYPE_1__* handshake; TYPE_2__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_8__ {scalar_t__ transport; scalar_t__ endpoint; } ;
struct TYPE_7__ {int out_msg_seq; int in_msg_seq; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_5 )
{
    int VAR_6;

    FUNC_0( 2, ( "=> renegotiate" ) );

    if( ( VAR_6 = FUNC_3( VAR_5 ) ) != 0 )
        return( VAR_6 );
    VAR_5->state = VAR_0;
    VAR_5->renego_status = VAR_2;

    if( ( VAR_6 = FUNC_2( VAR_5 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_handshake", VAR_6 );
        return( VAR_6 );
    }

    FUNC_0( 2, ( "<= renegotiate" ) );

    return( 0 );
}
