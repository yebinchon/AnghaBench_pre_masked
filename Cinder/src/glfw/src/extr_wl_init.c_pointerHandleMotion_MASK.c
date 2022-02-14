
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
 TYPE_5__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,void*,void*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void* VAR_2,
                                struct wl_pointer* VAR_3,
                                uint32_t VAR_4,
                                wl_fixed_t VAR_5,
                                wl_fixed_t VAR_6)
{
    _GLFWwindow* VAR_7 = VAR_1.wl.pointerFocus;

    if (!VAR_7)
        return;

    if (VAR_7->cursorMode == VAR_0)
        return;
    else
    {
        VAR_7->wl.cursorPosX = FUNC_1(VAR_5);
        VAR_7->wl.cursorPosY = FUNC_1(VAR_6);
    }

    FUNC_0(VAR_7,
                        FUNC_1(VAR_5),
                        FUNC_1(VAR_6));
}
