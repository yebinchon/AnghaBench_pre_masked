
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
struct TYPE_7__ {void* cursorPosY; void* cursorPosX; } ;
struct TYPE_8__ {scalar_t__ cursorMode; TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_6__ {TYPE_3__* pointerFocus; } ;
struct TYPE_9__ {TYPE_1__ wl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,void*,void*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void* VAR_3,
                                struct wl_pointer* VAR_4,
                                uint32_t VAR_5,
                                wl_fixed_t VAR_6,
                                wl_fixed_t VAR_7)
{
    _GLFWwindow* VAR_8 = VAR_2.wl.pointerFocus;

    if (!VAR_8)
        return;

    if (VAR_8->cursorMode == VAR_0)
    {

        FUNC_1(VAR_1,
                        "Wayland: GLFW_CURSOR_DISABLED not supported");
        return;
    }
    else
    {
        VAR_8->wl.cursorPosX = FUNC_2(VAR_6);
        VAR_8->wl.cursorPosY = FUNC_2(VAR_7);
    }

    FUNC_0(VAR_8,
                           FUNC_2(VAR_6),
                           FUNC_2(VAR_7));
}
