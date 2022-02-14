
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct wl_surface {int dummy; } ;
struct wl_cursor_image {int height; int width; int hotspot_y; int hotspot_x; } ;
struct wl_cursor {struct wl_cursor_image** images; } ;
struct wl_buffer {int dummy; } ;
struct TYPE_13__ {TYPE_5__* currentCursor; } ;
struct TYPE_16__ {scalar_t__ cursorMode; TYPE_1__ wl; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_14__ {int height; int width; struct wl_buffer* buffer; int yhot; int xhot; struct wl_cursor_image* image; } ;
struct TYPE_17__ {TYPE_2__ wl; } ;
typedef TYPE_5__ _GLFWcursor ;
struct TYPE_15__ {int pointerSerial; int pointer; int cursorTheme; TYPE_4__* pointerFocus; struct wl_surface* cursorSurface; } ;
struct TYPE_12__ {TYPE_3__ wl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_11__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 struct wl_buffer* FUNC_4 (struct wl_cursor_image*) ;
 struct wl_cursor* FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,struct wl_surface*,int ,int ) ;
 int FUNC_7 (struct wl_surface*,struct wl_buffer*,int ,int ) ;
 int FUNC_8 (struct wl_surface*) ;
 int FUNC_9 (struct wl_surface*,int ,int ,int ,int ) ;

void FUNC_10(_GLFWwindow* VAR_5, _GLFWcursor* VAR_6)
{
    struct wl_buffer* VAR_7;
    struct wl_cursor* VAR_8;
    struct wl_cursor_image* VAR_9;
    struct wl_surface* VAR_10 = VAR_4.wl.cursorSurface;

    if (!VAR_4.wl.pointer)
        return;

    VAR_5->wl.currentCursor = VAR_6;



    if (VAR_5 != VAR_4.wl.pointerFocus)
        return;


    if (VAR_5->cursorMode != VAR_0 && FUNC_1(VAR_5))
        FUNC_3(VAR_5);

    if (VAR_5->cursorMode == VAR_2)
    {
        if (VAR_6)
            VAR_9 = VAR_6->wl.image;
        else
        {
            VAR_8 = FUNC_5(VAR_4.wl.cursorTheme,
                                                       "left_ptr");
            if (!VAR_8)
            {
                FUNC_0(VAR_3,
                                "Wayland: Standard cursor not found");
                return;
            }
            VAR_9 = VAR_8->images[0];
        }

        if (VAR_9)
        {
            VAR_7 = FUNC_4(VAR_9);
            if (!VAR_7)
                return;
            FUNC_6(VAR_4.wl.pointer, VAR_4.wl.pointerSerial,
                                  VAR_10,
                                  VAR_9->hotspot_x,
                                  VAR_9->hotspot_y);
            FUNC_7(VAR_10, VAR_7, 0, 0);
            FUNC_9(VAR_10, 0, 0,
                              VAR_9->width, VAR_9->height);
            FUNC_8(VAR_10);
        }
        else
        {
            FUNC_6(VAR_4.wl.pointer, VAR_4.wl.pointerSerial,
                                  VAR_10,
                                  VAR_6->wl.xhot,
                                  VAR_6->wl.yhot);
            FUNC_7(VAR_10, VAR_6->wl.buffer, 0, 0);
            FUNC_9(VAR_10, 0, 0,
                              VAR_6->wl.width, VAR_6->wl.height);
            FUNC_8(VAR_10);
        }
    }
    else if (VAR_5->cursorMode == VAR_0)
    {
        if (!FUNC_1(VAR_5))
            FUNC_2(VAR_5);
    }
    else if (VAR_5->cursorMode == VAR_1)
    {
        FUNC_6(VAR_4.wl.pointer, VAR_4.wl.pointerSerial,
                              ((void*)0), 0, 0);
    }
}
