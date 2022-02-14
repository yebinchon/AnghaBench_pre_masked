
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; scalar_t__* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 size_t VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;

size_t FUNC_1( const mbedtls_mpi *VAR_1 )
{
    size_t VAR_2, VAR_3;

    if( VAR_1->n == 0 )
        return( 0 );

    for( VAR_2 = VAR_1->n - 1; VAR_2 > 0; VAR_2-- )
        if( VAR_1->p[VAR_2] != 0 )
            break;

    VAR_3 = VAR_0 - FUNC_0( VAR_1->p[VAR_2] );

    return( ( VAR_2 * VAR_0 ) + VAR_3 );
}
