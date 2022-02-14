
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t n; size_t* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 size_t VAR_0 ;

int FUNC_0( const mbedtls_mpi *VAR_1, size_t VAR_2 )
{
    if( VAR_1->n * VAR_0 <= VAR_2 )
        return( 0 );

    return( ( VAR_1->p[VAR_2 / VAR_0] >> ( VAR_2 % VAR_0 ) ) & 0x01 );
}
