
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_md_info_t ;
typedef int mbedtls_md_context_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int) ;

int FUNC_6( const mbedtls_md_info_t *VAR_1, const unsigned char *VAR_2, size_t VAR_3,
                const unsigned char *VAR_4, size_t VAR_5,
                unsigned char *VAR_6 )
{
    mbedtls_md_context_t VAR_7;
    int VAR_8;

    if( VAR_1 == ((void*)0) )
        return( VAR_0 );

    FUNC_4( &VAR_7 );

    if( ( VAR_8 = FUNC_5( &VAR_7, VAR_1, 1 ) ) != 0 )
        return( VAR_8 );

    FUNC_2( &VAR_7, VAR_2, VAR_3 );
    FUNC_3( &VAR_7, VAR_4, VAR_5 );
    FUNC_1( &VAR_7, VAR_6 );

    FUNC_0( &VAR_7 );

    return( 0 );
}
