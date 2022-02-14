
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double sum; double* window_current; double* window_end; double* window; } ;
typedef TYPE_1__ SilenceRemoveContext ;



__attribute__((used)) static void FUNC_0(SilenceRemoveContext *VAR_0, double VAR_1)
{
    VAR_0->sum -= *VAR_0->window_current;
    *VAR_0->window_current = VAR_1 * VAR_1;
    VAR_0->sum += *VAR_0->window_current;

    VAR_0->window_current++;
    if (VAR_0->window_current >= VAR_0->window_end)
        VAR_0->window_current = VAR_0->window;
}
