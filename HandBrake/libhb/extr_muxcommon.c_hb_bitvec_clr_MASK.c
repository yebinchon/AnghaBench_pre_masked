
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size; int* vec; } ;
typedef TYPE_1__ hb_bitvec_t ;



__attribute__((used)) static void FUNC_0(hb_bitvec_t *VAR_0, int VAR_1)
{
    if (VAR_1 >= VAR_0->size)
        return;

    int VAR_2 = VAR_1 >> 5;
    uint32_t VAR_3 = 1 << (VAR_1 & 0x1F);
    VAR_0->vec[VAR_2] &= ~VAR_3;
}
