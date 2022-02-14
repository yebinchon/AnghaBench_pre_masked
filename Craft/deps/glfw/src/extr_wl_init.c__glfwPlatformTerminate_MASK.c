
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ display; scalar_t__ registry; scalar_t__ cursorSurface; scalar_t__ cursorTheme; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(void)
{
    FUNC_0();
    FUNC_1();

    if (VAR_0.wl.cursorTheme)
        FUNC_2(VAR_0.wl.cursorTheme);
    if (VAR_0.wl.cursorSurface)
        FUNC_6(VAR_0.wl.cursorSurface);
    if (VAR_0.wl.registry)
        FUNC_5(VAR_0.wl.registry);
    if (VAR_0.wl.display)
        FUNC_4(VAR_0.wl.display);
    if (VAR_0.wl.display)
        FUNC_3(VAR_0.wl.display);
}
