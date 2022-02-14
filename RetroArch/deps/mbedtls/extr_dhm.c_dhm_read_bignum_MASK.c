
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1( mbedtls_mpi *VAR_2,
                            unsigned char **VAR_3,
                            const unsigned char *VAR_4 )
{
    int VAR_5, VAR_6;

    if( VAR_4 - *VAR_3 < 2 )
        return( VAR_0 );

    VAR_6 = ( (*VAR_3)[0] << 8 ) | (*VAR_3)[1];
    (*VAR_3) += 2;

    if( (int)( VAR_4 - *VAR_3 ) < VAR_6 )
        return( VAR_0 );

    if( ( VAR_5 = FUNC_0( VAR_2, *VAR_3, VAR_6 ) ) != 0 )
        return( VAR_1 + VAR_5 );

    (*VAR_3) += VAR_6;

    return( 0 );
}
