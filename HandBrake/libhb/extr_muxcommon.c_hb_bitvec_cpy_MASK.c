
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int size; int vec; } ;
typedef TYPE_1__ hb_bitvec_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(hb_bitvec_t *VAR_0, hb_bitvec_t *VAR_1)
{
    if (VAR_0->size < VAR_1->size)
    {
        int VAR_2 = FUNC_0(VAR_0, VAR_1->size - VAR_0->size);
        if (VAR_2 < 0)
            return VAR_2;
    }

    int VAR_3 = (VAR_0->size + 31) >> 5;
    FUNC_1(VAR_0->vec, VAR_1->vec, VAR_3 * sizeof(uint32_t));

    return 0;
}
