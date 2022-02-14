
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
typedef int mbedtls_mpi_sint ;
struct TYPE_5__ {int s; int n; int * p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__*) ;

int FUNC_1( const mbedtls_mpi *VAR_0, mbedtls_mpi_sint VAR_1 )
{
    mbedtls_mpi VAR_2;
    mbedtls_mpi_uint VAR_3[1];

    *VAR_3 = ( VAR_1 < 0 ) ? -VAR_1 : VAR_1;
    VAR_2.s = ( VAR_1 < 0 ) ? -1 : 1;
    VAR_2.n = 1;
    VAR_2.p = VAR_3;

    return( FUNC_0( VAR_0, &VAR_2 ) );
}
