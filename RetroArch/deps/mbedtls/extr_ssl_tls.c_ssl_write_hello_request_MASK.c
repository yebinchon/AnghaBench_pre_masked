
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int out_msglen; int * out_msg; int out_msgtype; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3( mbedtls_ssl_context *VAR_2 )
{
    int VAR_3;

    FUNC_0( 2, ( "=> write hello request" ) );

    VAR_2->out_msglen = 4;
    VAR_2->out_msgtype = VAR_1;
    VAR_2->out_msg[0] = VAR_0;

    if( ( VAR_3 = FUNC_2( VAR_2 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_write_record", VAR_3 );
        return( VAR_3 );
    }

    FUNC_0( 2, ( "<= write hello request" ) );

    return( 0 );
}
