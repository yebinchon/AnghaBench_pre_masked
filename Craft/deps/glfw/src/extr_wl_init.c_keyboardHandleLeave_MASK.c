
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_keyboard {int dummy; } ;
typedef int _GLFWwindow ;
struct TYPE_3__ {int * keyboardFocus; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(void* VAR_2,
                                struct wl_keyboard* VAR_3,
                                uint32_t VAR_4,
                                struct wl_surface* VAR_5)
{
    _GLFWwindow* VAR_6 = VAR_1.wl.keyboardFocus;

    if (!VAR_6)
        return;

    VAR_1.wl.keyboardFocus = ((void*)0);
    FUNC_0(VAR_6, VAR_0);
}
