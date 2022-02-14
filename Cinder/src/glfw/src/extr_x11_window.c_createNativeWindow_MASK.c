
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;


typedef int protocols ;
typedef int pid_t ;
typedef int hints ;
struct TYPE_24__ {scalar_t__ title; int height; int width; scalar_t__ maximized; scalar_t__ floating; int decorated; } ;
typedef TYPE_3__ _GLFWwndconfig ;
struct TYPE_23__ {int height; int width; int ypos; int xpos; int handle; int ic; int colormap; } ;
struct TYPE_25__ {TYPE_2__ x11; int monitor; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_26__ {char* res_name; char* res_class; int initial_state; int flags; } ;
typedef TYPE_5__ XWMHints ;
struct TYPE_27__ {int event_mask; scalar_t__ border_pixel; int colormap; } ;
typedef TYPE_6__ XSetWindowAttributes ;
typedef int XPointer ;
typedef TYPE_5__ XClassHint ;
typedef int Visual ;
struct TYPE_22__ {int NET_WM_STATE_ABOVE; int NET_WM_STATE_MAXIMIZED_VERT; int NET_WM_STATE_MAXIMIZED_HORZ; int WM_DELETE_WINDOW; int NET_WM_PING; int NET_WM_WINDOW_TYPE_NORMAL; scalar_t__ im; scalar_t__ XdndAware; int display; scalar_t__ NET_WM_WINDOW_TYPE; scalar_t__ NET_WM_PID; scalar_t__ NET_WM_STATE; scalar_t__ MOTIF_WM_HINTS; int context; int root; } ;
struct TYPE_21__ {TYPE_1__ x11; } ;
typedef int GLFWbool ;
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
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_5__* FUNC_0 () ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,int,int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (scalar_t__,int ,int,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int,int ,int *,unsigned long const,TYPE_6__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,TYPE_5__*) ;
 int FUNC_9 (int ,int ,TYPE_5__*) ;
 int FUNC_10 (int ,int ,int*,int) ;
 TYPE_14__ VAR_31 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (TYPE_4__*,int *,int *) ;
 int FUNC_15 (TYPE_4__*,int *,int *) ;
 int FUNC_16 (TYPE_4__*,scalar_t__) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static GLFWbool FUNC_21(_GLFWwindow* VAR_32,
                                   const _GLFWwndconfig* VAR_33,
                                   Visual* VAR_34, int VAR_35)
{

    VAR_32->x11.colormap = FUNC_3(VAR_31.x11.display,
                                           VAR_31.x11.root,
                                           VAR_34,
                                           VAR_0);


    {
        XSetWindowAttributes VAR_36;
        const unsigned long VAR_37 = VAR_3 | VAR_4 | VAR_5;

        VAR_36.colormap = VAR_32->x11.colormap;
        VAR_36.border_pixel = 0;
        VAR_36.event_mask = VAR_22 | VAR_14 | VAR_15 |
                        VAR_18 | VAR_1 | VAR_2 |
                        VAR_7 | VAR_8 | VAR_23 |
                        VAR_6 | VAR_16 | VAR_20;

        FUNC_11();

        VAR_32->x11.handle = FUNC_5(VAR_31.x11.display,
                                           VAR_31.x11.root,
                                           0, 0,
                                           VAR_33->width, VAR_33->height,
                                           0,
                                           VAR_35,
                                           VAR_13,
                                           VAR_34,
                                           VAR_37,
                                           &VAR_36);

        FUNC_17();

        if (!VAR_32->x11.handle)
        {
            FUNC_13(VAR_11,
                               "X11: Failed to create window");
            return VAR_9;
        }

        FUNC_7(VAR_31.x11.display,
                     VAR_32->x11.handle,
                     VAR_31.x11.context,
                     (XPointer) VAR_32);
    }

    if (!VAR_33->decorated)
    {
        struct
        {
            unsigned long flags;
            unsigned long functions;
            unsigned long decorations;
            long input_mode;
            unsigned long status;
        } VAR_38;

        VAR_38.flags = 2;
        VAR_38.decorations = 0;

        FUNC_2(VAR_31.x11.display, VAR_32->x11.handle,
                        VAR_31.x11.MOTIF_WM_HINTS,
                        VAR_31.x11.MOTIF_WM_HINTS, 32,
                        VAR_19,
                        (unsigned char*) &VAR_38,
                        sizeof(VAR_38) / sizeof(long));
    }

    if (VAR_31.x11.NET_WM_STATE && !VAR_32->monitor)
    {
        Atom VAR_39[3];
        int VAR_40 = 0;

        if (VAR_33->floating)
        {
            if (VAR_31.x11.NET_WM_STATE_ABOVE)
                VAR_39[VAR_40++] = VAR_31.x11.NET_WM_STATE_ABOVE;
        }

        if (VAR_33->maximized)
        {
            if (VAR_31.x11.NET_WM_STATE_MAXIMIZED_VERT &&
                VAR_31.x11.NET_WM_STATE_MAXIMIZED_HORZ)
            {
                VAR_39[VAR_40++] = VAR_31.x11.NET_WM_STATE_MAXIMIZED_VERT;
                VAR_39[VAR_40++] = VAR_31.x11.NET_WM_STATE_MAXIMIZED_HORZ;
            }
        }

        if (VAR_40)
        {
            FUNC_2(VAR_31.x11.display, VAR_32->x11.handle,
                            VAR_31.x11.NET_WM_STATE, VAR_24, 32,
                            VAR_19, (unsigned char*) &VAR_39, VAR_40);
        }
    }


    {
        Atom VAR_41[] =
        {
            VAR_31.x11.WM_DELETE_WINDOW,
            VAR_31.x11.NET_WM_PING
        };

        FUNC_10(VAR_31.x11.display, VAR_32->x11.handle,
                        VAR_41, sizeof(VAR_41) / sizeof(Atom));
    }


    {
        const pid_t VAR_42 = FUNC_18();

        FUNC_2(VAR_31.x11.display, VAR_32->x11.handle,
                        VAR_31.x11.NET_WM_PID, VAR_25, 32,
                        VAR_19,
                        (unsigned char*) &VAR_42, 1);
    }

    if (VAR_31.x11.NET_WM_WINDOW_TYPE && VAR_31.x11.NET_WM_WINDOW_TYPE_NORMAL)
    {
        Atom VAR_43 = VAR_31.x11.NET_WM_WINDOW_TYPE_NORMAL;
        FUNC_2(VAR_31.x11.display, VAR_32->x11.handle,
                        VAR_31.x11.NET_WM_WINDOW_TYPE, VAR_24, 32,
                        VAR_19, (unsigned char*) &VAR_43, 1);
    }


    {
        XWMHints* VAR_44 = FUNC_1();
        if (!VAR_44)
        {
            FUNC_12(VAR_10,
                            "X11: Failed to allocate WM hints");
            return VAR_9;
        }

        VAR_44->flags = VAR_21;
        VAR_44->initial_state = VAR_17;

        FUNC_9(VAR_31.x11.display, VAR_32->x11.handle, VAR_44);
        FUNC_6(VAR_44);
    }

    FUNC_20(VAR_32, VAR_33->width, VAR_33->height);




    if (FUNC_19(VAR_33->title))
    {
        XClassHint* VAR_45 = FUNC_0();
        VAR_45->res_name = (char*) VAR_33->title;
        VAR_45->res_class = (char*) VAR_33->title;

        FUNC_8(VAR_31.x11.display, VAR_32->x11.handle, VAR_45);
        FUNC_6(VAR_45);
    }

    if (VAR_31.x11.XdndAware)
    {

        const Atom VAR_46 = 5;
        FUNC_2(VAR_31.x11.display, VAR_32->x11.handle,
                        VAR_31.x11.XdndAware, VAR_24, 32,
                        VAR_19, (unsigned char*) &VAR_46, 1);
    }

    FUNC_16(VAR_32, VAR_33->title);

    if (VAR_31.x11.im)
    {
        VAR_32->x11.ic = FUNC_4(VAR_31.x11.im,
                                   VAR_30,
                                   VAR_26 | VAR_27,
                                   VAR_28,
                                   VAR_32->x11.handle,
                                   VAR_29,
                                   VAR_32->x11.handle,
                                   ((void*)0));
    }

    FUNC_14(VAR_32, &VAR_32->x11.xpos, &VAR_32->x11.ypos);
    FUNC_15(VAR_32, &VAR_32->x11.width, &VAR_32->x11.height);

    return VAR_12;
}
