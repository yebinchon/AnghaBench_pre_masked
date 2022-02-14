
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ mbedtls_mpi_uint ;
struct TYPE_7__ {int n; int s; scalar_t__* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4( mbedtls_mpi *VAR_2 )
{
    int VAR_3;
    size_t VAR_4;
    mbedtls_mpi VAR_5;
    mbedtls_mpi_uint VAR_6[VAR_1 + 1];




    if( VAR_2->n < VAR_1 )
        return( 0 );


    VAR_5.s = 1;
    VAR_5.n = VAR_2->n - ( VAR_1 - 1 );
    if( VAR_5.n > VAR_1 + 1 )
        VAR_5.n = VAR_1 + 1;
    VAR_5.p = VAR_6;
    FUNC_3( VAR_6, VAR_2->p + VAR_1 - 1, VAR_5.n * sizeof( mbedtls_mpi_uint ) );
    FUNC_0( FUNC_2( &VAR_5, 521 % ( 8 * sizeof( mbedtls_mpi_uint ) ) ) );


    VAR_2->p[VAR_1 - 1] &= VAR_0;
    for( VAR_4 = VAR_1; VAR_4 < VAR_2->n; VAR_4++ )
        VAR_2->p[VAR_4] = 0;


    FUNC_0( FUNC_1( VAR_2, VAR_2, &VAR_5 ) );

cleanup:
    return( VAR_3 );
}
