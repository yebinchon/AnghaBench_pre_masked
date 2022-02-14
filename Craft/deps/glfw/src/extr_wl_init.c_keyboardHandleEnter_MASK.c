
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_keyboard {int dummy; } ;
struct wl_array {int dummy; } ;
typedef int _GLFWwindow ;
struct TYPE_3__ {int * keyboardFocus; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (struct wl_surface*) ;

__attribute__((used)) static void FUNC_2(void* VAR_2,
                                struct wl_keyboard* VAR_3,
                                uint32_t VAR_4,
                                struct wl_surface* VAR_5,
                                struct wl_array* VAR_6)
{
    _GLFWwindow* VAR_7 = FUNC_1(VAR_5);

    VAR_1.wl.keyboardFocus = VAR_7;
    FUNC_0(VAR_7, VAR_0);
}
