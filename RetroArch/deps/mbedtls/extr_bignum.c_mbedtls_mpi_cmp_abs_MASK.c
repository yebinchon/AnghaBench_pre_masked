
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t n; scalar_t__* p; } ;
typedef TYPE_1__ mbedtls_mpi ;



int FUNC_0( const mbedtls_mpi *VAR_0, const mbedtls_mpi *VAR_1 )
{
    size_t VAR_2, VAR_3;

    for( VAR_2 = VAR_0->n; VAR_2 > 0; VAR_2-- )
        if( VAR_0->p[VAR_2 - 1] != 0 )
            break;

    for( VAR_3 = VAR_1->n; VAR_3 > 0; VAR_3-- )
        if( VAR_1->p[VAR_3 - 1] != 0 )
            break;

    if( VAR_2 == 0 && VAR_3 == 0 )
        return( 0 );

    if( VAR_2 > VAR_3 ) return( 1 );
    if( VAR_3 > VAR_2 ) return( -1 );

    for( ; VAR_2 > 0; VAR_2-- )
    {
        if( VAR_0->p[VAR_2 - 1] > VAR_1->p[VAR_2 - 1] ) return( 1 );
        if( VAR_0->p[VAR_2 - 1] < VAR_1->p[VAR_2 - 1] ) return( -1 );
    }

    return( 0 );
}
