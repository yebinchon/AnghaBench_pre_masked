
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; scalar_t__ overrideRedirect; } ;
struct TYPE_8__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {int display; int screen; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(_GLFWwindow* VAR_2)
{
    if (VAR_2->x11.overrideRedirect)
    {


        FUNC_2(VAR_0,
                        "X11: Iconification of full screen windows requires a WM that supports EWMH full screen");
        return;
    }

    FUNC_1(VAR_1.x11.display, VAR_2->x11.handle, VAR_1.x11.screen);
    FUNC_0(VAR_1.x11.display);
}
