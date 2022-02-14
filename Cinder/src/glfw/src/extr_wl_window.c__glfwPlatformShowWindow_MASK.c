
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int visible; int shell_surface; } ;
struct TYPE_6__ {TYPE_1__ wl; int monitor; } ;
typedef TYPE_2__ _GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(_GLFWwindow* VAR_1)
{
    if (!VAR_1->monitor)
    {
        if (!VAR_1->wl.shell_surface)
            FUNC_0(VAR_1);
        VAR_1->wl.visible = VAR_0;
    }
}
