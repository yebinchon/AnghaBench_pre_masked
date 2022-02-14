
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_6( const mbedtls_mpi *VAR_1, const mbedtls_mpi *VAR_2 )
{
    mbedtls_mpi VAR_3, VAR_4;
    int VAR_5 = VAR_0;

    FUNC_3( &VAR_3 ); FUNC_3( &VAR_4 );

    FUNC_0( FUNC_4( &VAR_3, 2 ) );
    FUNC_0( FUNC_5( &VAR_4, VAR_2, 2 ) );

    if( FUNC_1( VAR_1, &VAR_3 ) >= 0 &&
        FUNC_1( VAR_1, &VAR_4 ) <= 0 )
    {
        VAR_5 = 0;
    }

cleanup:
    FUNC_2( &VAR_3 ); FUNC_2( &VAR_4 );
    return( VAR_5 );
}
