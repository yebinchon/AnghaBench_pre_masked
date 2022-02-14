
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wl_surface {int dummy; } ;
struct wl_output {int dummy; } ;
struct TYPE_4__ {int monitorsCount; int monitorsSize; int ** monitors; } ;
struct TYPE_5__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int _GLFWmonitor ;


 int FUNC_0 (TYPE_2__*) ;
 int ** FUNC_1 (int **,int) ;
 int * FUNC_2 (struct wl_output*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0,
                        struct wl_surface *VAR_1,
                        struct wl_output *VAR_2)
{
    _GLFWwindow* VAR_3 = VAR_0;
    _GLFWmonitor* VAR_4 = FUNC_2(VAR_2);

    if (VAR_3->wl.monitorsCount + 1 > VAR_3->wl.monitorsSize)
    {
        ++VAR_3->wl.monitorsSize;
        VAR_3->wl.monitors =
            FUNC_1(VAR_3->wl.monitors,
                    VAR_3->wl.monitorsSize * sizeof(_GLFWmonitor*));
    }

    VAR_3->wl.monitors[VAR_3->wl.monitorsCount++] = VAR_4;

    FUNC_0(VAR_3);
}
