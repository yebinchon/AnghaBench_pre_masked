
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; } ;
struct TYPE_5__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWmonitor ;



void FUNC_0(_GLFWmonitor* VAR_0, int* VAR_1, int* VAR_2)
{
    if (VAR_1)
        *VAR_1 = VAR_0->wl.x;
    if (VAR_2)
        *VAR_2 = VAR_0->wl.y;
}
