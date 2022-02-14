
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int handle; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {int display; scalar_t__ NET_ACTIVE_WINDOW; } ;
struct TYPE_10__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_6__ VAR_2 ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int,int ,int ,int ,int ) ;

void FUNC_4(_GLFWwindow* VAR_3)
{
    if (VAR_2.x11.NET_ACTIVE_WINDOW)
        FUNC_3(VAR_3, VAR_2.x11.NET_ACTIVE_WINDOW, 1, 0, 0, 0, 0);
    else
    {
        FUNC_1(VAR_2.x11.display, VAR_3->x11.handle);
        FUNC_2(VAR_2.x11.display, VAR_3->x11.handle,
                       VAR_1, VAR_0);
    }

    FUNC_0(VAR_2.x11.display);
}
