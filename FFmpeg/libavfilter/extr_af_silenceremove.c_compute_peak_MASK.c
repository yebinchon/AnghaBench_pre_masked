
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double sum; double window_size; scalar_t__* window_current; } ;
typedef TYPE_1__ SilenceRemoveContext ;


 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(SilenceRemoveContext *VAR_0, double VAR_1)
{
    double VAR_2;

    VAR_2 = VAR_0->sum;
    VAR_2 -= *VAR_0->window_current;
    VAR_2 += FUNC_0(VAR_1);

    return VAR_2 / VAR_0->window_size;
}
