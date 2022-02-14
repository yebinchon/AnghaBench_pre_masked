
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int out_msglen; int* out_msg; int state; int out_msgtype; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3( mbedtls_ssl_context *VAR_1 )
{
    int VAR_2;

    FUNC_0( 2, ( "=> write change cipher spec" ) );

    VAR_1->out_msgtype = VAR_0;
    VAR_1->out_msglen = 1;
    VAR_1->out_msg[0] = 1;

    VAR_1->state++;

    if( ( VAR_2 = FUNC_2( VAR_1 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_write_record", VAR_2 );
        return( VAR_2 );
    }

    FUNC_0( 2, ( "<= write change cipher spec" ) );

    return( 0 );
}
