
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alpha; int prng; int var_values; int a_pexpr; } ;
typedef TYPE_1__ DrawTextContext ;


 double FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(DrawTextContext *VAR_0)
{
    double VAR_1 = FUNC_0(VAR_0->a_pexpr, VAR_0->var_values, &VAR_0->prng);

    if (FUNC_1(VAR_1))
        return;

    if (VAR_1 >= 1.0)
        VAR_0->alpha = 255;
    else if (VAR_1 <= 0)
        VAR_0->alpha = 0;
    else
        VAR_0->alpha = 256 * VAR_1;
}
