
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cursorMode; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int XEvent ;
struct TYPE_6__ {int display; } ;
struct TYPE_8__ {TYPE_2__* cursorWindow; TYPE_1__ x11; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (TYPE_2__*,int*,int*) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
    int VAR_2 = FUNC_1(VAR_1.x11.display);
    while (VAR_2--)
    {
        XEvent VAR_3;
        FUNC_0(VAR_1.x11.display, &VAR_3);
        FUNC_4(&VAR_3);
    }

    _GLFWwindow* VAR_4 = VAR_1.cursorWindow;
    if (VAR_4 && VAR_4->cursorMode == VAR_0)
    {
        int VAR_5, VAR_6;
        FUNC_2(VAR_4, &VAR_5, &VAR_6);
        FUNC_3(VAR_4, VAR_5 / 2, VAR_6 / 2);
    }
}
