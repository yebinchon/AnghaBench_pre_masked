
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s ;
typedef int mbedtls_mpi ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t FUNC_1 (char const*,int,size_t,int *) ;
 int FUNC_2 (int const*,int,char*,int,size_t*) ;
 int FUNC_3 (char*,char const*,char*) ;
 int FUNC_4 (char*,int ,int) ;
 size_t FUNC_5 (char const*) ;

int FUNC_6( const char *VAR_2, const mbedtls_mpi *VAR_3, int VAR_4, FILE *VAR_5 )
{
    int VAR_6;
    size_t VAR_7, VAR_8, VAR_9;




    char VAR_10[ VAR_1 ];

    FUNC_4( VAR_10, 0, sizeof( VAR_10 ) );

    FUNC_0( FUNC_2( VAR_3, VAR_4, VAR_10, sizeof( VAR_10 ) - 2, &VAR_7 ) );

    if( VAR_2 == ((void*)0) ) VAR_2 = "";

    VAR_9 = FUNC_5( VAR_2 );
    VAR_8 = FUNC_5( VAR_10 );
    VAR_10[VAR_8++] = '\r';
    VAR_10[VAR_8++] = '\n';

    if( VAR_5 != ((void*)0) )
    {
        if( FUNC_1( VAR_2, 1, VAR_9, VAR_5 ) != VAR_9 ||
            FUNC_1( VAR_10, 1, VAR_8, VAR_5 ) != VAR_8 )
            return( VAR_0 );
    }
    else
        FUNC_3( "%s%s", VAR_2, VAR_10 );

cleanup:

    return( VAR_6 );
}
