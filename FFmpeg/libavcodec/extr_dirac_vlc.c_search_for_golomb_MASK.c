
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int residual ;
typedef int int32_t ;
struct TYPE_3__ {int* ready; size_t ready_num; int leftover; int leftover_bits; int need_s; } ;
typedef TYPE_1__ DiracGolombLUT ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(DiracGolombLUT *VAR_1, residual VAR_2, int VAR_3)
{
    int VAR_4 = VAR_0 - 1;
    int VAR_5, VAR_6 = VAR_3, VAR_7 = 0;



    while (1) {
        int32_t VAR_8 = 1;
        VAR_5 = (VAR_0 - 1) - VAR_4;

        while (1) {
            if (!VAR_3--)
                goto leftover;
            if ((((VAR_2) >> (VAR_4--)) & 1))
                break;

            VAR_8 <<= 1;

            if (!VAR_3--)
                goto leftover;
            VAR_8 |= (((VAR_2) >> (VAR_4--)) & 1);
        }

        VAR_1->ready[VAR_1->ready_num] = VAR_8 - 1;
        if (VAR_1->ready[VAR_1->ready_num]) {
            if (!VAR_3--) {
                VAR_7 = 1;
                goto leftover;
            }
            VAR_1->ready[VAR_1->ready_num] *= (((VAR_2) >> (VAR_4--)) & 1) ? -1 : +1;
        }
        VAR_1->ready_num++;

        if (!VAR_3)
            return;
    }

    leftover:
        VAR_1->leftover = VAR_2 << VAR_5;
        VAR_1->leftover_bits = VAR_6 - VAR_5;
        VAR_1->need_s = VAR_7;
}
