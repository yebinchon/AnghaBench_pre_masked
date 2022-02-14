
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int _GLFWmonitor ;
struct TYPE_4__ {int context; } ;
struct TYPE_5__ {int monitorsSize; int compositor; int cursorSurface; int defaultCursor; int cursorTheme; scalar_t__ shm; scalar_t__ pointer; int display; TYPE_1__ xkb; int monitors; int registry; } ;
struct TYPE_6__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int ) ;

int FUNC_13(void)
{
    VAR_3.wl.display = FUNC_8(((void*)0));
    if (!VAR_3.wl.display)
    {
        FUNC_3(VAR_0,
                        "Wayland: Failed to connect to display");
        return VAR_1;
    }

    VAR_3.wl.registry = FUNC_9(VAR_3.wl.display);
    FUNC_11(VAR_3.wl.registry, &VAR_4, ((void*)0));

    VAR_3.wl.monitors = FUNC_4(4, sizeof(_GLFWmonitor*));
    VAR_3.wl.monitorsSize = 4;

    VAR_3.wl.xkb.context = FUNC_12(0);
    if (!VAR_3.wl.xkb.context)
    {
        FUNC_3(VAR_0,
                        "Wayland: Failed to initialize xkb context");
        return VAR_1;
    }


    FUNC_10(VAR_3.wl.display);


    FUNC_10(VAR_3.wl.display);

    if (!FUNC_0())
        return VAR_1;

    FUNC_2();
    FUNC_1();

    if (VAR_3.wl.pointer && VAR_3.wl.shm)
    {
        VAR_3.wl.cursorTheme = FUNC_7(((void*)0), 32, VAR_3.wl.shm);
        if (!VAR_3.wl.cursorTheme)
        {
            FUNC_3(VAR_0,
                            "Wayland: Unable to load default cursor theme\n");
            return VAR_1;
        }
        VAR_3.wl.defaultCursor =
            FUNC_6(VAR_3.wl.cursorTheme, "left_ptr");
        if (!VAR_3.wl.defaultCursor)
        {
            FUNC_3(VAR_0,
                            "Wayland: Unable to load default left pointer\n");
            return VAR_1;
        }
        VAR_3.wl.cursorSurface =
            FUNC_5(VAR_3.wl.compositor);
    }

    return VAR_2;
}
