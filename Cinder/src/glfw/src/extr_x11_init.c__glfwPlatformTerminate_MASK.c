
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * handle; } ;
struct TYPE_5__ {int * display; int * im; int clipboardString; scalar_t__ cursor; TYPE_1__ x11xcb; } ;
struct TYPE_6__ {TYPE_2__ x11; } ;
typedef scalar_t__ Cursor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 TYPE_3__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

void FUNC_9(void)
{
    if (VAR_0.x11.x11xcb.handle)
    {
        FUNC_7(VAR_0.x11.x11xcb.handle);
        VAR_0.x11.x11xcb.handle = ((void*)0);
    }

    if (VAR_0.x11.cursor)
    {
        FUNC_2(VAR_0.x11.display, VAR_0.x11.cursor);
        VAR_0.x11.cursor = (Cursor) 0;
    }

    FUNC_8(VAR_0.x11.clipboardString);

    if (VAR_0.x11.im)
    {
        FUNC_1(VAR_0.x11.im);
        VAR_0.x11.im = ((void*)0);
    }

    FUNC_3();

    if (VAR_0.x11.display)
    {
        FUNC_0(VAR_0.x11.display);
        VAR_0.x11.display = ((void*)0);
    }



    FUNC_4();

    FUNC_5();
    FUNC_6();
}
