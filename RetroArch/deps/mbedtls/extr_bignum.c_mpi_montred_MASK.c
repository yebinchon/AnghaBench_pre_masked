
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_9__ {int n; int s; int* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*,int,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_1( mbedtls_mpi *VAR_0, const mbedtls_mpi *VAR_1, mbedtls_mpi_uint VAR_2, const mbedtls_mpi *VAR_3 )
{
    mbedtls_mpi_uint VAR_4 = 1;
    mbedtls_mpi VAR_5;

    VAR_5.n = VAR_5.s = (int) VAR_4;
    VAR_5.p = &VAR_4;

    return( FUNC_0( VAR_0, &VAR_5, VAR_1, VAR_2, VAR_3 ) );
}
