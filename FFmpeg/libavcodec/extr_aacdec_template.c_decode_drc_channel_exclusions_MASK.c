
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* exclude_mask; } ;
typedef int GetBitContext ;
typedef TYPE_1__ DynamicRangeControl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(DynamicRangeControl *VAR_1,
                                         GetBitContext *VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;

    do {
        for (VAR_3 = 0; VAR_3 < 7; VAR_3++)
            VAR_1->exclude_mask[VAR_4++] = FUNC_0(VAR_2);
    } while (VAR_4 < VAR_0 - 7 && FUNC_0(VAR_2));

    return VAR_4 / 7;
}
