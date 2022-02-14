
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


struct TYPE_12__ {int shell_surface; scalar_t__ maximized; scalar_t__ title; int surface; } ;
struct TYPE_13__ {TYPE_4__ wl; TYPE_3__* monitor; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_9__ {int shell; } ;
struct TYPE_14__ {TYPE_1__ wl; } ;
struct TYPE_10__ {int output; } ;
struct TYPE_11__ {TYPE_2__ wl; } ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static GLFWbool FUNC_6(_GLFWwindow* VAR_5)
{
    VAR_5->wl.shell_surface = FUNC_0(VAR_3.wl.shell,
                                                          VAR_5->wl.surface);
    if (!VAR_5->wl.shell_surface)
        return VAR_0;

    FUNC_1(VAR_5->wl.shell_surface,
                                  &VAR_4,
                                  VAR_5);

    if (VAR_5->wl.title)
        FUNC_4(VAR_5->wl.shell_surface, VAR_5->wl.title);

    if (VAR_5->monitor)
    {
        FUNC_2(
            VAR_5->wl.shell_surface,
            VAR_2,
            0,
            VAR_5->monitor->wl.output);
    }
    else if (VAR_5->wl.maximized)
    {
        FUNC_3(VAR_5->wl.shell_surface, ((void*)0));
    }
    else
    {
        FUNC_5(VAR_5->wl.shell_surface);
    }

    return VAR_1;
}
