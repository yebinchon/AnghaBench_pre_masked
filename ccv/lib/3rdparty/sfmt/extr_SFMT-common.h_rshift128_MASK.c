
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** u; } ;
typedef TYPE_1__ w128_t ;
typedef int uint64_t ;
typedef void* uint32_t ;



__attribute__((used)) inline static void FUNC_0(w128_t *VAR_0, w128_t const *VAR_1, int VAR_2)
{
    uint64_t VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_3 = ((uint64_t)VAR_1->u[3] << 32) | ((uint64_t)VAR_1->u[2]);
    VAR_4 = ((uint64_t)VAR_1->u[1] << 32) | ((uint64_t)VAR_1->u[0]);

    VAR_5 = VAR_3 >> (VAR_2 * 8);
    VAR_6 = VAR_4 >> (VAR_2 * 8);
    VAR_6 |= VAR_3 << (64 - VAR_2 * 8);
    VAR_0->u[1] = (uint32_t)(VAR_6 >> 32);
    VAR_0->u[0] = (uint32_t)VAR_6;
    VAR_0->u[3] = (uint32_t)(VAR_5 >> 32);
    VAR_0->u[2] = (uint32_t)VAR_5;
}
