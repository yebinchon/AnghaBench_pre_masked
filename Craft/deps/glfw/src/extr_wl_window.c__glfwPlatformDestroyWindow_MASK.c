
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ surface; scalar_t__ shell_surface; scalar_t__ native; } ;
struct TYPE_11__ {TYPE_1__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_10__ {TYPE_3__* keyboardFocus; TYPE_3__* pointerFocus; } ;
struct TYPE_12__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 TYPE_8__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(_GLFWwindow* VAR_2)
{
    if (VAR_2 == VAR_1.wl.pointerFocus)
    {
        VAR_1.wl.pointerFocus = ((void*)0);
        FUNC_1(VAR_2, VAR_0);
    }
    if (VAR_2 == VAR_1.wl.keyboardFocus)
    {
        VAR_1.wl.keyboardFocus = ((void*)0);
        FUNC_2(VAR_2, VAR_0);
    }

    FUNC_0(VAR_2);

    if (VAR_2->wl.native)
        FUNC_3(VAR_2->wl.native);

    if (VAR_2->wl.shell_surface)
        FUNC_4(VAR_2->wl.shell_surface);

    if (VAR_2->wl.surface)
        FUNC_5(VAR_2->wl.surface);
}
