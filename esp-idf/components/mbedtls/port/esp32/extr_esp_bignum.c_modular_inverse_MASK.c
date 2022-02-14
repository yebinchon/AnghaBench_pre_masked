
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int mbedtls_mpi_uint ;
struct TYPE_3__ {int* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;

__attribute__((used)) static mbedtls_mpi_uint FUNC_0(const mbedtls_mpi *VAR_1)
{
    int VAR_2;
    uint64_t VAR_3 = 1;
    uint64_t VAR_4 = 2;
    uint64_t VAR_5 = 4;
    uint64_t VAR_6 = VAR_1->p[0];

    for (VAR_2 = 2; VAR_2 <= 32; VAR_2++) {
        if ((mbedtls_mpi_uint) VAR_6 * VAR_3 % VAR_5 >= VAR_4) {
            VAR_3 += VAR_4;
        }

        VAR_4 <<= 1;
        VAR_5 <<= 1;
    }

    return (mbedtls_mpi_uint)(VAR_0 - VAR_3 + 1);
}
