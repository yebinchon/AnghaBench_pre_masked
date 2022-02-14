
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int out_msglen; TYPE_1__* conf; int state; int * out_msg; int out_msgtype; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_6__ {scalar_t__ transport; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_3 )
{
    int VAR_4;

    FUNC_0( 2, ( "=> write server hello done" ) );

    VAR_3->out_msglen = 4;
    VAR_3->out_msgtype = VAR_1;
    VAR_3->out_msg[0] = VAR_0;

    VAR_3->state++;






    if( ( VAR_4 = FUNC_3( VAR_3 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_write_record", VAR_4 );
        return( VAR_4 );
    }

    FUNC_0( 2, ( "<= write server hello done" ) );

    return( 0 );
}
