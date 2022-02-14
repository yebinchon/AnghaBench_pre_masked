
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mbedtls_mpi_uint ;
struct TYPE_4__ {size_t n; size_t* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*,size_t) ;

int FUNC_2( mbedtls_mpi *VAR_2, size_t VAR_3, unsigned char VAR_4 )
{
    int VAR_5 = 0;
    size_t VAR_6 = VAR_3 / VAR_1;
    size_t VAR_7 = VAR_3 % VAR_1;

    if( VAR_4 != 0 && VAR_4 != 1 )
        return( VAR_0 );

    if( VAR_2->n * VAR_1 <= VAR_3 )
    {
        if( VAR_4 == 0 )
            return( 0 );

        FUNC_0( FUNC_1( VAR_2, VAR_6 + 1 ) );
    }

    VAR_2->p[VAR_6] &= ~( (mbedtls_mpi_uint) 0x01 << VAR_7 );
    VAR_2->p[VAR_6] |= (mbedtls_mpi_uint) VAR_4 << VAR_7;

cleanup:

    return( VAR_5 );
}
