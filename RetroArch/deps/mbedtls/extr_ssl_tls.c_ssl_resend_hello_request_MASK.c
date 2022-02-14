
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {unsigned char renego_records_seen; TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_5__ {scalar_t__ renego_max_records; int hs_timeout_max; int hs_timeout_min; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_0 )
{


    if( VAR_0->conf->renego_max_records < 0 )
    {
        uint32_t VAR_1 = VAR_0->conf->hs_timeout_max / VAR_0->conf->hs_timeout_min + 1;
        unsigned char VAR_2 = 1;

        while( VAR_1 != 0 )
        {
            ++VAR_2;
            VAR_1 >>= 1;
        }

        if( ++VAR_0->renego_records_seen > VAR_2 )
        {
            FUNC_0( 2, ( "no longer retransmitting hello request" ) );
            return( 0 );
        }
    }

    return( FUNC_1( VAR_0 ) );
}
