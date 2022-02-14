
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char mbedtls_mpi_uint ;
struct TYPE_5__ {size_t n; int s; unsigned char* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,size_t) ;

int FUNC_2( mbedtls_mpi *VAR_0, mbedtls_mpi *VAR_1, unsigned char VAR_2 )
{
    int VAR_3, VAR_4;
    size_t VAR_5;
    mbedtls_mpi_uint VAR_6;

    if( VAR_0 == VAR_1 )
        return( 0 );


    VAR_2 = (VAR_2 | (unsigned char)-VAR_2) >> 7;

    FUNC_0( FUNC_1( VAR_0, VAR_1->n ) );
    FUNC_0( FUNC_1( VAR_1, VAR_0->n ) );

    VAR_4 = VAR_0->s;
    VAR_0->s = VAR_0->s * ( 1 - VAR_2 ) + VAR_1->s * VAR_2;
    VAR_1->s = VAR_1->s * ( 1 - VAR_2 ) + VAR_4 * VAR_2;


    for( VAR_5 = 0; VAR_5 < VAR_0->n; VAR_5++ )
    {
        VAR_6 = VAR_0->p[VAR_5];
        VAR_0->p[VAR_5] = VAR_0->p[VAR_5] * ( 1 - VAR_2 ) + VAR_1->p[VAR_5] * VAR_2;
        VAR_1->p[VAR_5] = VAR_1->p[VAR_5] * ( 1 - VAR_2 ) + VAR_6 * VAR_2;
    }

cleanup:
    return( VAR_3 );
}
