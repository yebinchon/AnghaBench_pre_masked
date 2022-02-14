
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mbedtls_md_type_t ;
typedef int mbedtls_ecdsa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char const*,size_t,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_1( void *VAR_2, mbedtls_md_type_t VAR_3,
                       const unsigned char *VAR_4, size_t VAR_5,
                       const unsigned char *VAR_6, size_t VAR_7 )
{
    int VAR_8;
    ((void) VAR_3);

    VAR_8 = FUNC_0( (mbedtls_ecdsa_context *) VAR_2,
                                VAR_4, VAR_5, VAR_6, VAR_7 );

    if( VAR_8 == VAR_0 )
        return( VAR_1 );

    return( VAR_8 );
}
