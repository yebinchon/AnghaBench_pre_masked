
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t n; int s; int* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,size_t) ;

int FUNC_2( mbedtls_mpi *VAR_0, const mbedtls_mpi *VAR_1, unsigned char VAR_2 )
{
    int VAR_3 = 0;
    size_t VAR_4;


    VAR_2 = (VAR_2 | (unsigned char)-VAR_2) >> 7;

    FUNC_0( FUNC_1( VAR_0, VAR_1->n ) );

    VAR_0->s = VAR_0->s * ( 1 - VAR_2 ) + VAR_1->s * VAR_2;

    for( VAR_4 = 0; VAR_4 < VAR_1->n; VAR_4++ )
        VAR_0->p[VAR_4] = VAR_0->p[VAR_4] * ( 1 - VAR_2 ) + VAR_1->p[VAR_4] * VAR_2;

    for( ; VAR_4 < VAR_0->n; VAR_4++ )
        VAR_0->p[VAR_4] *= ( 1 - VAR_2 );

cleanup:
    return( VAR_3 );
}
