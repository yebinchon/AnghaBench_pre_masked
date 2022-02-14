
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned char*,size_t) ;

int FUNC_2( mbedtls_mpi *VAR_2, size_t VAR_3,
                     int (*VAR_4)(void *, unsigned char *, size_t),
                     void *VAR_5 )
{
    int VAR_6;
    unsigned char VAR_7[VAR_1];

    if( VAR_3 > VAR_1 )
        return( VAR_0 );

    FUNC_0( VAR_4( VAR_5, VAR_7, VAR_3 ) );
    FUNC_0( FUNC_1( VAR_2, VAR_7, VAR_3 ) );

cleanup:
    return( VAR_6 );
}
