
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_md_type_t ;
typedef int mbedtls_ecdsa_context ;


 int FUNC_0 (int *,int ,unsigned char const*,size_t,unsigned char const*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( void *VAR_0, mbedtls_md_type_t VAR_1,
                       const unsigned char *VAR_2, size_t VAR_3,
                       const unsigned char *VAR_4, size_t VAR_5 )
{
    int VAR_6;
    mbedtls_ecdsa_context VAR_7;

    FUNC_3( &VAR_7 );

    if( ( VAR_6 = FUNC_2( &VAR_7, VAR_0 ) ) == 0 )
        VAR_6 = FUNC_0( &VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 );

    FUNC_1( &VAR_7 );

    return( VAR_6 );
}
