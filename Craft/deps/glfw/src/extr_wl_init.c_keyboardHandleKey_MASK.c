
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xkb_keysym_t ;
typedef scalar_t__ uint32_t ;
struct wl_keyboard {int dummy; } ;
typedef int _GLFWwindow ;
struct TYPE_4__ {int modifiers; int state; } ;
struct TYPE_5__ {TYPE_1__ xkb; int * keyboardFocus; } ;
struct TYPE_6__ {TYPE_2__ wl; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 (int *,long,int const,int const) ;
 int FUNC_1 (int *,int,scalar_t__,int,int) ;
 long FUNC_2 (int const) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int const**) ;

__attribute__((used)) static void FUNC_5(void* VAR_6,
                              struct wl_keyboard* VAR_7,
                              uint32_t VAR_8,
                              uint32_t VAR_9,
                              uint32_t VAR_10,
                              uint32_t VAR_11)
{
    uint32_t VAR_12, VAR_13;
    long VAR_14;
    int VAR_15;
    int VAR_16;
    const xkb_keysym_t *VAR_17;
    _GLFWwindow* VAR_18 = VAR_5.wl.keyboardFocus;

    if (!VAR_18)
        return;

    VAR_15 = FUNC_3(VAR_10);
    VAR_16 = VAR_11 == VAR_4
            ? VAR_2 : VAR_3;

    FUNC_1(VAR_18, VAR_15, VAR_10, VAR_16,
                  VAR_5.wl.xkb.modifiers);

    VAR_12 = VAR_10 + 8;
    VAR_13 = FUNC_4(VAR_5.wl.xkb.state, VAR_12, &VAR_17);

    if (VAR_13 == 1)
    {
        VAR_14 = FUNC_2(VAR_17[0]);
        if (VAR_14 != -1)
        {
            const int VAR_19 = VAR_5.wl.xkb.modifiers;
            const int VAR_20 = !(VAR_19 & (VAR_1 | VAR_0));
            FUNC_0(VAR_18, VAR_14, VAR_19, VAR_20);
        }
    }
}
