
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void mbedtls_des_context ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void * FUNC_2( void )
{
    mbedtls_des_context *VAR_0 = (mbedtls_des_context*)
       FUNC_0( 1, sizeof( mbedtls_des_context ) );

    if( VAR_0 == ((void*)0) )
        return( ((void*)0) );

    FUNC_1( VAR_0 );

    return( VAR_0 );
}
