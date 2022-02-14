
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* window; scalar_t__* window_current; scalar_t__* window_end; int sum; } ;
typedef TYPE_1__ SilenceRemoveContext ;


 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(SilenceRemoveContext *VAR_0, double VAR_1)
{
    VAR_0->sum -= *VAR_0->window_current;
    *VAR_0->window_current = FUNC_0(VAR_1);
    VAR_0->sum += *VAR_0->window_current;

    VAR_0->window_current++;
    if (VAR_0->window_current >= VAR_0->window_end)
        VAR_0->window_current = VAR_0->window;
}
