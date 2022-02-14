
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ maximized; scalar_t__ shell_surface; } ;
struct TYPE_5__ {TYPE_1__ wl; int monitor; } ;
typedef TYPE_2__ _GLFWwindow ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;

void FUNC_1(_GLFWwindow* VAR_1)
{
    if (!VAR_1->monitor && !VAR_1->wl.maximized)
    {
        if (VAR_1->wl.shell_surface)
        {

            FUNC_0(VAR_1->wl.shell_surface, ((void*)0));
        }
        VAR_1->wl.maximized = VAR_0;
    }
}
