
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int,size_t*,unsigned char*,size_t) ;

int FUNC_1( const mbedtls_ecp_group *VAR_1, const mbedtls_ecp_point *VAR_2,
                         int VAR_3, size_t *VAR_4,
                         unsigned char *VAR_5, size_t VAR_6 )
{
    int VAR_7;




    if( VAR_6 < 1 )
        return( VAR_0 );

    if( ( VAR_7 = FUNC_0( VAR_1, VAR_2, VAR_3,
                    VAR_4, VAR_5 + 1, VAR_6 - 1) ) != 0 )
        return( VAR_7 );




    VAR_5[0] = (unsigned char) *VAR_4;
    ++*VAR_4;

    return( 0 );
}
