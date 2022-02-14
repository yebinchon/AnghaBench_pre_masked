
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ mbedtls_mpi_uint ;
struct TYPE_10__ {int n; int s; scalar_t__* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_7( mbedtls_mpi *VAR_1 )
{
    int VAR_2;
    size_t VAR_3;
    mbedtls_mpi VAR_4;
    mbedtls_mpi_uint VAR_5[VAR_0 + 2];

    if( VAR_1->n < VAR_0 )
        return( 0 );


    VAR_4.s = 1;
    VAR_4.n = VAR_1->n - ( VAR_0 - 1 );
    if( VAR_4.n > VAR_0 + 1 )
        VAR_4.n = VAR_0 + 1;
    VAR_4.p = VAR_5;
    FUNC_6( VAR_5, 0, sizeof VAR_5 );
    FUNC_5( VAR_5, VAR_1->p + VAR_0 - 1, VAR_4.n * sizeof( mbedtls_mpi_uint ) );
    FUNC_0( FUNC_4( &VAR_4, 255 % ( 8 * sizeof( mbedtls_mpi_uint ) ) ) );
    VAR_4.n++;


    FUNC_0( FUNC_3( VAR_1, 255, 0 ) );
    for( VAR_3 = VAR_0; VAR_3 < VAR_1->n; VAR_3++ )
        VAR_1->p[VAR_3] = 0;


    FUNC_0( FUNC_2( &VAR_4, &VAR_4, 19 ) );
    FUNC_0( FUNC_1( VAR_1, VAR_1, &VAR_4 ) );

cleanup:
    return( VAR_2 );
}
