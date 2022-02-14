
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * transform_negotiate; int * transform; int * handshake; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( mbedtls_ssl_context *VAR_0 )
{
    FUNC_0( 3, ( "=> handshake wrapup: final free" ) );




    FUNC_2( VAR_0->handshake );
    FUNC_1( VAR_0->handshake );
    VAR_0->handshake = ((void*)0);




    if( VAR_0->transform )
    {
        FUNC_3( VAR_0->transform );
        FUNC_1( VAR_0->transform );
    }
    VAR_0->transform = VAR_0->transform_negotiate;
    VAR_0->transform_negotiate = ((void*)0);

    FUNC_0( 3, ( "<= handshake wrapup: final free" ) );
}
