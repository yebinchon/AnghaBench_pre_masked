
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {size_t n; int* p; } ;
typedef TYPE_1__ mbedtls_mpi ;



__attribute__((used)) static inline void FUNC_0(uint32_t VAR_0, const mbedtls_mpi *VAR_1, size_t VAR_2)
{
    uint32_t *VAR_3 = (uint32_t *)VAR_0;
    uint32_t VAR_4 = VAR_2 < VAR_1->n ? VAR_2 : VAR_1->n;


    for (int VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_3[VAR_5] = VAR_1->p[VAR_5];
    }


    for (int VAR_6 = VAR_4; VAR_6 < VAR_2; VAR_6++) {
        VAR_3[VAR_6] = 0;
    }


}
