
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_output {int dummy; } ;
typedef int name_str ;
typedef int _GLFWvidmodeWayland ;
struct TYPE_10__ {int modesSize; int scale; struct wl_output* output; int modes; } ;
struct TYPE_12__ {TYPE_1__ wl; } ;
typedef TYPE_3__ _GLFWmonitor ;
struct TYPE_11__ {int monitorsCount; int monitorsSize; TYPE_3__** monitors; int registry; } ;
struct TYPE_13__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 TYPE_9__ VAR_1 ;
 TYPE_3__* FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_2 ;
 TYPE_3__** FUNC_5 (TYPE_3__**,int) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (struct wl_output*,int *,TYPE_3__*) ;
 int VAR_3 ;
 struct wl_output* FUNC_8 (int ,int,int *,int) ;

void FUNC_9(uint32_t VAR_4, uint32_t VAR_5)
{
    _GLFWmonitor *VAR_6;
    struct wl_output *VAR_7;
    char VAR_8[80];

    FUNC_4(VAR_8, 0, sizeof(VAR_8));
    FUNC_6(VAR_8, 79, "wl_output@%u", VAR_4);

    if (VAR_5 < 2)
    {
        FUNC_2(VAR_0,
                        "Wayland: Unsupported output interface version");
        return;
    }

    VAR_6 = FUNC_0(VAR_8, 0, 0);

    VAR_7 = FUNC_8(VAR_1.wl.registry,
                              VAR_4,
                              &VAR_3,
                              2);
    if (!VAR_7)
    {
        FUNC_1(VAR_6);
        return;
    }

    VAR_6->wl.modes = FUNC_3(4, sizeof(_GLFWvidmodeWayland));
    VAR_6->wl.modesSize = 4;

    VAR_6->wl.scale = 1;

    VAR_6->wl.output = VAR_7;
    FUNC_7(VAR_7, &VAR_2, VAR_6);

    if (VAR_1.wl.monitorsCount + 1 >= VAR_1.wl.monitorsSize)
    {
        _GLFWmonitor** VAR_9 = VAR_1.wl.monitors;
        int VAR_10 = VAR_1.wl.monitorsSize * 2;

        VAR_9 = FUNC_5(VAR_9, VAR_10 * sizeof(_GLFWmonitor*));

        VAR_1.wl.monitors = VAR_9;
        VAR_1.wl.monitorsSize = VAR_10;
    }

    VAR_1.wl.monitors[VAR_1.wl.monitorsCount++] = VAR_6;
}
