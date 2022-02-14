
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_8__ {int n; int* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_1 (int*,int*,size_t) ;
 int FUNC_2 (int*,int ,size_t) ;
 int FUNC_3 (size_t,int*,int*,int) ;
 int FUNC_4 (size_t,int*,int*) ;

__attribute__((used)) static int FUNC_5( mbedtls_mpi *VAR_2, const mbedtls_mpi *VAR_3, const mbedtls_mpi *VAR_4, mbedtls_mpi_uint VAR_5,
                         const mbedtls_mpi *VAR_6 )
{
    size_t VAR_7, VAR_8, VAR_9;
    mbedtls_mpi_uint VAR_10, VAR_11, *VAR_12;

    if( VAR_6->n < VAR_4->n + 1 || VAR_6->p == ((void*)0) )
        return( VAR_0 );

    FUNC_2( VAR_6->p, 0, VAR_6->n * VAR_1 );

    VAR_12 = VAR_6->p;
    VAR_8 = VAR_4->n;
    VAR_9 = ( VAR_3->n < VAR_8 ) ? VAR_3->n : VAR_8;

    for( VAR_7 = 0; VAR_7 < VAR_8; VAR_7++ )
    {



        VAR_10 = VAR_2->p[VAR_7];
        VAR_11 = ( VAR_12[0] + VAR_10 * VAR_3->p[0] ) * VAR_5;

        FUNC_3( VAR_9, VAR_3->p, VAR_12, VAR_10 );
        FUNC_3( VAR_8, VAR_4->p, VAR_12, VAR_11 );

        *VAR_12++ = VAR_10; VAR_12[VAR_8 + 1] = 0;
    }

    FUNC_1( VAR_2->p, VAR_12, ( VAR_8 + 1 ) * VAR_1 );

    if( FUNC_0( VAR_2, VAR_4 ) >= 0 )
        FUNC_4( VAR_8, VAR_4->p, VAR_2->p );
    else

        FUNC_4( VAR_8, VAR_2->p, VAR_6->p );

    return( 0 );
}
