
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int handle; } ;
struct TYPE_12__ {scalar_t__ cursorMode; TYPE_2__ x11; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_9__ {int handle; } ;
struct TYPE_13__ {TYPE_1__ x11; } ;
typedef TYPE_5__ _GLFWcursor ;
struct TYPE_11__ {int display; } ;
struct TYPE_14__ {TYPE_3__ x11; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_8__ VAR_1 ;

void FUNC_3(_GLFWwindow* VAR_2, _GLFWcursor* VAR_3)
{
    if (VAR_2->cursorMode == VAR_0)
    {
        if (VAR_3)
            FUNC_0(VAR_1.x11.display, VAR_2->x11.handle, VAR_3->x11.handle);
        else
            FUNC_2(VAR_1.x11.display, VAR_2->x11.handle);

        FUNC_1(VAR_1.x11.display);
    }
}
