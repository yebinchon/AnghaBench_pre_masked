
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * display; int * im; int clipboardString; scalar_t__ cursor; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;
typedef scalar_t__ Cursor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void FUNC_6(void)
{
    if (VAR_0.x11.cursor)
    {
        FUNC_2(VAR_0.x11.display, VAR_0.x11.cursor);
        VAR_0.x11.cursor = (Cursor) 0;
    }

    FUNC_5(VAR_0.x11.clipboardString);

    if (VAR_0.x11.im)
    {
        FUNC_1(VAR_0.x11.im);
        VAR_0.x11.im = ((void*)0);
    }

    FUNC_4();

    if (VAR_0.x11.display)
    {
        FUNC_0(VAR_0.x11.display);
        VAR_0.x11.display = ((void*)0);
    }



    FUNC_3();
}
