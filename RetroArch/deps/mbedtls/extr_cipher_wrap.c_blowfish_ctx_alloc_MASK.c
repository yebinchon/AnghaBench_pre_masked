
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void mbedtls_blowfish_context ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static void * FUNC_2( void )
{
    mbedtls_blowfish_context *VAR_0 = (mbedtls_blowfish_context*)FUNC_1( 1, sizeof( mbedtls_blowfish_context ) );

    if( VAR_0 == ((void*)0) )
        return( ((void*)0) );

    FUNC_0( VAR_0 );

    return( VAR_0 );
}
