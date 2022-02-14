
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_dhm_context ;


 int FUNC_0 (char const*,unsigned char**,size_t*) ;
 int FUNC_1 (int *,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,size_t) ;

int FUNC_4( mbedtls_dhm_context *VAR_0, const char *VAR_1 )
{
    int VAR_2;
    size_t VAR_3;
    unsigned char *VAR_4;

    if( ( VAR_2 = FUNC_0( VAR_1, &VAR_4, &VAR_3 ) ) != 0 )
        return( VAR_2 );

    VAR_2 = FUNC_1( VAR_0, VAR_4, VAR_3 );

    FUNC_3( VAR_4, VAR_3 );
    FUNC_2( VAR_4 );

    return( VAR_2 );
}
