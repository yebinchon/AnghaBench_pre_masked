
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_pointer {int dummy; } ;
struct TYPE_9__ {int currentCursor; } ;
struct TYPE_10__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_8__ {TYPE_3__* pointerFocus; int pointerSerial; } ;
struct TYPE_11__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (struct wl_surface*) ;

__attribute__((used)) static void FUNC_3(void* VAR_2,
                               struct wl_pointer* VAR_3,
                               uint32_t VAR_4,
                               struct wl_surface* VAR_5,
                               wl_fixed_t VAR_6,
                               wl_fixed_t VAR_7)
{
    _GLFWwindow* VAR_8 = FUNC_2(VAR_5);

    VAR_1.wl.pointerSerial = VAR_4;
    VAR_1.wl.pointerFocus = VAR_8;

    FUNC_1(VAR_8, VAR_8->wl.currentCursor);
    FUNC_0(VAR_8, VAR_0);
}
