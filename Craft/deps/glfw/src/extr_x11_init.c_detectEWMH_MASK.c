
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ Window ;
struct TYPE_3__ {scalar_t__ root; void* NET_WM_BYPASS_COMPOSITOR; void* NET_REQUEST_FRAME_EXTENTS; void* NET_FRAME_EXTENTS; void* NET_ACTIVE_WINDOW; void* NET_WM_PING; void* NET_WM_PID; void* NET_WM_ICON_NAME; void* NET_WM_NAME; void* NET_WM_FULLSCREEN_MONITORS; void* NET_WM_STATE_FULLSCREEN; void* NET_WM_STATE_ABOVE; void* NET_WM_STATE; int display; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;
typedef scalar_t__ Atom ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,char*,int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,unsigned char**) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* FUNC_5 (scalar_t__*,unsigned long,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    Window* VAR_5 = ((void*)0);
    Window* VAR_6 = ((void*)0);


    Atom VAR_7 =
        FUNC_1(VAR_4.x11.display, "_NET_SUPPORTING_WM_CHECK", VAR_1);
    Atom VAR_8 =
        FUNC_1(VAR_4.x11.display, "_NET_SUPPORTED", VAR_1);
    if (VAR_7 == VAR_0 || VAR_8 == VAR_0)
        return;


    if (FUNC_2(VAR_4.x11.root,
                               VAR_7,
                               VAR_3,
                               (unsigned char**) &VAR_5) != 1)
    {
        if (VAR_5)
            FUNC_0(VAR_5);
        return;
    }

    FUNC_3();



    if (FUNC_2(*VAR_5,
                               VAR_7,
                               VAR_3,
                               (unsigned char**) &VAR_6) != 1)
    {
        FUNC_0(VAR_5);
        if (VAR_6)
            FUNC_0(VAR_6);
        return;
    }

    FUNC_4();


    if (*VAR_5 != *VAR_6)
    {
        FUNC_0(VAR_5);
        FUNC_0(VAR_6);
        return;
    }

    FUNC_0(VAR_5);
    FUNC_0(VAR_6);



    Atom* VAR_9;
    unsigned long VAR_10;



    VAR_10 = FUNC_2(VAR_4.x11.root,
                                       VAR_8,
                                       VAR_2,
                                       (unsigned char**) &VAR_9);


    VAR_4.x11.NET_WM_STATE =
        FUNC_5(VAR_9, VAR_10, "_NET_WM_STATE");
    VAR_4.x11.NET_WM_STATE_ABOVE =
        FUNC_5(VAR_9, VAR_10, "_NET_WM_STATE_ABOVE");
    VAR_4.x11.NET_WM_STATE_FULLSCREEN =
        FUNC_5(VAR_9, VAR_10, "_NET_WM_STATE_FULLSCREEN");
    VAR_4.x11.NET_WM_FULLSCREEN_MONITORS =
        FUNC_5(VAR_9, VAR_10, "_NET_WM_FULLSCREEN_MONITORS");
    VAR_4.x11.NET_WM_NAME =
        FUNC_5(VAR_9, VAR_10, "_NET_WM_NAME");
    VAR_4.x11.NET_WM_ICON_NAME =
        FUNC_5(VAR_9, VAR_10, "_NET_WM_ICON_NAME");
    VAR_4.x11.NET_WM_PID =
        FUNC_5(VAR_9, VAR_10, "_NET_WM_PID");
    VAR_4.x11.NET_WM_PING =
        FUNC_5(VAR_9, VAR_10, "_NET_WM_PING");
    VAR_4.x11.NET_ACTIVE_WINDOW =
        FUNC_5(VAR_9, VAR_10, "_NET_ACTIVE_WINDOW");
    VAR_4.x11.NET_FRAME_EXTENTS =
        FUNC_5(VAR_9, VAR_10, "_NET_FRAME_EXTENTS");
    VAR_4.x11.NET_REQUEST_FRAME_EXTENTS =
        FUNC_5(VAR_9, VAR_10, "_NET_REQUEST_FRAME_EXTENTS");
    VAR_4.x11.NET_WM_BYPASS_COMPOSITOR =
        FUNC_5(VAR_9, VAR_10, "_NET_WM_BYPASS_COMPOSITOR");

    FUNC_0(VAR_9);
}
