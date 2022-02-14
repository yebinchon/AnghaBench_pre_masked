
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ handle; } ;
struct TYPE_8__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {int CLIPBOARD; int display; int clipboardString; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

void FUNC_5(_GLFWwindow* VAR_3, const char* VAR_4)
{
    FUNC_3(VAR_2.x11.clipboardString);
    VAR_2.x11.clipboardString = FUNC_4(VAR_4);

    FUNC_1(VAR_2.x11.display,
                       VAR_2.x11.CLIPBOARD,
                       VAR_3->x11.handle, VAR_0);

    if (FUNC_0(VAR_2.x11.display, VAR_2.x11.CLIPBOARD) !=
        VAR_3->x11.handle)
    {
        FUNC_2(VAR_1,
                        "X11: Failed to become owner of clipboard selection");
    }
}
