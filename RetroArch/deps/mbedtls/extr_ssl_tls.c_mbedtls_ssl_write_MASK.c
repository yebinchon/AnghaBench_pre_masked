
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; int * conf; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_5 (TYPE_1__*,unsigned char const*,size_t) ;

int FUNC_6( mbedtls_ssl_context *VAR_2, const unsigned char *VAR_3, size_t VAR_4 )
{
    int VAR_5;

    FUNC_0( 2, ( "=> write" ) );

    if( VAR_2 == ((void*)0) || VAR_2->conf == ((void*)0) )
        return( VAR_0 );
    if( VAR_2->state != VAR_1 )
    {
        if( ( VAR_5 = FUNC_2( VAR_2 ) ) != 0 )
        {
            FUNC_1( 1, "mbedtls_ssl_handshake", VAR_5 );
            return( VAR_5 );
        }
    }




    VAR_5 = FUNC_4( VAR_2, VAR_3, VAR_4 );


    FUNC_0( 2, ( "<= write" ) );

    return( VAR_5 );
}
