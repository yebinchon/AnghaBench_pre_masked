
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* prediction_table; int mb_x; int mb_y; } ;
typedef TYPE_1__ IntraX8Context ;



__attribute__((used)) static void FUNC_0(IntraX8Context *const VAR_0, const int VAR_1,
                                  const int VAR_2)
{
    VAR_0->prediction_table[VAR_0->mb_x * 2 + (VAR_0->mb_y & 1)] = (VAR_2 << 2) + 1 * (VAR_1 == 4) + 2 * (VAR_1 == 8);




}
