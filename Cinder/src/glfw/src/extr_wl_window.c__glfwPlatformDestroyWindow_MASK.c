
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int monitors; int title; scalar_t__ surface; scalar_t__ shell_surface; scalar_t__ native; } ;
struct TYPE_11__ {int (* destroy ) (TYPE_4__*) ;} ;
struct TYPE_13__ {TYPE_3__ wl; TYPE_2__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_10__ {TYPE_4__* keyboardFocus; TYPE_4__* pointerFocus; } ;
struct TYPE_14__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 TYPE_9__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(_GLFWwindow* VAR_2)
{
    if (VAR_2 == VAR_1.wl.pointerFocus)
    {
        VAR_1.wl.pointerFocus = ((void*)0);
        FUNC_0(VAR_2, VAR_0);
    }
    if (VAR_2 == VAR_1.wl.keyboardFocus)
    {
        VAR_1.wl.keyboardFocus = ((void*)0);
        FUNC_1(VAR_2, VAR_0);
    }

    if (VAR_2->context.destroy)
        VAR_2->context.destroy(VAR_2);

    if (VAR_2->wl.native)
        FUNC_4(VAR_2->wl.native);

    if (VAR_2->wl.shell_surface)
        FUNC_5(VAR_2->wl.shell_surface);

    if (VAR_2->wl.surface)
        FUNC_6(VAR_2->wl.surface);

    FUNC_2(VAR_2->wl.title);
    FUNC_2(VAR_2->wl.monitors);
}
