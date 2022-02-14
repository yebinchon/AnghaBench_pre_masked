
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int interval; int (* SwapIntervalEXT ) (int) ;scalar_t__ EXT_swap_control; } ;
struct TYPE_5__ {TYPE_1__ wgl; int monitor; } ;
typedef TYPE_2__ _GLFWwindow ;


 scalar_t__ FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_0)
{
    _GLFWwindow* VAR_1 = FUNC_1();

    VAR_1->wgl.interval = VAR_0;



    if (FUNC_0() && !VAR_1->monitor)
        VAR_0 = 0;

    if (VAR_1->wgl.EXT_swap_control)
        VAR_1->wgl.SwapIntervalEXT(VAR_0);
}
