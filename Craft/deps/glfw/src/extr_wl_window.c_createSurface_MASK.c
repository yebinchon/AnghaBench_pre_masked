
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int height; int width; } ;
typedef TYPE_3__ _GLFWwndconfig ;
struct TYPE_11__ {int height; int width; int shell_surface; int surface; int native; } ;
struct TYPE_13__ {TYPE_2__ wl; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_10__ {int shell; int compositor; } ;
struct TYPE_14__ {TYPE_1__ wl; } ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;

__attribute__((used)) static GLboolean FUNC_5(_GLFWwindow* VAR_4,
                               const _GLFWwndconfig* VAR_5)
{
    VAR_4->wl.surface = FUNC_0(VAR_2.wl.compositor);
    if (!VAR_4->wl.surface)
        return VAR_0;

    FUNC_4(VAR_4->wl.surface, VAR_4);

    VAR_4->wl.native = FUNC_1(VAR_4->wl.surface,
                                             VAR_5->width,
                                             VAR_5->height);
    if (!VAR_4->wl.native)
        return VAR_0;

    VAR_4->wl.shell_surface = FUNC_2(VAR_2.wl.shell,
                                                          VAR_4->wl.surface);
    if (!VAR_4->wl.shell_surface)
        return VAR_0;

    FUNC_3(VAR_4->wl.shell_surface,
                                  &VAR_3,
                                  VAR_4);

    VAR_4->wl.width = VAR_5->width;
    VAR_4->wl.height = VAR_5->height;

    return VAR_1;
}
