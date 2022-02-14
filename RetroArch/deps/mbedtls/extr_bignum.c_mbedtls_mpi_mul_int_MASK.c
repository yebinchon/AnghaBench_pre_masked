
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_7__ {int s; int n; int * p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*) ;

int FUNC_1( mbedtls_mpi *VAR_0, const mbedtls_mpi *VAR_1, mbedtls_mpi_uint VAR_2 )
{
    mbedtls_mpi VAR_3;
    mbedtls_mpi_uint VAR_4[1];

    VAR_3.s = 1;
    VAR_3.n = 1;
    VAR_3.p = VAR_4;
    VAR_4[0] = VAR_2;

    return( FUNC_0( VAR_0, VAR_1, &VAR_3 ) );
}
