
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi_uint ;
typedef int mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int*,int *,int) ;

__attribute__((used)) static int FUNC_4( mbedtls_mpi *VAR_1, int VAR_2, char **VAR_3 )
{
    int VAR_4;
    mbedtls_mpi_uint VAR_5;

    if( VAR_2 < 2 || VAR_2 > 16 )
        return( VAR_0 );

    FUNC_0( FUNC_3( &VAR_5, VAR_1, VAR_2 ) );
    FUNC_0( FUNC_2( VAR_1, ((void*)0), VAR_1, VAR_2 ) );

    if( FUNC_1( VAR_1, 0 ) != 0 )
        FUNC_0( FUNC_4( VAR_1, VAR_2, VAR_3 ) );

    if( VAR_5 < 10 )
        *(*VAR_3)++ = (char)( VAR_5 + 0x30 );
    else
        *(*VAR_3)++ = (char)( VAR_5 + 0x37 );

cleanup:

    return( VAR_4 );
}
