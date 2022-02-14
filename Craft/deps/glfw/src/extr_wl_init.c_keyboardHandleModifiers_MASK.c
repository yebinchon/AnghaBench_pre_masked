
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xkb_mod_mask_t ;
typedef int uint32_t ;
struct wl_keyboard {int dummy; } ;
struct TYPE_4__ {int control_mask; int alt_mask; int shift_mask; int super_mask; unsigned int modifiers; int state; int keymap; } ;
struct TYPE_5__ {TYPE_1__ xkb; } ;
struct TYPE_6__ {TYPE_2__ wl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void* VAR_7,
                                    struct wl_keyboard* VAR_8,
                                    uint32_t VAR_9,
                                    uint32_t VAR_10,
                                    uint32_t VAR_11,
                                    uint32_t VAR_12,
                                    uint32_t VAR_13)
{
    xkb_mod_mask_t VAR_14;
    unsigned int VAR_15 = 0;

    if (!VAR_6.wl.xkb.keymap)
        return;

    FUNC_1(VAR_6.wl.xkb.state,
                          VAR_10,
                          VAR_11,
                          VAR_12,
                          0,
                          0,
                          VAR_13);

    VAR_14 = FUNC_0(VAR_6.wl.xkb.state,
                                    VAR_4 |
                                    VAR_5);
    if (VAR_14 & VAR_6.wl.xkb.control_mask)
        VAR_15 |= VAR_1;
    if (VAR_14 & VAR_6.wl.xkb.alt_mask)
        VAR_15 |= VAR_0;
    if (VAR_14 & VAR_6.wl.xkb.shift_mask)
        VAR_15 |= VAR_2;
    if (VAR_14 & VAR_6.wl.xkb.super_mask)
        VAR_15 |= VAR_3;
    VAR_6.wl.xkb.modifiers = VAR_15;
}
