
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int XEvent ;
struct TYPE_3__ {int display; scalar_t__ disabledCursorWindow; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
    FUNC_3();

    int VAR_1 = FUNC_2(VAR_0.x11.display);
    while (VAR_1--)
    {
        XEvent VAR_2;
        FUNC_1(VAR_0.x11.display, &VAR_2);
        FUNC_5(&VAR_2);
    }

    if (VAR_0.x11.disabledCursorWindow)
        FUNC_4(VAR_0.x11.disabledCursorWindow);

    FUNC_0(VAR_0.x11.display);
}
