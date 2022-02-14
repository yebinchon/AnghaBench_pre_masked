
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int size; scalar_t__* vec; } ;
typedef TYPE_1__ hb_bitvec_t ;


 scalar_t__* FUNC_0 (scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(hb_bitvec_t *VAR_0, int VAR_1)
{
    int VAR_2;
    int VAR_3 = (VAR_0->size + 31) >> 5;
    int VAR_4 = (VAR_0->size + VAR_1 + 31) >> 5;
    if (VAR_4 > VAR_3)
    {
        uint32_t *VAR_5 = FUNC_0(VAR_0->vec, VAR_4 * sizeof(uint32_t));
        if (VAR_5 == ((void*)0))
        {
            return -1;
        }
        for (VAR_2 = VAR_3; VAR_2 < VAR_4; VAR_2++)
            VAR_5[VAR_2] = 0;
        VAR_0->vec = VAR_5;
    }
    VAR_0->size += VAR_1;
    return 0;
}
