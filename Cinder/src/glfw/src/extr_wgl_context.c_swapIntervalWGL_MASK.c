
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int interval; } ;
struct TYPE_8__ {TYPE_1__ wgl; } ;
struct TYPE_10__ {int monitor; TYPE_2__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_9__ {int (* SwapIntervalEXT ) (int) ;scalar_t__ EXT_swap_control; } ;
struct TYPE_11__ {TYPE_3__ wgl; } ;


 TYPE_6__ VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
    _GLFWwindow* VAR_2 = FUNC_0();

    VAR_2->context.wgl.interval = VAR_1;



    if (FUNC_1() && !VAR_2->monitor)
        VAR_1 = 0;

    if (VAR_0.wgl.EXT_swap_control)
        VAR_0.wgl.SwapIntervalEXT(VAR_1);
}
