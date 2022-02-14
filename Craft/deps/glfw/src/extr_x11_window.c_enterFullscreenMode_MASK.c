
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_20__ {int handle; } ;
struct TYPE_22__ {TYPE_4__ x11; TYPE_10__* monitor; int videoMode; } ;
typedef TYPE_6__ _GLFWwindow ;
struct TYPE_23__ {int height; int width; } ;
struct TYPE_18__ {scalar_t__ available; } ;
struct TYPE_17__ {scalar_t__ count; int exposure; int blanking; int interval; int timeout; } ;
struct TYPE_21__ {int NET_WM_STATE_FULLSCREEN; scalar_t__ NET_WM_STATE; int display; scalar_t__ NET_ACTIVE_WINDOW; scalar_t__ NET_WM_FULLSCREEN_MONITORS; TYPE_2__ xinerama; scalar_t__ NET_WM_BYPASS_COMPOSITOR; TYPE_1__ saver; } ;
struct TYPE_19__ {int index; } ;
struct TYPE_16__ {TYPE_5__ x11; } ;
struct TYPE_15__ {TYPE_3__ x11; } ;
typedef TYPE_7__ GLFWvidmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int,int ,unsigned char*,int) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int,int,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 TYPE_14__ VAR_7 ;
 int FUNC_6 (TYPE_10__*,int*,int*) ;
 int FUNC_7 (TYPE_10__*,TYPE_7__*) ;
 int FUNC_8 (TYPE_10__*,int *) ;
 int FUNC_9 (TYPE_6__*,scalar_t__,int,int,int,int,int ) ;

__attribute__((used)) static void FUNC_10(_GLFWwindow* VAR_8)
{
    if (VAR_7.x11.saver.count == 0)
    {

        FUNC_1(VAR_7.x11.display,
                        &VAR_7.x11.saver.timeout,
                        &VAR_7.x11.saver.interval,
                        &VAR_7.x11.saver.blanking,
                        &VAR_7.x11.saver.exposure);


        FUNC_5(VAR_7.x11.display, 0, 0, VAR_2,
                        VAR_1);
    }

    VAR_7.x11.saver.count++;

    FUNC_8(VAR_8->monitor, &VAR_8->videoMode);

    if (VAR_7.x11.NET_WM_BYPASS_COMPOSITOR)
    {
        const unsigned long VAR_9 = 1;

        FUNC_0(VAR_7.x11.display, VAR_8->x11.handle,
                        VAR_7.x11.NET_WM_BYPASS_COMPOSITOR, VAR_5, 32,
                        VAR_3, (unsigned char*) &VAR_9, 1);
    }


    {
        int VAR_10, VAR_11;
        GLFWvidmode VAR_12;

        FUNC_6(VAR_8->monitor, &VAR_10, &VAR_11);
        FUNC_7(VAR_8->monitor, &VAR_12);

        FUNC_2(VAR_7.x11.display, VAR_8->x11.handle,
                          VAR_10, VAR_11, VAR_12.width, VAR_12.height);
    }

    if (VAR_7.x11.xinerama.available && VAR_7.x11.NET_WM_FULLSCREEN_MONITORS)
    {
        FUNC_9(VAR_8,
                      VAR_7.x11.NET_WM_FULLSCREEN_MONITORS,
                      VAR_8->monitor->x11.index,
                      VAR_8->monitor->x11.index,
                      VAR_8->monitor->x11.index,
                      VAR_8->monitor->x11.index,
                      0);
    }

    if (VAR_7.x11.NET_ACTIVE_WINDOW)
    {



        FUNC_9(VAR_8, VAR_7.x11.NET_ACTIVE_WINDOW, 1, 0, 0, 0, 0);
    }
    else
    {
        FUNC_3(VAR_7.x11.display, VAR_8->x11.handle);
        FUNC_4(VAR_7.x11.display, VAR_8->x11.handle,
                       VAR_4, VAR_0);
    }

    if (VAR_7.x11.NET_WM_STATE && VAR_7.x11.NET_WM_STATE_FULLSCREEN)
    {



        FUNC_9(VAR_8,
                      VAR_7.x11.NET_WM_STATE,
                      VAR_6,
                      VAR_7.x11.NET_WM_STATE_FULLSCREEN,
                      0, 1, 0);
    }
}
