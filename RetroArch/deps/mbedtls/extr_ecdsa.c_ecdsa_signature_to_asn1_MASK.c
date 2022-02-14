
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi ;
typedef int buf ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char**,unsigned char*,int const*) ;
 int FUNC_3 (unsigned char**,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5( const mbedtls_mpi *VAR_3, const mbedtls_mpi *VAR_4,
                                    unsigned char *VAR_5, size_t *VAR_6 )
{
    int VAR_7;
    unsigned char VAR_8[VAR_2];
    unsigned char *VAR_9 = VAR_8 + sizeof( VAR_8 );
    size_t VAR_10 = 0;

    FUNC_0( VAR_10, FUNC_2( &VAR_9, VAR_8, VAR_4 ) );
    FUNC_0( VAR_10, FUNC_2( &VAR_9, VAR_8, VAR_3 ) );

    FUNC_0( VAR_10, FUNC_1( &VAR_9, VAR_8, VAR_10 ) );
    FUNC_0( VAR_10, FUNC_3( &VAR_9, VAR_8,
                                       VAR_0 | VAR_1 ) );

    FUNC_4( VAR_5, VAR_9, VAR_10 );
    *VAR_6 = VAR_10;

    return( 0 );
}
