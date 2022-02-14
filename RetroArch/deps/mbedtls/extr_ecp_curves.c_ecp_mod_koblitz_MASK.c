
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ mbedtls_mpi_uint ;
struct TYPE_10__ {size_t n; int s; scalar_t__* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_6( mbedtls_mpi *VAR_2, mbedtls_mpi_uint *VAR_3, size_t VAR_4,
                                   size_t VAR_5, size_t VAR_6, mbedtls_mpi_uint VAR_7 )
{
    int VAR_8;
    size_t VAR_9;
    mbedtls_mpi VAR_10, VAR_11;
    mbedtls_mpi_uint VAR_12[VAR_0 + VAR_1 + 1];

    if( VAR_2->n < VAR_4 )
        return( 0 );


    VAR_11.s = 1;
    VAR_11.p = VAR_3;
    VAR_11.n = VAR_1;


    VAR_10.s = 1;
    VAR_10.p = VAR_12;


    VAR_10.n = VAR_2->n - ( VAR_4 - VAR_5 );
    if( VAR_10.n > VAR_4 + VAR_5 )
        VAR_10.n = VAR_4 + VAR_5;
    FUNC_5( VAR_12, 0, sizeof VAR_12 );
    FUNC_4( VAR_12, VAR_2->p + VAR_4 - VAR_5, VAR_10.n * sizeof( mbedtls_mpi_uint ) );
    if( VAR_6 != 0 )
        FUNC_0( FUNC_3( &VAR_10, VAR_6 ) );
    VAR_10.n += VAR_11.n;


    if( VAR_7 != 0 )
        VAR_2->p[VAR_4 - 1] &= VAR_7;
    for( VAR_9 = VAR_4; VAR_9 < VAR_2->n; VAR_9++ )
        VAR_2->p[VAR_9] = 0;


    FUNC_0( FUNC_2( &VAR_10, &VAR_10, &VAR_11 ) );
    FUNC_0( FUNC_1( VAR_2, VAR_2, &VAR_10 ) );




    VAR_10.n = VAR_2->n - ( VAR_4 - VAR_5 );
    if( VAR_10.n > VAR_4 + VAR_5 )
        VAR_10.n = VAR_4 + VAR_5;
    FUNC_5( VAR_12, 0, sizeof VAR_12 );
    FUNC_4( VAR_12, VAR_2->p + VAR_4 - VAR_5, VAR_10.n * sizeof( mbedtls_mpi_uint ) );
    if( VAR_6 != 0 )
        FUNC_0( FUNC_3( &VAR_10, VAR_6 ) );
    VAR_10.n += VAR_11.n;


    if( VAR_7 != 0 )
        VAR_2->p[VAR_4 - 1] &= VAR_7;
    for( VAR_9 = VAR_4; VAR_9 < VAR_2->n; VAR_9++ )
        VAR_2->p[VAR_9] = 0;


    FUNC_0( FUNC_2( &VAR_10, &VAR_10, &VAR_11 ) );
    FUNC_0( FUNC_1( VAR_2, VAR_2, &VAR_10 ) );

cleanup:
    return( VAR_8 );
}
