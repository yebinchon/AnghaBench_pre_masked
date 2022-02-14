
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wl_surface {int dummy; } ;
struct wl_output {int dummy; } ;
struct TYPE_4__ {int monitorsCount; int ** monitors; } ;
struct TYPE_5__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int _GLFWmonitor ;
typedef scalar_t__ GLFWbool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (struct wl_output*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2,
                        struct wl_surface *VAR_3,
                        struct wl_output *VAR_4)
{
    _GLFWwindow* VAR_5 = VAR_2;
    _GLFWmonitor* VAR_6 = FUNC_1(VAR_4);
    GLFWbool VAR_7;
    int VAR_8;

    for (VAR_8 = 0, VAR_7 = VAR_0; VAR_8 < VAR_5->wl.monitorsCount - 1; ++VAR_8)
    {
        if (VAR_6 == VAR_5->wl.monitors[VAR_8])
            VAR_7 = VAR_1;
        if (VAR_7)
            VAR_5->wl.monitors[VAR_8] = VAR_5->wl.monitors[VAR_8 + 1];
    }
    VAR_5->wl.monitors[--VAR_5->wl.monitorsCount] = ((void*)0);

    FUNC_0(VAR_5);
}
