
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_3__ {int* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0( mbedtls_mpi_uint *VAR_1, const mbedtls_mpi *VAR_2 )
{
    mbedtls_mpi_uint VAR_3, VAR_4 = VAR_2->p[0];
    unsigned int VAR_5;

    VAR_3 = VAR_4;
    VAR_3 += ( ( VAR_4 + 2 ) & 4 ) << 1;

    for( VAR_5 = VAR_0; VAR_5 >= 8; VAR_5 /= 2 )
        VAR_3 *= ( 2 - ( VAR_4 * VAR_3 ) );

    *VAR_1 = ~VAR_3 + 1;
}
