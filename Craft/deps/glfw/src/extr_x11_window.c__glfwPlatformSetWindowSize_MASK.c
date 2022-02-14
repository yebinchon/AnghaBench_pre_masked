
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int handle; } ;
struct TYPE_14__ {TYPE_1__ x11; int resizable; scalar_t__ monitor; int videoMode; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_15__ {int flags; int min_width; int max_width; int min_height; int max_height; } ;
typedef TYPE_4__ XSizeHints ;
struct TYPE_13__ {int display; int NET_WM_STATE_FULLSCREEN; int NET_WM_STATE; } ;
struct TYPE_17__ {TYPE_2__ x11; } ;
struct TYPE_16__ {int width; int height; } ;
typedef TYPE_5__ GLFWvidmode ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 TYPE_8__ VAR_2 ;
 int FUNC_5 (scalar_t__,TYPE_5__*) ;
 int FUNC_6 (scalar_t__,int *) ;

void FUNC_7(_GLFWwindow* VAR_3, int VAR_4, int VAR_5)
{
    if (VAR_3->monitor)
    {
        FUNC_6(VAR_3->monitor, &VAR_3->videoMode);

        if (!VAR_2.x11.NET_WM_STATE || !VAR_2.x11.NET_WM_STATE_FULLSCREEN)
        {
            GLFWvidmode VAR_6;
            FUNC_5(VAR_3->monitor, &VAR_6);
            FUNC_3(VAR_2.x11.display, VAR_3->x11.handle,
                          VAR_6.width, VAR_6.height);
        }
    }
    else
    {
        if (!VAR_3->resizable)
        {


            XSizeHints* VAR_7 = FUNC_0();

            VAR_7->flags |= (VAR_1 | VAR_0);
            VAR_7->min_width = VAR_7->max_width = VAR_4;
            VAR_7->min_height = VAR_7->max_height = VAR_5;

            FUNC_4(VAR_2.x11.display, VAR_3->x11.handle, VAR_7);
            FUNC_2(VAR_7);
        }

        FUNC_3(VAR_2.x11.display, VAR_3->x11.handle, VAR_4, VAR_5);
    }

    FUNC_1(VAR_2.x11.display);
}
