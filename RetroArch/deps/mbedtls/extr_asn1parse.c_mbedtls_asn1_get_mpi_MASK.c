
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*,int ) ;
 int FUNC_1 (int *,unsigned char*,size_t) ;

int FUNC_2( unsigned char **VAR_1,
                  const unsigned char *VAR_2,
                  mbedtls_mpi *VAR_3 )
{
    int VAR_4;
    size_t VAR_5;

    if( ( VAR_4 = FUNC_0( VAR_1, VAR_2, &VAR_5, VAR_0 ) ) != 0 )
        return( VAR_4 );

    VAR_4 = FUNC_1( VAR_3, *VAR_1, VAR_5 );

    *VAR_1 += VAR_5;

    return( VAR_4 );
}
