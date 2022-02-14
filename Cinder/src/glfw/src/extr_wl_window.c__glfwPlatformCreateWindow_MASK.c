
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ visible; scalar_t__ title; } ;
typedef TYPE_2__ _GLFWwndconfig ;
struct TYPE_13__ {int visible; int monitorsSize; scalar_t__ monitorsCount; int monitors; int * currentCursor; int * shell_surface; int title; } ;
struct TYPE_15__ {TYPE_1__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int _GLFWmonitor ;
typedef int _GLFWfbconfig ;
struct TYPE_16__ {scalar_t__ client; } ;
typedef TYPE_4__ _GLFWctxconfig ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__ const*,int const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_5 (scalar_t__) ;

int FUNC_6(_GLFWwindow* VAR_3,
                              const _GLFWwndconfig* VAR_4,
                              const _GLFWctxconfig* VAR_5,
                              const _GLFWfbconfig* VAR_6)
{
    if (!FUNC_4(VAR_3, VAR_4))
        return VAR_0;

    if (VAR_5->client != VAR_1)
    {
        if (!FUNC_1())
            return VAR_0;
        if (!FUNC_0(VAR_3, VAR_5, VAR_6))
            return VAR_0;
    }

    if (VAR_4->title)
        VAR_3->wl.title = FUNC_5(VAR_4->title);

    if (VAR_4->visible)
    {
        if (!FUNC_3(VAR_3))
            return VAR_0;

        VAR_3->wl.visible = VAR_2;
    }
    else
    {
        VAR_3->wl.shell_surface = ((void*)0);
        VAR_3->wl.visible = VAR_0;
    }

    VAR_3->wl.currentCursor = ((void*)0);

    VAR_3->wl.monitors = FUNC_2(1, sizeof(_GLFWmonitor*));
    VAR_3->wl.monitorsCount = 0;
    VAR_3->wl.monitorsSize = 1;

    return VAR_2;
}
