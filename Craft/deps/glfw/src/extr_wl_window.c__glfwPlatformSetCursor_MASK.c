
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wl_surface {int dummy; } ;
struct wl_cursor_image {int height; int width; int hotspot_y; int hotspot_x; } ;
struct wl_buffer {int dummy; } ;
struct TYPE_10__ {TYPE_6__* currentCursor; } ;
struct TYPE_14__ {scalar_t__ cursorMode; TYPE_1__ wl; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_12__ {int height; int width; struct wl_buffer* buffer; int yhot; int xhot; } ;
struct TYPE_15__ {TYPE_3__ wl; } ;
typedef TYPE_6__ _GLFWcursor ;
struct TYPE_13__ {int pointerSerial; int pointer; TYPE_2__* defaultCursor; TYPE_5__* pointerFocus; struct wl_surface* cursorSurface; } ;
struct TYPE_16__ {TYPE_4__ wl; } ;
struct TYPE_11__ {struct wl_cursor_image** images; } ;


 scalar_t__ VAR_0 ;
 TYPE_9__ VAR_1 ;
 struct wl_buffer* FUNC_0 (struct wl_cursor_image*) ;
 int FUNC_1 (int ,int ,struct wl_surface*,int ,int ) ;
 int FUNC_2 (struct wl_surface*,struct wl_buffer*,int ,int ) ;
 int FUNC_3 (struct wl_surface*) ;
 int FUNC_4 (struct wl_surface*,int ,int ,int ,int ) ;

void FUNC_5(_GLFWwindow* VAR_2, _GLFWcursor* VAR_3)
{
    struct wl_buffer* VAR_4;
    struct wl_cursor_image* VAR_5;
    struct wl_surface* VAR_6 = VAR_1.wl.cursorSurface;

    if (!VAR_1.wl.pointer)
        return;

    VAR_2->wl.currentCursor = VAR_3;



    if (VAR_2 != VAR_1.wl.pointerFocus)
        return;

    if (VAR_2->cursorMode == VAR_0)
    {
        if (VAR_3 == ((void*)0))
        {
            VAR_5 = VAR_1.wl.defaultCursor->images[0];
            VAR_4 = FUNC_0(VAR_5);
            if (!VAR_4)
                return;
            FUNC_1(VAR_1.wl.pointer, VAR_1.wl.pointerSerial,
                                  VAR_6,
                                  VAR_5->hotspot_x,
                                  VAR_5->hotspot_y);
            FUNC_2(VAR_6, VAR_4, 0, 0);
            FUNC_4(VAR_6, 0, 0,
                              VAR_5->width, VAR_5->height);
            FUNC_3(VAR_6);
        }
        else
        {
            FUNC_1(VAR_1.wl.pointer, VAR_1.wl.pointerSerial,
                                  VAR_6,
                                  VAR_3->wl.xhot,
                                  VAR_3->wl.yhot);
            FUNC_2(VAR_6, VAR_3->wl.buffer, 0, 0);
            FUNC_4(VAR_6, 0, 0,
                              VAR_3->wl.width, VAR_3->wl.height);
            FUNC_3(VAR_6);
        }
    }
    else
    {
        FUNC_1(VAR_1.wl.pointer, VAR_1.wl.pointerSerial, ((void*)0), 0, 0);
    }
}
