
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; scalar_t__ renego_status; TYPE_1__* conf; scalar_t__ out_ctr; scalar_t__ in_ctr; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_6__ {scalar_t__ disable_renegotiation; scalar_t__ renego_period; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 size_t FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_3 )
{
    size_t VAR_4 = FUNC_3( VAR_3 );
    int VAR_5;
    int VAR_6;

    if( VAR_3->state != VAR_0 ||
        VAR_3->renego_status == VAR_2 ||
        VAR_3->conf->disable_renegotiation == VAR_1 )
    {
        return( 0 );
    }

    VAR_5 = FUNC_2( VAR_3->in_ctr + VAR_4,
                        VAR_3->conf->renego_period + VAR_4, 8 - VAR_4 );
    VAR_6 = FUNC_2( VAR_3->out_ctr + VAR_4,
                          VAR_3->conf->renego_period + VAR_4, 8 - VAR_4 );

    if( VAR_5 <= 0 && VAR_6 <= 0 )
    {
        return( 0 );
    }

    FUNC_0( 1, ( "record counter limit reached: renegotiate" ) );
    return( FUNC_1( VAR_3 ) );
}
