
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
typedef int mbedtls_mpi_sint ;
struct TYPE_3__ {int* p; size_t n; scalar_t__ s; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0( mbedtls_mpi_uint *VAR_3, const mbedtls_mpi *VAR_4, mbedtls_mpi_sint VAR_5 )
{
    size_t VAR_6;
    mbedtls_mpi_uint VAR_7, VAR_8, VAR_9;

    if( VAR_5 == 0 )
        return( VAR_0 );

    if( VAR_5 < 0 )
        return( VAR_1 );




    if( VAR_5 == 1 )
    {
        *VAR_3 = 0;
        return( 0 );
    }

    if( VAR_5 == 2 )
    {
        *VAR_3 = VAR_4->p[0] & 1;
        return( 0 );
    }




    for( VAR_6 = VAR_4->n, VAR_8 = 0; VAR_6 > 0; VAR_6-- )
    {
        VAR_7 = VAR_4->p[VAR_6 - 1];
        VAR_8 = ( VAR_8 << VAR_2 ) | ( VAR_7 >> VAR_2 );
        VAR_9 = VAR_8 / VAR_5;
        VAR_8 -= VAR_9 * VAR_5;

        VAR_7 <<= VAR_2;
        VAR_8 = ( VAR_8 << VAR_2 ) | ( VAR_7 >> VAR_2 );
        VAR_9 = VAR_8 / VAR_5;
        VAR_8 -= VAR_9 * VAR_5;
    }





    if( VAR_4->s < 0 && VAR_8 != 0 )
        VAR_8 = VAR_5 - VAR_8;

    *VAR_3 = VAR_8;

    return( 0 );
}
