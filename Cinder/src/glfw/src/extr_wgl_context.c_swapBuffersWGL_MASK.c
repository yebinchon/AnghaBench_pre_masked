
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dc; int interval; } ;
struct TYPE_6__ {TYPE_1__ wgl; } ;
struct TYPE_7__ {TYPE_2__ context; int monitor; } ;
typedef TYPE_3__ _GLFWwindow ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(_GLFWwindow* VAR_0)
{

    if (FUNC_3() && !VAR_0->monitor)
    {
        int VAR_1 = FUNC_2(VAR_0->context.wgl.interval);
        while (VAR_1--)
            FUNC_1();
    }

    FUNC_0(VAR_0->context.wgl.dc);
}
