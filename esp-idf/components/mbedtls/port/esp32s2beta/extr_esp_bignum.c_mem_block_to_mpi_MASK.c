
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {size_t n; scalar_t__* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_3(mbedtls_mpi *VAR_0, uint32_t VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    FUNC_0( FUNC_2(VAR_0, VAR_2) );


    FUNC_1(VAR_0->p, VAR_1, VAR_2);


    for(size_t VAR_4 = VAR_2; VAR_4 < VAR_0->n; VAR_4++) {
        VAR_0->p[VAR_4] = 0;
    }

    asm volatile ("memw");
 cleanup:
    return VAR_3;
}
