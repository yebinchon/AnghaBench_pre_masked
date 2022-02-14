
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ Window ;
struct TYPE_3__ {scalar_t__ root; void* NET_REQUEST_FRAME_EXTENTS; void* NET_FRAME_EXTENTS; void* NET_ACTIVE_WINDOW; void* NET_WM_WINDOW_TYPE_NORMAL; void* NET_WM_WINDOW_TYPE; void* NET_WM_FULLSCREEN_MONITORS; void* NET_WM_STATE_MAXIMIZED_HORZ; void* NET_WM_STATE_MAXIMIZED_VERT; void* NET_WM_STATE_FULLSCREEN; void* NET_WM_STATE_ABOVE; void* NET_WM_STATE; int display; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,char*,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__ const,int ,unsigned char**) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* FUNC_5 (scalar_t__*,unsigned long,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    Window* VAR_4 = ((void*)0);
    Window* VAR_5 = ((void*)0);


    const Atom VAR_6 =
        FUNC_1(VAR_3.x11.display, "_NET_SUPPORTING_WM_CHECK", VAR_0);
    const Atom VAR_7 =
        FUNC_1(VAR_3.x11.display, "_NET_SUPPORTED", VAR_0);


    if (FUNC_2(VAR_3.x11.root,
                                  VAR_6,
                                  VAR_2,
                                  (unsigned char**) &VAR_4) != 1)
    {
        if (VAR_4)
            FUNC_0(VAR_4);
        return;
    }

    FUNC_3();



    if (FUNC_2(*VAR_4,
                                  VAR_6,
                                  VAR_2,
                                  (unsigned char**) &VAR_5) != 1)
    {
        FUNC_0(VAR_4);
        if (VAR_5)
            FUNC_0(VAR_5);
        return;
    }

    FUNC_4();


    if (*VAR_4 != *VAR_5)
    {
        FUNC_0(VAR_4);
        FUNC_0(VAR_5);
        return;
    }

    FUNC_0(VAR_4);
    FUNC_0(VAR_5);



    Atom* VAR_8;
    unsigned long VAR_9;



    VAR_9 = FUNC_2(VAR_3.x11.root,
                                          VAR_7,
                                          VAR_1,
                                          (unsigned char**) &VAR_8);


    VAR_3.x11.NET_WM_STATE =
        FUNC_5(VAR_8, VAR_9, "_NET_WM_STATE");
    VAR_3.x11.NET_WM_STATE_ABOVE =
        FUNC_5(VAR_8, VAR_9, "_NET_WM_STATE_ABOVE");
    VAR_3.x11.NET_WM_STATE_FULLSCREEN =
        FUNC_5(VAR_8, VAR_9, "_NET_WM_STATE_FULLSCREEN");
    VAR_3.x11.NET_WM_STATE_MAXIMIZED_VERT =
        FUNC_5(VAR_8, VAR_9, "_NET_WM_STATE_MAXIMIZED_VERT");
    VAR_3.x11.NET_WM_STATE_MAXIMIZED_HORZ =
        FUNC_5(VAR_8, VAR_9, "_NET_WM_STATE_MAXIMIZED_HORZ");
    VAR_3.x11.NET_WM_FULLSCREEN_MONITORS =
        FUNC_5(VAR_8, VAR_9, "_NET_WM_FULLSCREEN_MONITORS");
    VAR_3.x11.NET_WM_WINDOW_TYPE =
        FUNC_5(VAR_8, VAR_9, "_NET_WM_WINDOW_TYPE");
    VAR_3.x11.NET_WM_WINDOW_TYPE_NORMAL =
        FUNC_5(VAR_8, VAR_9, "_NET_WM_WINDOW_TYPE_NORMAL");
    VAR_3.x11.NET_ACTIVE_WINDOW =
        FUNC_5(VAR_8, VAR_9, "_NET_ACTIVE_WINDOW");
    VAR_3.x11.NET_FRAME_EXTENTS =
        FUNC_5(VAR_8, VAR_9, "_NET_FRAME_EXTENTS");
    VAR_3.x11.NET_REQUEST_FRAME_EXTENTS =
        FUNC_5(VAR_8, VAR_9, "_NET_REQUEST_FRAME_EXTENTS");

    FUNC_0(VAR_8);
}
