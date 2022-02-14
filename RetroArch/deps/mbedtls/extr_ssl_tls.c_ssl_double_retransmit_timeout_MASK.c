
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_6__ {int retransmit_timeout; } ;
struct TYPE_5__ {int hs_timeout_max; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1( mbedtls_ssl_context *VAR_0 )
{
    uint32_t VAR_1;

    if( VAR_0->handshake->retransmit_timeout >= VAR_0->conf->hs_timeout_max )
        return( -1 );

    VAR_1 = 2 * VAR_0->handshake->retransmit_timeout;


    if( VAR_1 < VAR_0->handshake->retransmit_timeout ||
        VAR_1 > VAR_0->conf->hs_timeout_max )
    {
        VAR_1 = VAR_0->conf->hs_timeout_max;
    }

    VAR_0->handshake->retransmit_timeout = VAR_1;
    FUNC_0( 3, ( "update timeout value to %d millisecs",
                        VAR_0->handshake->retransmit_timeout ) );

    return( 0 );
}
