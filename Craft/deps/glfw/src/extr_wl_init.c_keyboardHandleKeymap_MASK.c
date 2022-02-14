
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct xkb_state {int dummy; } ;
struct xkb_keymap {int dummy; } ;
struct wl_keyboard {int dummy; } ;
struct TYPE_4__ {int control_mask; int alt_mask; int shift_mask; int super_mask; struct xkb_keymap* keymap; struct xkb_state* state; int context; } ;
struct TYPE_5__ {TYPE_1__ xkb; } ;
struct TYPE_6__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int *,scalar_t__,int ,int ,int,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (struct xkb_keymap*) ;
 int FUNC_5 (struct xkb_keymap*,char*) ;
 struct xkb_keymap* FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (struct xkb_keymap*) ;
 struct xkb_state* FUNC_8 (struct xkb_keymap*) ;
 int FUNC_9 (struct xkb_state*) ;

__attribute__((used)) static void FUNC_10(void* VAR_7,
                                 struct wl_keyboard* VAR_8,
                                 uint32_t VAR_9,
                                 int VAR_10,
                                 uint32_t VAR_11)
{
    struct xkb_keymap* VAR_12;
    struct xkb_state* VAR_13;
    char* VAR_14;

    if (VAR_9 != VAR_4)
    {
        FUNC_1(VAR_10);
        return;
    }

    VAR_14 = FUNC_2(((void*)0), VAR_11, VAR_3, VAR_2, VAR_10, 0);
    if (VAR_14 == VAR_1) {
        FUNC_1(VAR_10);
        return;
    }

    VAR_12 = FUNC_6(VAR_6.wl.xkb.context,
                                     VAR_14,
                                     VAR_5,
                                     0);
    FUNC_3(VAR_14, VAR_11);
    FUNC_1(VAR_10);

    if (!VAR_12)
    {
        FUNC_0(VAR_0,
                        "Wayland: Failed to compile keymap");
        return;
    }

    VAR_13 = FUNC_8(VAR_12);
    if (!VAR_13)
    {
        FUNC_0(VAR_0,
                        "Wayland: Failed to create XKB state");
        FUNC_7(VAR_12);
        return;
    }

    FUNC_4(VAR_6.wl.xkb.keymap);
    FUNC_9(VAR_6.wl.xkb.state);
    VAR_6.wl.xkb.keymap = VAR_12;
    VAR_6.wl.xkb.state = VAR_13;

    VAR_6.wl.xkb.control_mask =
        1 << FUNC_5(VAR_6.wl.xkb.keymap, "Control");
    VAR_6.wl.xkb.alt_mask =
        1 << FUNC_5(VAR_6.wl.xkb.keymap, "Mod1");
    VAR_6.wl.xkb.shift_mask =
        1 << FUNC_5(VAR_6.wl.xkb.keymap, "Shift");
    VAR_6.wl.xkb.super_mask =
        1 << FUNC_5(VAR_6.wl.xkb.keymap, "Mod4");
}
