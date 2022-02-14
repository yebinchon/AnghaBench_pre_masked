
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int window; } ;
struct TYPE_10__ {TYPE_2__ glx; } ;
struct TYPE_12__ {TYPE_3__ context; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_11__ {int (* SwapIntervalSGI ) (int) ;scalar_t__ SGI_swap_control; int (* SwapIntervalMESA ) (int) ;scalar_t__ MESA_swap_control; int (* SwapIntervalEXT ) (int ,int ,int) ;scalar_t__ EXT_swap_control; } ;
struct TYPE_8__ {int display; } ;
struct TYPE_13__ {TYPE_4__ glx; TYPE_1__ x11; } ;


 TYPE_7__ VAR_0 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
    _GLFWwindow* VAR_2 = FUNC_0();

    if (VAR_0.glx.EXT_swap_control)
    {
        VAR_0.glx.SwapIntervalEXT(VAR_0.x11.display,
                                  VAR_2->context.glx.window,
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
