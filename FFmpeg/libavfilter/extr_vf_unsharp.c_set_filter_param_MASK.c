
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msize_x; int msize_y; float amount; int steps_x; int steps_y; int scalebits; int halfscale; } ;
typedef TYPE_1__ UnsharpFilterParam ;



__attribute__((used)) static void FUNC_0(UnsharpFilterParam *VAR_0, int VAR_1, int VAR_2, float VAR_3)
{
    VAR_0->msize_x = VAR_1;
    VAR_0->msize_y = VAR_2;
    VAR_0->amount = VAR_3 * 65536.0;

    VAR_0->steps_x = VAR_1 / 2;
    VAR_0->steps_y = VAR_2 / 2;
    VAR_0->scalebits = (VAR_0->steps_x + VAR_0->steps_y) * 2;
    VAR_0->halfscale = 1 << (VAR_0->scalebits - 1);
}
