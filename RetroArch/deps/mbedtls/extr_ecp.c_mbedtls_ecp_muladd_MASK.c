
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi ;
typedef int mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int const*,int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10( mbedtls_ecp_group *VAR_2, mbedtls_ecp_point *VAR_3,
             const mbedtls_mpi *VAR_4, const mbedtls_ecp_point *VAR_5,
             const mbedtls_mpi *VAR_6, const mbedtls_ecp_point *VAR_7 )
{
    int VAR_8;
    mbedtls_ecp_point VAR_9;




    if( FUNC_2( VAR_2 ) != VAR_0 )
        return( VAR_1 );

    FUNC_6( &VAR_9 );

    FUNC_0( FUNC_4( VAR_2, &VAR_9, VAR_4, VAR_5 ) );
    FUNC_0( FUNC_4( VAR_2, VAR_3, VAR_6, VAR_7 ) );
    FUNC_0( FUNC_1( VAR_2, VAR_3, &VAR_9, VAR_3 ) );
    FUNC_0( FUNC_3( VAR_2, VAR_3 ) );

cleanup:
    FUNC_5( &VAR_9 );

    return( VAR_8 );
}
