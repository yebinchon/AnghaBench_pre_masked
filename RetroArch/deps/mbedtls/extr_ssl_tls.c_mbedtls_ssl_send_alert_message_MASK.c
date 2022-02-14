
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int out_msglen; unsigned char* out_msg; int out_msgtype; int * conf; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3( mbedtls_ssl_context *VAR_2,
                            unsigned char VAR_3,
                            unsigned char VAR_4 )
{
    int VAR_5;

    if( VAR_2 == ((void*)0) || VAR_2->conf == ((void*)0) )
        return( VAR_0 );

    FUNC_0( 2, ( "=> send alert message" ) );
    FUNC_0( 3, ( "send alert level=%u message=%u", VAR_3, VAR_4 ));

    VAR_2->out_msgtype = VAR_1;
    VAR_2->out_msglen = 2;
    VAR_2->out_msg[0] = VAR_3;
    VAR_2->out_msg[1] = VAR_4;

    if( ( VAR_5 = FUNC_2( VAR_2 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_write_record", VAR_5 );
        return( VAR_5 );
    }
    FUNC_0( 2, ( "<= send alert message" ) );

    return( 0 );
}
