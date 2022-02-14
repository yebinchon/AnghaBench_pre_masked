
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int* vec; } ;
typedef TYPE_1__ hb_bitvec_t ;



__attribute__((used)) static int FUNC_0(hb_bitvec_t *VAR_0, hb_bitvec_t *VAR_1, hb_bitvec_t *VAR_2)
{
    if (VAR_0->size != VAR_1->size)
        return 0;

    int VAR_3;
    int VAR_4 = (VAR_0->size + 31) >> 5;
    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
        if ((VAR_0->vec[VAR_3] & VAR_1->vec[VAR_3]) != VAR_2->vec[VAR_3])
            return 0;
    return 1;
}
