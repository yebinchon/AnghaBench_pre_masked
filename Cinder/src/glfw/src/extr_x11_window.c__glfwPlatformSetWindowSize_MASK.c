
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int handle; } ;
struct TYPE_12__ {TYPE_2__ x11; int resizable; TYPE_1__* monitor; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_11__ {int display; } ;
struct TYPE_13__ {TYPE_3__ x11; } ;
struct TYPE_9__ {TYPE_4__* window; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int) ;
 TYPE_8__ VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int,int) ;

void FUNC_4(_GLFWwindow* VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_1->monitor)
    {
        if (VAR_1->monitor->window == VAR_1)
            FUNC_2(VAR_1);
    }
    else
    {
        if (!VAR_1->resizable)
            FUNC_3(VAR_1, VAR_2, VAR_3);

        FUNC_1(VAR_0.x11.display, VAR_1->x11.handle, VAR_2, VAR_3);
    }

    FUNC_0(VAR_0.x11.display);
}
