
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int handle; } ;
struct TYPE_10__ {TYPE_2__ x11; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_9__ {int (* SwapIntervalSGI ) (int) ;scalar_t__ SGI_swap_control; int (* SwapIntervalMESA ) (int) ;scalar_t__ MESA_swap_control; int (* SwapIntervalEXT ) (int ,int ,int) ;scalar_t__ EXT_swap_control; } ;
struct TYPE_7__ {int display; } ;
struct TYPE_11__ {TYPE_3__ glx; TYPE_1__ x11; } ;


 TYPE_6__ VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void FUNC_4(int VAR_1)
{
    _GLFWwindow* VAR_2 = FUNC_0();

    if (VAR_0.glx.EXT_swap_control)
    {
        VAR_0.glx.SwapIntervalEXT(VAR_0.x11.display,
                                  VAR_2->x11.handle,
                                  VAR_1);
    }
    else if (VAR_0.glx.MESA_swap_control)
        VAR_0.glx.SwapIntervalMESA(VAR_1);
    else if (VAR_0.glx.SGI_swap_control)
    {
        if (VAR_1 > 0)
            VAR_0.glx.SwapIntervalSGI(VAR_1);
    }
}
