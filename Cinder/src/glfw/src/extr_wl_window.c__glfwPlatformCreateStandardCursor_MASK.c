
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wl_cursor {int * images; } ;
struct TYPE_7__ {int image; } ;
struct TYPE_8__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWcursor ;
struct TYPE_6__ {int cursorTheme; } ;
struct TYPE_9__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 struct wl_cursor* FUNC_2 (int ,int ) ;

int FUNC_3(_GLFWcursor* VAR_4, int VAR_5)
{
    struct wl_cursor* VAR_6;

    VAR_6 = FUNC_2(VAR_3.wl.cursorTheme,
                                                FUNC_1(VAR_5));
    if (!VAR_6)
    {
        FUNC_0(VAR_1,
                        "Wayland: Standard cursor \"%s\" not found",
                        FUNC_1(VAR_5));
        return VAR_0;
    }

    VAR_4->wl.image = VAR_6->images[0];
    return VAR_2;
}
