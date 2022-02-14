
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wl_display {int dummy; } ;
struct pollfd {int member_1; int member_0; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_5__ {struct wl_display* display; } ;
struct TYPE_7__ {TYPE_2__* windowListHead; TYPE_1__ wl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (struct wl_display*) ;
 int FUNC_3 (struct wl_display*) ;
 scalar_t__ FUNC_4 (struct wl_display*) ;
 int FUNC_5 (struct wl_display*) ;
 scalar_t__ FUNC_6 (struct wl_display*) ;
 int FUNC_7 (struct wl_display*) ;

__attribute__((used)) static void
FUNC_8(int VAR_4)
{
    struct wl_display* VAR_5 = VAR_2.wl.display;
    struct pollfd VAR_6[] = {
        { FUNC_5(VAR_5), VAR_1 },
    };

    while (FUNC_6(VAR_5) != 0)
        FUNC_3(VAR_5);




    if (FUNC_4(VAR_5) < 0 && VAR_3 != VAR_0)
    {
        _GLFWwindow* VAR_7 = VAR_2.windowListHead;
        while (VAR_7)
        {
            FUNC_0(VAR_7);
            VAR_7 = VAR_7->next;
        }
        FUNC_2(VAR_5);
        return;
    }

    if (FUNC_1(VAR_6, 1, VAR_4) > 0)
    {
        FUNC_7(VAR_5);
        FUNC_3(VAR_5);
    }
    else
    {
        FUNC_2(VAR_5);
    }
}
