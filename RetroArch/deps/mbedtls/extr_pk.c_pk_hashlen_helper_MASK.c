
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_md_type_t ;
typedef int mbedtls_md_info_t ;


 size_t FUNC_0 (int const*) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2( mbedtls_md_type_t VAR_0, size_t *VAR_1 )
{
    const mbedtls_md_info_t *VAR_2;

    if( *VAR_1 != 0 )
        return( 0 );

    if( ( VAR_2 = FUNC_1( VAR_0 ) ) == ((void*)0) )
        return( -1 );

    *VAR_1 = FUNC_0( VAR_2 );
    return( 0 );
}
