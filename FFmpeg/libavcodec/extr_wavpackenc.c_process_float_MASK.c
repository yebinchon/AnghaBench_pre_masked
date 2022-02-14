
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int max_exp; int ordata; int shifted_both; int shifted_ones; int shifted_zeros; int neg_zeros; int false_zeros; int float_flags; } ;
typedef TYPE_1__ WavPackEncodeContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(WavPackEncodeContext *VAR_1, int32_t *VAR_2)
{
    int32_t VAR_3, VAR_4, VAR_5 = *VAR_2;

    if (FUNC_0(VAR_5) == 255) {
        VAR_1->float_flags |= VAR_0;
        VAR_4 = 0x1000000;
        VAR_3 = 0;
    } else if (FUNC_0(VAR_5)) {
        VAR_3 = VAR_1->max_exp - FUNC_0(VAR_5);
        VAR_4 = 0x800000 + FUNC_1(VAR_5);
    } else {
        VAR_3 = VAR_1->max_exp ? VAR_1->max_exp - 1 : 0;
        VAR_4 = FUNC_1(VAR_5);
    }

    if (VAR_3 < 25)
        VAR_4 >>= VAR_3;
    else
        VAR_4 = 0;

    if (!VAR_4) {
        if (FUNC_0(VAR_5) || FUNC_1(VAR_5))
            VAR_1->false_zeros++;
        else if (FUNC_2(VAR_5))
            VAR_1->neg_zeros++;
    } else if (VAR_3) {
        int32_t VAR_6 = (1 << VAR_3) - 1;

        if (!(FUNC_1(VAR_5) & VAR_6))
            VAR_1->shifted_zeros++;
        else if ((FUNC_1(VAR_5) & VAR_6) == VAR_6)
            VAR_1->shifted_ones++;
        else
            VAR_1->shifted_both++;
    }

    VAR_1->ordata |= VAR_4;
    *VAR_2 = FUNC_2(VAR_5) ? -VAR_4 : VAR_4;
}
