
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int * crtcs; int ncrtc; } ;
typedef TYPE_7__ XRRScreenResources ;
typedef scalar_t__ XGETXCBCONNECTION_T ;
struct TYPE_11__ {scalar_t__ handle; scalar_t__ XGetXCBConnection; } ;
struct TYPE_16__ {int major; void* detectable; scalar_t__ available; scalar_t__ minor; int errorBase; int eventBase; int majorOpcode; } ;
struct TYPE_14__ {void* available; int minor; int major; } ;
struct TYPE_13__ {int major; int minor; void* gammaBroken; void* available; int errorBase; int eventBase; } ;
struct TYPE_12__ {int errorBase; int eventBase; int available; } ;
struct TYPE_15__ {int display; void* MOTIF_WM_HINTS; void* NET_WM_BYPASS_COMPOSITOR; void* NET_WM_ICON_NAME; void* NET_WM_NAME; void* NET_WM_PID; void* NET_WM_PING; void* NET_WM_ICON; void* WM_DELETE_WINDOW; void* WM_STATE; void* WM_PROTOCOLS; void* XdndSelection; void* XdndFinished; void* XdndLeave; void* XdndDrop; void* XdndActionCopy; void* XdndStatus; void* XdndPosition; void* XdndEnter; void* XdndAware; void* SAVE_TARGETS; void* CLIPBOARD_MANAGER; void* CLIPBOARD; void* MULTIPLE; void* TARGETS; void* GLFW_SELECTION; void* ATOM_PAIR; void* COMPOUND_STRING; void* UTF8_STRING; void* NULL_; TYPE_1__ x11xcb; TYPE_6__ xkb; TYPE_4__ xinerama; int root; TYPE_3__ randr; TYPE_2__ vidmode; } ;
struct TYPE_18__ {TYPE_5__ x11; } ;
typedef void* GLFWbool ;
typedef scalar_t__ Bool ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int *) ;
 void* FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_7__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int*,int*) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *,int *) ;
 scalar_t__ FUNC_10 (int ,int *,int *,int *,int*,scalar_t__*) ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__*) ;
 TYPE_8__ VAR_7 ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (char*,int) ;
 scalar_t__ FUNC_16 (scalar_t__,char*) ;

__attribute__((used)) static GLFWbool FUNC_17(void)
{
    if (FUNC_5(VAR_7.x11.display,
                          &VAR_7.x11.randr.eventBase,
                          &VAR_7.x11.randr.errorBase))
    {
        if (FUNC_6(VAR_7.x11.display,
                            &VAR_7.x11.randr.major,
                            &VAR_7.x11.randr.minor))
        {

            if (VAR_7.x11.randr.major > 1 || VAR_7.x11.randr.minor >= 3)
                VAR_7.x11.randr.available = VAR_2;
        }
        else
        {
            FUNC_12(VAR_1,
                            "X11: Failed to query RandR version");
        }
    }

    if (VAR_7.x11.randr.available)
    {
        XRRScreenResources* VAR_8 = FUNC_4(VAR_7.x11.display,
                                                       VAR_7.x11.root);

        if (!VAR_8->ncrtc || !FUNC_3(VAR_7.x11.display, VAR_8->crtcs[0]))
        {




            FUNC_12(VAR_1,
                            "X11: RandR gamma ramp support seems broken");
            VAR_7.x11.randr.gammaBroken = VAR_2;
        }

        FUNC_2(VAR_8);

        FUNC_7(VAR_7.x11.display, VAR_7.x11.root,
                       VAR_3);
    }

    if (FUNC_9(VAR_7.x11.display,
                               &VAR_7.x11.xinerama.major,
                               &VAR_7.x11.xinerama.minor))
    {
        if (FUNC_8(VAR_7.x11.display))
            VAR_7.x11.xinerama.available = VAR_2;
    }


    VAR_7.x11.xkb.major = 1;
    VAR_7.x11.xkb.minor = 0;
    VAR_7.x11.xkb.available =
        FUNC_10(VAR_7.x11.display,
                          &VAR_7.x11.xkb.majorOpcode,
                          &VAR_7.x11.xkb.eventBase,
                          &VAR_7.x11.xkb.errorBase,
                          &VAR_7.x11.xkb.major,
                          &VAR_7.x11.xkb.minor);

    if (VAR_7.x11.xkb.available)
    {
        Bool VAR_9;

        if (FUNC_11(VAR_7.x11.display, VAR_6, &VAR_9))
        {
            if (VAR_9)
                VAR_7.x11.xkb.detectable = VAR_2;
        }
    }

    VAR_7.x11.x11xcb.handle = FUNC_15("libX11-xcb.so", VAR_5 | VAR_4);
    if (VAR_7.x11.x11xcb.handle)
    {
        VAR_7.x11.x11xcb.XGetXCBConnection = (XGETXCBCONNECTION_T)
            FUNC_16(VAR_7.x11.x11xcb.handle, "XGetXCBConnection");
    }




    FUNC_13();


    FUNC_14();


    VAR_7.x11.NULL_ = FUNC_1(VAR_7.x11.display, "NULL", VAR_0);
    VAR_7.x11.UTF8_STRING =
        FUNC_1(VAR_7.x11.display, "UTF8_STRING", VAR_0);
    VAR_7.x11.COMPOUND_STRING =
        FUNC_1(VAR_7.x11.display, "COMPOUND_STRING", VAR_0);
    VAR_7.x11.ATOM_PAIR = FUNC_1(VAR_7.x11.display, "ATOM_PAIR", VAR_0);


    VAR_7.x11.GLFW_SELECTION =
        FUNC_1(VAR_7.x11.display, "GLFW_SELECTION", VAR_0);


    VAR_7.x11.TARGETS = FUNC_1(VAR_7.x11.display, "TARGETS", VAR_0);
    VAR_7.x11.MULTIPLE = FUNC_1(VAR_7.x11.display, "MULTIPLE", VAR_0);
    VAR_7.x11.CLIPBOARD = FUNC_1(VAR_7.x11.display, "CLIPBOARD", VAR_0);


    VAR_7.x11.CLIPBOARD_MANAGER =
        FUNC_1(VAR_7.x11.display, "CLIPBOARD_MANAGER", VAR_0);
    VAR_7.x11.SAVE_TARGETS =
        FUNC_1(VAR_7.x11.display, "SAVE_TARGETS", VAR_0);


    VAR_7.x11.XdndAware = FUNC_1(VAR_7.x11.display, "XdndAware", VAR_0);
    VAR_7.x11.XdndEnter = FUNC_1(VAR_7.x11.display, "XdndEnter", VAR_0);
    VAR_7.x11.XdndPosition = FUNC_1(VAR_7.x11.display, "XdndPosition", VAR_0);
    VAR_7.x11.XdndStatus = FUNC_1(VAR_7.x11.display, "XdndStatus", VAR_0);
    VAR_7.x11.XdndActionCopy = FUNC_1(VAR_7.x11.display, "XdndActionCopy", VAR_0);
    VAR_7.x11.XdndDrop = FUNC_1(VAR_7.x11.display, "XdndDrop", VAR_0);
    VAR_7.x11.XdndLeave = FUNC_1(VAR_7.x11.display, "XdndLeave", VAR_0);
    VAR_7.x11.XdndFinished = FUNC_1(VAR_7.x11.display, "XdndFinished", VAR_0);
    VAR_7.x11.XdndSelection = FUNC_1(VAR_7.x11.display, "XdndSelection", VAR_0);




    VAR_7.x11.WM_PROTOCOLS =
        FUNC_1(VAR_7.x11.display, "WM_PROTOCOLS", VAR_0);
    VAR_7.x11.WM_STATE =
        FUNC_1(VAR_7.x11.display, "WM_STATE", VAR_0);
    VAR_7.x11.WM_DELETE_WINDOW =
        FUNC_1(VAR_7.x11.display, "WM_DELETE_WINDOW", VAR_0);
    VAR_7.x11.NET_WM_ICON =
        FUNC_1(VAR_7.x11.display, "_NET_WM_ICON", VAR_0);
    VAR_7.x11.NET_WM_PING =
        FUNC_1(VAR_7.x11.display, "_NET_WM_PING", VAR_0);
    VAR_7.x11.NET_WM_PID =
        FUNC_1(VAR_7.x11.display, "_NET_WM_PID", VAR_0);
    VAR_7.x11.NET_WM_NAME =
        FUNC_1(VAR_7.x11.display, "_NET_WM_NAME", VAR_0);
    VAR_7.x11.NET_WM_ICON_NAME =
        FUNC_1(VAR_7.x11.display, "_NET_WM_ICON_NAME", VAR_0);
    VAR_7.x11.NET_WM_BYPASS_COMPOSITOR =
        FUNC_1(VAR_7.x11.display, "_NET_WM_BYPASS_COMPOSITOR", VAR_0);
    VAR_7.x11.MOTIF_WM_HINTS =
        FUNC_1(VAR_7.x11.display, "_MOTIF_WM_HINTS", VAR_0);

    return VAR_2;
}
