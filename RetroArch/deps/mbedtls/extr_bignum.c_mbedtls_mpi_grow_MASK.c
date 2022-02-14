
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_3__ {size_t n; int * p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;

int FUNC_4( mbedtls_mpi *VAR_3, size_t VAR_4 )
{
    mbedtls_mpi_uint *VAR_5;

    if( VAR_4 > VAR_1 )
        return( VAR_0 );

    if( VAR_3->n < VAR_4 )
    {
        if( ( VAR_5 = (mbedtls_mpi_uint*)FUNC_0( VAR_4, VAR_2 ) ) == ((void*)0) )
            return( VAR_0 );

        if( VAR_3->p != ((void*)0) )
        {
            FUNC_3( VAR_5, VAR_3->p, VAR_3->n * VAR_2 );
            FUNC_2( VAR_3->p, VAR_3->n );
            FUNC_1( VAR_3->p );
        }

        VAR_3->n = VAR_4;
        VAR_3->p = VAR_5;
    }

    return( 0 );
}
