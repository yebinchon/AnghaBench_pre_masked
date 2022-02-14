
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t n; scalar_t__* p; } ;
typedef TYPE_1__ mbedtls_mpi ;



__attribute__((used)) static size_t FUNC_0(const mbedtls_mpi *VAR_0)
{
    for (size_t VAR_1 = VAR_0->n; VAR_1 > 0; VAR_1--) {
        if (VAR_0->p[VAR_1 - 1] != 0) {
            return VAR_1;
        }
    }
    return 0;
}
