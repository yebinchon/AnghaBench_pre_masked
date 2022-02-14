
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
struct TYPE_12__ {int major; void* detectable; scalar_t__ available; scalar_t__ minor; int errorBase; int eventBase; int majorOpcode; } ;
struct TYPE_11__ {int major; void* available; scalar_t__ minor; int errorBase; int eventBase; int majorOpcode; } ;
struct TYPE_16__ {void* available; int minor; int major; } ;
struct TYPE_14__ {int major; int minor; void* gammaBroken; void* available; int errorBase; int eventBase; } ;
struct TYPE_13__ {int errorBase; int eventBase; int available; } ;
struct TYPE_15__ {int display; void* XdndSelection; void* XdndFinished; void* XdndLeave; void* XdndDrop; void* XdndActionCopy; void* XdndStatus; void* XdndPosition; void* XdndEnter; void* XdndAware; void* SAVE_TARGETS; void* CLIPBOARD_MANAGER; void* CLIPBOARD; void* MULTIPLE; void* TARGETS; void* GLFW_SELECTION; void* ATOM_PAIR; void* COMPOUND_STRING; void* UTF8_STRING; void* NULL_; TYPE_2__ xkb; TYPE_1__ xi; TYPE_6__ xinerama; TYPE_4__ randr; int root; TYPE_3__ vidmode; void* MOTIF_WM_HINTS; void* WM_DELETE_WINDOW; void* WM_STATE; void* WM_PROTOCOLS; } ;
struct TYPE_18__ {TYPE_5__ x11; } ;
typedef void* GLboolean ;
typedef scalar_t__ Bool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int*,scalar_t__*) ;
 void* FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ,char*,int *,int *,int *) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int ,int ) ;
 TYPE_7__* FUNC_6 (int ,int ) ;
 void* FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int ,int*,int*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *,int *) ;
 scalar_t__ FUNC_11 (int ,int *,int *,int *,int*,scalar_t__*) ;
 scalar_t__ FUNC_12 (int ,int ,scalar_t__*) ;
 TYPE_8__ VAR_6 ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

__attribute__((used)) static GLboolean FUNC_16(void)
{

    VAR_6.x11.WM_PROTOCOLS = FUNC_2(VAR_6.x11.display,
                                         "WM_PROTOCOLS",
                                         VAR_1);
    VAR_6.x11.WM_STATE = FUNC_2(VAR_6.x11.display, "WM_STATE", VAR_1);
    VAR_6.x11.WM_DELETE_WINDOW = FUNC_2(VAR_6.x11.display,
                                             "WM_DELETE_WINDOW",
                                             VAR_1);
    VAR_6.x11.MOTIF_WM_HINTS = FUNC_2(VAR_6.x11.display,
                                           "_MOTIF_WM_HINTS",
                                           VAR_1);
    VAR_6.x11.randr.available =
        FUNC_7(VAR_6.x11.display,
                          &VAR_6.x11.randr.eventBase,
                          &VAR_6.x11.randr.errorBase);

    if (VAR_6.x11.randr.available)
    {
        XRRScreenResources* VAR_7;

        if (!FUNC_8(VAR_6.x11.display,
                             &VAR_6.x11.randr.major,
                             &VAR_6.x11.randr.minor))
        {
            FUNC_13(VAR_2,
                            "X11: Failed to query RandR version");
            return VAR_3;
        }


        if (VAR_6.x11.randr.major == 1 && VAR_6.x11.randr.minor < 3)
            VAR_6.x11.randr.available = VAR_3;

        VAR_7 = FUNC_6(VAR_6.x11.display, VAR_6.x11.root);

        if (!VAR_7->ncrtc || !FUNC_5(VAR_6.x11.display, VAR_7->crtcs[0]))
        {




            FUNC_13(VAR_2,
                            "X11: RandR gamma ramp support seems broken");
            VAR_6.x11.randr.gammaBroken = VAR_4;
        }

        FUNC_4(VAR_7);
    }

    if (FUNC_10(VAR_6.x11.display,
                               &VAR_6.x11.xinerama.major,
                               &VAR_6.x11.xinerama.minor))
    {
        if (FUNC_9(VAR_6.x11.display))
            VAR_6.x11.xinerama.available = VAR_4;
    }
    VAR_6.x11.xkb.major = 1;
    VAR_6.x11.xkb.minor = 0;
    VAR_6.x11.xkb.available =
        FUNC_11(VAR_6.x11.display,
                          &VAR_6.x11.xkb.majorOpcode,
                          &VAR_6.x11.xkb.eventBase,
                          &VAR_6.x11.xkb.errorBase,
                          &VAR_6.x11.xkb.major,
                          &VAR_6.x11.xkb.minor);

    if (VAR_6.x11.xkb.available)
    {
        Bool VAR_8;

        if (FUNC_12(VAR_6.x11.display, VAR_5, &VAR_8))
        {
            if (VAR_8)
                VAR_6.x11.xkb.detectable = VAR_4;
        }
    }




    FUNC_14();


    FUNC_15();


    VAR_6.x11.NULL_ = FUNC_2(VAR_6.x11.display, "NULL", VAR_1);
    VAR_6.x11.UTF8_STRING =
        FUNC_2(VAR_6.x11.display, "UTF8_STRING", VAR_1);
    VAR_6.x11.COMPOUND_STRING =
        FUNC_2(VAR_6.x11.display, "COMPOUND_STRING", VAR_1);
    VAR_6.x11.ATOM_PAIR = FUNC_2(VAR_6.x11.display, "ATOM_PAIR", VAR_1);


    VAR_6.x11.GLFW_SELECTION =
        FUNC_2(VAR_6.x11.display, "GLFW_SELECTION", VAR_1);


    VAR_6.x11.TARGETS = FUNC_2(VAR_6.x11.display, "TARGETS", VAR_1);
    VAR_6.x11.MULTIPLE = FUNC_2(VAR_6.x11.display, "MULTIPLE", VAR_1);
    VAR_6.x11.CLIPBOARD = FUNC_2(VAR_6.x11.display, "CLIPBOARD", VAR_1);


    VAR_6.x11.CLIPBOARD_MANAGER =
        FUNC_2(VAR_6.x11.display, "CLIPBOARD_MANAGER", VAR_1);
    VAR_6.x11.SAVE_TARGETS =
        FUNC_2(VAR_6.x11.display, "SAVE_TARGETS", VAR_1);


    VAR_6.x11.XdndAware = FUNC_2(VAR_6.x11.display, "XdndAware", VAR_5);
    VAR_6.x11.XdndEnter = FUNC_2(VAR_6.x11.display, "XdndEnter", VAR_5);
    VAR_6.x11.XdndPosition = FUNC_2(VAR_6.x11.display, "XdndPosition", VAR_5);
    VAR_6.x11.XdndStatus = FUNC_2(VAR_6.x11.display, "XdndStatus", VAR_5);
    VAR_6.x11.XdndActionCopy = FUNC_2(VAR_6.x11.display, "XdndActionCopy", VAR_5);
    VAR_6.x11.XdndDrop = FUNC_2(VAR_6.x11.display, "XdndDrop", VAR_5);
    VAR_6.x11.XdndLeave = FUNC_2(VAR_6.x11.display, "XdndLeave", VAR_5);
    VAR_6.x11.XdndFinished = FUNC_2(VAR_6.x11.display, "XdndFinished", VAR_5);
    VAR_6.x11.XdndSelection = FUNC_2(VAR_6.x11.display, "XdndSelection", VAR_5);

    return VAR_4;
}
