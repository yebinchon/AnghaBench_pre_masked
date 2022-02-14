
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef int pid_t ;
typedef int mask ;
typedef int hints ;
struct TYPE_35__ {scalar_t__ title; int height; int width; int resizable; scalar_t__ monitor; scalar_t__ floating; int decorated; } ;
typedef TYPE_4__ _GLFWwndconfig ;
struct TYPE_33__ {int height; int width; int ypos; int xpos; int handle; int ic; int colormap; } ;
struct TYPE_36__ {TYPE_2__ x11; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_37__ {int flags; char* res_name; char* res_class; int max_height; int min_height; int max_width; int min_width; scalar_t__ y; scalar_t__ x; int initial_state; } ;
typedef TYPE_6__ XWMHints ;
struct TYPE_38__ {int visual; int depth; } ;
typedef TYPE_7__ XVisualInfo ;
typedef TYPE_6__ XSizeHints ;
struct TYPE_39__ {int event_mask; int override_redirect; scalar_t__ border_pixel; int colormap; } ;
typedef TYPE_9__ XSetWindowAttributes ;
typedef int XPointer ;
struct TYPE_30__ {int deviceid; int mask_len; unsigned char* mask; } ;
typedef TYPE_10__ XIEventMask ;
typedef TYPE_6__ XClassHint ;
struct TYPE_32__ {scalar_t__ available; } ;
struct TYPE_34__ {int WM_DELETE_WINDOW; int NET_WM_PING; scalar_t__ im; int display; scalar_t__ XdndAware; TYPE_1__ xi; scalar_t__ NET_WM_PID; scalar_t__ NET_WM_STATE_ABOVE; scalar_t__ NET_WM_STATE; scalar_t__ MOTIF_WM_HINTS; int NET_WM_STATE_FULLSCREEN; int context; int root; } ;
struct TYPE_31__ {TYPE_3__ x11; } ;
typedef int GLboolean ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 TYPE_6__* FUNC_0 () ;
 TYPE_6__* FUNC_1 () ;
 TYPE_6__* FUNC_2 () ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__,int,int ,unsigned char*,int) ;
 int FUNC_4 (int ,int ,int ,TYPE_9__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int,int ,int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,unsigned long,TYPE_9__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_9 (int ,int ,TYPE_10__*,int) ;
 int FUNC_10 (unsigned char*,int ) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ,int ,TYPE_6__*) ;
 int FUNC_14 (int ,int ,TYPE_6__*) ;
 int FUNC_15 (int ,int ,TYPE_6__*) ;
 int FUNC_16 (int ,int ,int*,int) ;
 TYPE_7__* VAR_38 ;
 int VAR_39 ;
 TYPE_18__ VAR_40 ;
 int FUNC_17 () ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_21 (TYPE_5__*,int *,int *) ;
 int FUNC_22 (TYPE_5__*,int *,int *) ;
 int FUNC_23 (TYPE_5__*,scalar_t__) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 (TYPE_5__*,scalar_t__,int ,scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_27 (scalar_t__) ;

__attribute__((used)) static GLboolean FUNC_28(_GLFWwindow* VAR_41,
                              const _GLFWwndconfig* VAR_42)
{
    unsigned long VAR_43;
    XSetWindowAttributes VAR_44;
    XVisualInfo* VAR_45 = VAR_38;





    VAR_41->x11.colormap = FUNC_5(VAR_40.x11.display,
                                           VAR_40.x11.root,
                                           VAR_45->visual,
                                           VAR_0);


    {
        VAR_43 = VAR_3 | VAR_4 | VAR_5;

        VAR_44.colormap = VAR_41->x11.colormap;
        VAR_44.border_pixel = 0;
        VAR_44.event_mask = VAR_27 | VAR_15 | VAR_16 |
                        VAR_22 | VAR_1 | VAR_2 |
                        VAR_8 | VAR_9 | VAR_29 |
                        VAR_7 | VAR_17 | VAR_24;

        FUNC_17();

        VAR_41->x11.handle = FUNC_7(VAR_40.x11.display,
                                           VAR_40.x11.root,
                                           0, 0,
                                           VAR_42->width, VAR_42->height,
                                           0,
                                           VAR_45->depth,
                                           VAR_14,
                                           VAR_45->visual,
                                           VAR_43,
                                           &VAR_44);

        FUNC_24();

        if (!VAR_41->x11.handle)
        {
            FUNC_19(VAR_11,
                             "X11: Failed to create window");
            return VAR_12;
        }

        FUNC_12(VAR_40.x11.display,
                     VAR_41->x11.handle,
                     VAR_40.x11.context,
                     (XPointer) VAR_41);
    }

    if (VAR_42->monitor)
    {
        if (!VAR_40.x11.NET_WM_STATE || !VAR_40.x11.NET_WM_STATE_FULLSCREEN)
        {
            XSetWindowAttributes VAR_46;
            VAR_46.override_redirect = VAR_28;
            FUNC_4(VAR_40.x11.display,
                                    VAR_41->x11.handle,
                                    VAR_6,
                                    &VAR_46);
        }
    }
    else
    {
        if (!VAR_42->decorated)
        {
            struct
            {
                unsigned long flags;
                unsigned long functions;
                unsigned long decorations;
                long input_mode;
                unsigned long status;
            } VAR_47;

            VAR_47.flags = 2;
            VAR_47.decorations = 0;

            FUNC_3(VAR_40.x11.display, VAR_41->x11.handle,
                            VAR_40.x11.MOTIF_WM_HINTS,
                            VAR_40.x11.MOTIF_WM_HINTS, 32,
                            VAR_23,
                            (unsigned char*) &VAR_47,
                            sizeof(VAR_47) / sizeof(long));
        }

        if (VAR_42->floating)
        {
            if (VAR_40.x11.NET_WM_STATE && VAR_40.x11.NET_WM_STATE_ABOVE)
            {
                FUNC_26(VAR_41,
                              VAR_40.x11.NET_WM_STATE,
                              VAR_39,
                              VAR_40.x11.NET_WM_STATE_ABOVE,
                              0, 1, 0);
            }
        }
    }



    {
        int VAR_48 = 0;
        Atom VAR_49[2];



        if (VAR_40.x11.WM_DELETE_WINDOW)
            VAR_49[VAR_48++] = VAR_40.x11.WM_DELETE_WINDOW;




        if (VAR_40.x11.NET_WM_PING)
            VAR_49[VAR_48++] = VAR_40.x11.NET_WM_PING;

        if (VAR_48 > 0)
        {
            FUNC_16(VAR_40.x11.display, VAR_41->x11.handle,
                            VAR_49, VAR_48);
        }
    }

    if (VAR_40.x11.NET_WM_PID)
    {
        const pid_t VAR_50 = FUNC_25();

        FUNC_3(VAR_40.x11.display, VAR_41->x11.handle,
                        VAR_40.x11.NET_WM_PID, VAR_31, 32,
                        VAR_23,
                        (unsigned char*) &VAR_50, 1);
    }


    {
        XWMHints* VAR_51 = FUNC_2();
        if (!VAR_51)
        {
            FUNC_18(VAR_10,
                            "X11: Failed to allocate WM hints");
            return VAR_12;
        }

        VAR_51->flags = VAR_26;
        VAR_51->initial_state = VAR_18;

        FUNC_14(VAR_40.x11.display, VAR_41->x11.handle, VAR_51);
        FUNC_8(VAR_51);
    }


    {
        XSizeHints* VAR_52 = FUNC_1();
        VAR_52->flags = 0;

        if (VAR_42->monitor)
        {
            VAR_52->flags |= VAR_21;
            FUNC_20(VAR_42->monitor, &VAR_52->x, &VAR_52->y);
        }
        else
        {



            VAR_52->flags |= VAR_21;
            VAR_52->x = VAR_52->y = 0;
        }

        if (!VAR_42->resizable)
        {
            VAR_52->flags |= (VAR_20 | VAR_19);
            VAR_52->min_width = VAR_52->max_width = VAR_42->width;
            VAR_52->min_height = VAR_52->max_height = VAR_42->height;
        }

        FUNC_15(VAR_40.x11.display, VAR_41->x11.handle, VAR_52);
        FUNC_8(VAR_52);
    }




    if (FUNC_27(VAR_42->title))
    {
        XClassHint* VAR_53 = FUNC_0();
        VAR_53->res_name = (char*) VAR_42->title;
        VAR_53->res_class = (char*) VAR_42->title;

        FUNC_13(VAR_40.x11.display, VAR_41->x11.handle, VAR_53);
        FUNC_8(VAR_53);
    }
    if (VAR_40.x11.XdndAware)
    {

        const Atom VAR_54 = 5;
        FUNC_3(VAR_40.x11.display, VAR_41->x11.handle,
                        VAR_40.x11.XdndAware, VAR_30, 32,
                        VAR_23, (unsigned char*) &VAR_54, 1);
    }

    FUNC_23(VAR_41, VAR_42->title);

    FUNC_11(VAR_40.x11.display, VAR_41->x11.handle,
                   VAR_25);

    if (VAR_40.x11.im)
    {
        VAR_41->x11.ic = FUNC_6(VAR_40.x11.im,
                                   VAR_37,
                                   VAR_32 | VAR_33,
                                   VAR_35,
                                   VAR_41->x11.handle,
                                   VAR_36,
                                   VAR_41->x11.handle,
                                   ((void*)0));
    }

    FUNC_21(VAR_41, &VAR_41->x11.xpos, &VAR_41->x11.ypos);
    FUNC_22(VAR_41, &VAR_41->x11.width, &VAR_41->x11.height);

    return VAR_13;
}
