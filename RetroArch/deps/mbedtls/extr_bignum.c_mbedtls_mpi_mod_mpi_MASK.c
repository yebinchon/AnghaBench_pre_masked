
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,int const*,int const*) ;
 scalar_t__ FUNC_2 (int const*,int ) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int *,int const*,int const*,int const*) ;
 int FUNC_5 (int const*,int const*,int const*) ;

int FUNC_6( mbedtls_mpi *VAR_1, const mbedtls_mpi *VAR_2, const mbedtls_mpi *VAR_3 )
{
    int VAR_4;

    if( FUNC_2( VAR_3, 0 ) < 0 )
        return( VAR_0 );

    FUNC_0( FUNC_4( ((void*)0), VAR_1, VAR_2, VAR_3 ) );

    while( FUNC_2( VAR_1, 0 ) < 0 )
      FUNC_0( FUNC_1( VAR_1, VAR_1, VAR_3 ) );

    while( FUNC_3( VAR_1, VAR_3 ) >= 0 )
      FUNC_0( FUNC_5( VAR_1, VAR_1, VAR_3 ) );

cleanup:

    return( VAR_4 );
}
