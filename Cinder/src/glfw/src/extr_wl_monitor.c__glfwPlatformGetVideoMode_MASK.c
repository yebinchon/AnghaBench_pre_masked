
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int modesCount; TYPE_1__* modes; } ;
struct TYPE_7__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWmonitor ;
struct TYPE_5__ {int flags; int base; } ;
typedef int GLFWvidmode ;


 int VAR_0 ;

void FUNC_0(_GLFWmonitor* VAR_1, GLFWvidmode* VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->wl.modesCount; VAR_3++)
    {
        if (VAR_1->wl.modes[VAR_3].flags & VAR_0)
        {
            *VAR_2 = VAR_1->wl.modes[VAR_3].base;
            return;
        }
    }
}
