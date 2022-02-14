
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dc; int interval; } ;
struct TYPE_5__ {TYPE_1__ wgl; int monitor; } ;
typedef TYPE_2__ _GLFWwindow ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

void FUNC_4(_GLFWwindow* VAR_0)
{

    if (FUNC_1() && !VAR_0->monitor)
    {
        int VAR_1 = FUNC_3(VAR_0->wgl.interval);
        while (VAR_1--)
            FUNC_2();
    }

    FUNC_0(VAR_0->wgl.dc);
}
