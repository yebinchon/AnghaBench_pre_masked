
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* hostname; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

int FUNC_3( mbedtls_ssl_context *VAR_3, const char *VAR_4 )
{
    size_t VAR_5;

    if( VAR_4 == ((void*)0) )
        return( VAR_1 );

    VAR_5 = FUNC_2( VAR_4 );

    if( VAR_5 + 1 == 0 )
        return( VAR_1 );

    if( VAR_5 > VAR_2 )
        return( VAR_1 );

    VAR_3->hostname = (char*)FUNC_0( 1, VAR_5 + 1 );

    if( VAR_3->hostname == ((void*)0) )
        return( VAR_0 );

    FUNC_1( VAR_3->hostname, VAR_4, VAR_5 );

    VAR_3->hostname[VAR_5] = '\0';

    return( 0 );
}
