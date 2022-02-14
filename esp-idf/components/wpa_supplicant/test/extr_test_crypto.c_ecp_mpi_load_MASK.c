
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_3__ {int s; size_t n; int p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static inline void FUNC_2( mbedtls_mpi *VAR_0, const mbedtls_mpi_uint *VAR_1, size_t VAR_2 )
{
    VAR_0->s = 1;
    VAR_0->n = VAR_2 / sizeof( mbedtls_mpi_uint );
    VAR_0->p = FUNC_1(VAR_2);
    FUNC_0(VAR_0->p, (void *)VAR_1, VAR_2);
}
