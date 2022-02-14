
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s ;
typedef int mbedtls_mpi_uint ;
typedef int mbedtls_mpi ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int,char) ;
 size_t FUNC_4 (char*) ;

int FUNC_5( mbedtls_mpi *VAR_3, int VAR_4, FILE *VAR_5 )
{
    mbedtls_mpi_uint VAR_6;
    size_t VAR_7;
    char *VAR_8;




    char VAR_9[ VAR_2 ];

    FUNC_2( VAR_9, 0, sizeof( VAR_9 ) );
    if( FUNC_0( VAR_9, sizeof( VAR_9 ) - 1, VAR_5 ) == ((void*)0) )
        return( VAR_1 );

    VAR_7 = FUNC_4( VAR_9 );
    if( VAR_7 == sizeof( VAR_9 ) - 2 )
        return( VAR_0 );

    if( VAR_7 > 0 && VAR_9[VAR_7 - 1] == '\n' ) { VAR_7--; VAR_9[VAR_7] = '\0'; }
    if( VAR_7 > 0 && VAR_9[VAR_7 - 1] == '\r' ) { VAR_7--; VAR_9[VAR_7] = '\0'; }

    VAR_8 = VAR_9 + VAR_7;
    while( VAR_8-- > VAR_9 )
        if( FUNC_3( &VAR_6, VAR_4, *VAR_8 ) != 0 )
            break;

    return( FUNC_1( VAR_3, VAR_4, VAR_8 + 1 ) );
}
