
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* monitor; } ;
typedef TYPE_4__ _GLFWwndconfig ;
struct TYPE_13__ {int * currentCursor; int shell_surface; } ;
struct TYPE_15__ {TYPE_3__ wl; } ;
typedef TYPE_5__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
typedef int _GLFWctxconfig ;
struct TYPE_11__ {int output; } ;
struct TYPE_12__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int const*,int const*) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__ const*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(_GLFWwindow* VAR_3,
                              const _GLFWwndconfig* VAR_4,
                              const _GLFWctxconfig* VAR_5,
                              const _GLFWfbconfig* VAR_6)
{
    if (!FUNC_0(VAR_3, VAR_5, VAR_6))
        return VAR_0;

    if (!FUNC_1(VAR_3, VAR_4))
        return VAR_0;

    if (VAR_4->monitor)
    {
        FUNC_2(
            VAR_3->wl.shell_surface,
            VAR_2,
            0,
            VAR_4->monitor->wl.output);
    }
    else
    {
        FUNC_3(VAR_3->wl.shell_surface);
    }

    VAR_3->wl.currentCursor = ((void*)0);

    return VAR_1;
}
