
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ shell_surface; scalar_t__ title; } ;
struct TYPE_5__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWwindow ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (scalar_t__,char const*) ;

void FUNC_3(_GLFWwindow* VAR_0, const char* VAR_1)
{
    if (VAR_0->wl.title)
        FUNC_0(VAR_0->wl.title);
    VAR_0->wl.title = FUNC_1(VAR_1);
    if (VAR_0->wl.shell_surface)
        FUNC_2(VAR_0->wl.shell_surface, VAR_1);
}
