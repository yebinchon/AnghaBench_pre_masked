
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; int * conf; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2( mbedtls_ssl_context *VAR_2 )
{
    int VAR_3 = 0;

    if( VAR_2 == ((void*)0) || VAR_2->conf == ((void*)0) )
        return( VAR_0 );

    FUNC_0( 2, ( "=> handshake" ) );

    while( VAR_2->state != VAR_1 )
    {
        VAR_3 = FUNC_1( VAR_2 );

        if( VAR_3 != 0 )
            break;
    }

    FUNC_0( 2, ( "<= handshake" ) );

    return( VAR_3 );
}
