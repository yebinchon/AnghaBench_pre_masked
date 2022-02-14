
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_16__ {int handle; int overrideRedirect; } ;
struct TYPE_18__ {TYPE_4__ x11; TYPE_2__* monitor; } ;
typedef TYPE_6__ _GLFWwindow ;
struct TYPE_19__ {int override_redirect; } ;
typedef TYPE_7__ XSetWindowAttributes ;
struct TYPE_15__ {scalar_t__ available; } ;
struct TYPE_17__ {int NET_WM_STATE_FULLSCREEN; scalar_t__ NET_WM_BYPASS_COMPOSITOR; int display; scalar_t__ NET_WM_STATE; scalar_t__ NET_WM_FULLSCREEN_MONITORS; TYPE_3__ xinerama; } ;
struct TYPE_13__ {int index; } ;
struct TYPE_14__ {TYPE_1__ x11; } ;
struct TYPE_12__ {TYPE_5__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int,int ,unsigned char*,int) ;
 int FUNC_1 (int ,int ,int ,TYPE_7__*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_10__ VAR_9 ;
 int FUNC_3 (TYPE_6__*,scalar_t__,int,int,int,int,int ) ;

__attribute__((used)) static void FUNC_4(_GLFWwindow* VAR_10)
{
    if (VAR_10->monitor)
    {
        if (VAR_9.x11.xinerama.available &&
            VAR_9.x11.NET_WM_FULLSCREEN_MONITORS)
        {
            FUNC_3(VAR_10,
                          VAR_9.x11.NET_WM_FULLSCREEN_MONITORS,
                          VAR_10->monitor->x11.index,
                          VAR_10->monitor->x11.index,
                          VAR_10->monitor->x11.index,
                          VAR_10->monitor->x11.index,
                          0);
        }

        if (VAR_9.x11.NET_WM_STATE && VAR_9.x11.NET_WM_STATE_FULLSCREEN)
        {
            FUNC_3(VAR_10,
                          VAR_9.x11.NET_WM_STATE,
                          VAR_7,
                          VAR_9.x11.NET_WM_STATE_FULLSCREEN,
                          0, 1, 0);
        }
        else
        {
            XSetWindowAttributes VAR_11;
            VAR_11.override_redirect = VAR_5;
            FUNC_1(VAR_9.x11.display,
                                    VAR_10->x11.handle,
                                    VAR_0,
                                    &VAR_11);

            VAR_10->x11.overrideRedirect = VAR_3;
        }


        {
            const unsigned long VAR_12 = 1;

            FUNC_0(VAR_9.x11.display, VAR_10->x11.handle,
                            VAR_9.x11.NET_WM_BYPASS_COMPOSITOR, VAR_6, 32,
                            VAR_4, (unsigned char*) &VAR_12, 1);
        }
    }
    else
    {
        if (VAR_9.x11.xinerama.available &&
            VAR_9.x11.NET_WM_FULLSCREEN_MONITORS)
        {
            FUNC_2(VAR_9.x11.display, VAR_10->x11.handle,
                            VAR_9.x11.NET_WM_FULLSCREEN_MONITORS);
        }

        if (VAR_9.x11.NET_WM_STATE && VAR_9.x11.NET_WM_STATE_FULLSCREEN)
        {
            FUNC_3(VAR_10,
                          VAR_9.x11.NET_WM_STATE,
                          VAR_8,
                          VAR_9.x11.NET_WM_STATE_FULLSCREEN,
                          0, 1, 0);
        }
        else
        {
            XSetWindowAttributes VAR_13;
            VAR_13.override_redirect = VAR_1;
            FUNC_1(VAR_9.x11.display,
                                    VAR_10->x11.handle,
                                    VAR_0,
                                    &VAR_13);

            VAR_10->x11.overrideRedirect = VAR_2;
        }


        {
            FUNC_2(VAR_9.x11.display, VAR_10->x11.handle,
                            VAR_9.x11.NET_WM_BYPASS_COMPOSITOR);
        }
    }
}
