
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,unsigned char const*,unsigned char) ;

int FUNC_1( const mbedtls_ecp_group *VAR_1, mbedtls_ecp_point *VAR_2,
                        const unsigned char **VAR_3, size_t VAR_4 )
{
    unsigned char VAR_5;
    const unsigned char *VAR_6;




    if( VAR_4 < 2 )
        return( VAR_0 );

    VAR_5 = *(*VAR_3)++;
    if( VAR_5 < 1 || VAR_5 > VAR_4 - 1 )
        return( VAR_0 );




    VAR_6 = *VAR_3;
    *VAR_3 += VAR_5;

    return FUNC_0( VAR_1, VAR_2, VAR_6, VAR_5 );
}
