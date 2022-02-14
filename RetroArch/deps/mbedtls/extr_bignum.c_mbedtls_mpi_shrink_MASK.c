
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mbedtls_mpi_uint ;
struct TYPE_4__ {size_t n; scalar_t__* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (size_t,size_t) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,size_t) ;

int FUNC_5( mbedtls_mpi *VAR_2, size_t VAR_3 )
{
    mbedtls_mpi_uint *VAR_4;
    size_t VAR_5;


    if( VAR_2->n <= VAR_3 )
        return( FUNC_2( VAR_2, VAR_3 ) );

    for( VAR_5 = VAR_2->n - 1; VAR_5 > 0; VAR_5-- )
        if( VAR_2->p[VAR_5] != 0 )
            break;
    VAR_5++;

    if( VAR_5 < VAR_3 )
        VAR_5 = VAR_3;

    if( ( VAR_4 = (mbedtls_mpi_uint*)FUNC_0( VAR_5, VAR_1 ) ) == ((void*)0) )
        return( VAR_0 );

    if( VAR_2->p != ((void*)0) )
    {
        FUNC_4( VAR_4, VAR_2->p, VAR_5 * VAR_1 );
        FUNC_3( VAR_2->p, VAR_2->n );
        FUNC_1( VAR_2->p );
    }

    VAR_2->n = VAR_5;
    VAR_2->p = VAR_4;

    return( 0 );
}
